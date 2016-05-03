/*******************************************************************************************
 * Copyright (c) 2006-7 Laboratorio di Sistemi di Elaborazione e Bioingegneria Informatica *
 *                      Universita' Campus BioMedico - Italy                               *
 *                                                                                         *
 * This program is free software; you can redistribute it and/or modify it under the terms *
 * of the GNU General Public License as published by the Free Software Foundation; either  *
 * version 2 of the License, or (at your option) any later version.                        *
 *                                                                                         *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY         *
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 	       *
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.                *
 *                                                                                         *
 * You should have received a copy of the GNU General Public License along with this       *
 * program; if not, write to the:                                                          *
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,                    *
 * MA  02111-1307, USA.                                                                    *
 *                                                                                         *
 * --------------------------------------------------------------------------------------- *
 * Project:  Capwap                                                                        *
 *                                                                                         *
 * Author :  Ludovico Rossi (ludo@bluepixysw.com)                                          *  
 *           Del Moro Andrea (andrea_delmoro@libero.it)                                    *
 *           Giovannini Federica (giovannini.federica@gmail.com)                           *
 *           Massimo Vellucci (m.vellucci@unicampus.it)                                    *
 *           Mauro Bisson (mauro.bis@gmail.com)                                            *
 *******************************************************************************************/

 
#include "CWCommon.h"

#ifdef DMALLOC
#include "../dmalloc-5.5.0/dmalloc.h"
#endif
extern int debug_print;
CWNetworkLev3Service gNetworkPreferredFamily = CW_IPv4;

__inline__ int CWNetworkGetAddressSize(CWNetworkLev4Address *addrPtr) {
	// assume address is valid
	
	switch ( ((struct sockaddr*)(addrPtr))->sa_family ) {
		
	#ifdef	IPV6
	// IPV6 is defined in Stevens' library
		case AF_INET6:
			return sizeof(struct sockaddr_in6);
			break;
	#endif
		case AF_INET:
		default:
			return sizeof(struct sockaddr_in);
	}
}

// send buf on an unconnected UDP socket. Unsafe means that we don't use DTLS
CWBool CWNetworkSendUnsafeUnconnected(CWSocket sock, CWNetworkLev4Address *addrPtr, const char *buf, int len) 
{
	if(buf == NULL || addrPtr == NULL) 
		return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	

	while(autelan_sendto(sock, (void *)buf, len, 0, (struct sockaddr*)addrPtr, CWNetworkGetAddressSize(addrPtr)) < 0) {
		if(errno == EINTR) continue;
		CWNetworkRaiseSystemError(CW_ERROR_SENDING);
	}
	
	return CW_TRUE;
}

// send buf on a "connected" UDP socket. Unsafe means that we don't use DTLS
CWBool CWNetworkSendUnsafeConnected(CWSocket sock, const char *buf, int len) 
{
	if(buf == NULL) 
		return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);

	while(autelan_send(sock, (void *)buf, len, 0) < 0) {
		if(errno == EINTR) continue;
		CWNetworkRaiseSystemError(CW_ERROR_SENDING);
	}
	
	return CW_TRUE;
}

// receive a datagram on an connected UDP socket (blocking). Unsafe means that we don't use DTLS
CWBool CWNetworkReceiveUnsafeConnected(CWSocket sock, char *buf, int len, int *readBytesPtr) {
	
	if(buf == NULL) return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	
	while((*readBytesPtr = autelan_recv(sock, buf, len, 0)) < 0) {
		if(errno == EINTR) continue;
		CWNetworkRaiseSystemError(CW_ERROR_RECEIVING);
	}
	
	return CW_TRUE;
}

// receive a datagram on an unconnected UDP socket (blocking). Unsafe means that we don't use DTLS
CWBool CWNetworkReceiveUnsafe(CWSocket sock, char *buf, int len, int flags, CWNetworkLev4Address *addrPtr, int *readBytesPtr) {
	socklen_t addrLen = sizeof(CWNetworkLev4Address);
	
	if(buf == NULL || addrPtr == NULL || readBytesPtr == NULL) return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	
	while((*readBytesPtr = autelan_recvfrom(sock, buf, len, flags, (struct sockaddr*)addrPtr, &addrLen)) < 0) {
		if(errno == EINTR) continue;
		CWNetworkRaiseSystemError(CW_ERROR_RECEIVING);
	}
	
	return CW_TRUE;
}

