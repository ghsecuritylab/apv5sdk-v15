/**********************************************************************************
* Copyright (c) 2008-2011  Beijing Autelan Technology Co. Ltd.
* All rights reserved.
*
* filename: apCommonInfo.h
* description:  implementation for the header file of apCommomInfo.c
* 
*
* 
************************************************************************************/

/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.old-api.conf 14476 2006-04-18 17:36:51Z hardaker $
 */
#ifndef APCOMMONINFO_H
#define APCOMMONINFO_H

/* function declarations */
void init_apCommonInfo(void);
FindVarMethod var_apCommonInfo;
    WriteMethod write_apDefaultSet;
    WriteMethod write_apWorkPattern;
    WriteMethod write_apAntiattackDOS;
    WriteMethod write_apVlanAbility;
    WriteMethod write_apVlanConfig;
    WriteMethod write_IGMPSnooping;
    WriteMethod write_WirelessSecurityMechanisms;
    WriteMethod write_RoutingStaticConfig;
    WriteMethod write_RemoteLoginAccount;
    WriteMethod write_RemoteLoginKey;
	WriteMethod write_apName;
    WriteMethod write_apLocation;
	WriteMethod write_apDescr;
	WriteMethod write_IGMPSnoopingEnable;
	WriteMethod write_MLDSnoopingEnable;

#endif /* APCOMMONINFO_H */