// init network for client
CWBool CWNetworkInitSocketClient(CWSocket *sockPtr, CWNetworkLev4Address *addrPtr,int port ,char * hostip) {
	int yes = 1;
	
	// NULL addrPtr means that we don't want to connect to a specific address
	if(sockPtr == NULL) return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	
#ifdef IPv6
    if(((*sockPtr)=socket((gNetworkPreferredFamily == CW_IPv4) ? AF_INET : AF_INET6, SOCK_DGRAM, IPPROTO_UDP)) < 0) {
#else
	if(((*sockPtr)=socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0) {
#endif
		CWNetworkRaiseSystemError(CW_ERROR_CREATING);
	}
	struct sockaddr_in addr;
	memset(&addr, 0, sizeof(struct sockaddr_in));
	addr.sin_family=AF_INET;
	addr.sin_port=autelan_htons(port);
	addr.sin_addr.s_addr = autelan_inet_addr(hostip);//INADDR_ANY;//htonl(INADDR_ANY); //(inet_addr(0.0.0.0));
#if 1 /* pei add for test 1227 */
	int on=1;
	/*zengmin modify by Coverity Unchecked return value 2013-06-08*/
	if(0 != autelan_setsockopt(*sockPtr,SOL_SOCKET,SO_REUSEADDR,&on,sizeof(on)))
		CWWTPDebugLog("setsockopt error!");
#endif
	if(autelan_bind(*sockPtr, (struct sockaddr *)&addr, sizeof(addr))==-1)
	{
		CWWTPDebugLog("bind error!%s", strerror(errno));
		return CW_FALSE;
	}

	if(addrPtr != NULL) {
		if(autelan_connect((*sockPtr), ((struct sockaddr*)addrPtr), CWNetworkGetAddressSize(addrPtr)) < 0) {
			CWNetworkRaiseSystemError(CW_ERROR_CREATING);
		}
	}

	// allow sending broadcast packets
	/*zengmin modify by Coverity Unchecked return value 2013-06-08*/
	if(0 != autelan_setsockopt(*sockPtr, SOL_SOCKET, SO_BROADCAST, &yes, sizeof(yes)))
		CWWTPDebugLog("setsockopt error!");
	
	return CW_TRUE;
}

// wrapper for select
CWBool CWNetworkTimedPollRead(CWSocket sock, struct timeval *timeout) {
	int r;
	
	fd_set fset;
	
	if(timeout == NULL) return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	
	FD_ZERO(&fset);
	FD_SET(sock, &fset);

	if((r = autelan_select(sock+1, &fset, NULL, NULL, timeout)) == 0) {
		return CWErrorRaise(CW_ERROR_TIME_EXPIRED, NULL);
	} else if (r < 0) {
		if(errno == EINTR){
			return CWErrorRaise(CW_ERROR_INTERRUPTED, NULL);
		}
		CWNetworkRaiseSystemError(CW_ERROR_GENERAL);
	}
	
	return CW_TRUE;
}

// given an host int hte form of C string (e.g. "192.168.1.2" or "localhost"), returns the address
CWBool CWNetworkGetAddressForHost(char *host, CWNetworkLev4Address *addrPtr) {
	struct addrinfo hints, *res, *ressave;
	char serviceName[5];
	CWSocket sock;
	
	if(host == NULL || addrPtr == NULL) return CWErrorRaise(CW_ERROR_WRONG_ARG, NULL);
	
	CW_ZERO_MEMORY(&hints, sizeof(struct addrinfo));
	
#ifdef IPv6
	if(gNetworkPreferredFamily == CW_IPv6) {
		hints.ai_family = AF_INET6;
		hints.ai_flags = AI_V4MAPPED;
	} else {
		hints.ai_family = AF_INET;
	}
#else
	hints.ai_family = AF_INET;
#endif
	hints.ai_socktype = SOCK_DGRAM;
	
	autelan_snprintf(serviceName, 5, "%d", CW_CONTROL_PORT); // endianness will be handled by getaddrinfo
	
	if (getaddrinfo(host, serviceName, &hints, &res) !=0 ) {
		return CWErrorRaise(CW_ERROR_GENERAL, "Can't resolve hostname");
	}
	
	ressave = res;
	
	do {
		if((sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol)) < 0) {
			continue; // try next address
		}
		
		break; // success
	} while ( (res = res->ai_next) != NULL);

	if(sock >= 0) /*zengmin modify close sock by Coverity Resource leak 2013-06-08*/
		autelan_close(sock);
	
	if(res == NULL) { // error on last iteration
		CWNetworkRaiseSystemError(CW_ERROR_CREATING);
	}
	
	CW_COPY_NET_ADDR_PTR(addrPtr, (res->ai_addr));
	
	freeaddrinfo(ressave);
	
	return CW_TRUE;
}