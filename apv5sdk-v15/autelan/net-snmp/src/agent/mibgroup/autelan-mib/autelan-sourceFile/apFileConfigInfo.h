/**********************************************************************************
* Copyright (c) 2008-2011  Beijing Autelan Technology Co. Ltd.
* All rights reserved.
*
* filename: apFileConfigInfo.h
* description:  implementation for the header file of apFileConfigInfo.c
* 
*
* 
************************************************************************************/

/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.old-api.conf 14476 2006-04-18 17:36:51Z hardaker $
 */
#ifndef APFILECONFIGINFO_H
#define APFILECONFIGINFO_H

/* function declarations */
void init_apFileConfigInfo(void);
FindVarMethod var_apFileConfigInfo;
    WriteMethod write_MainRadiusAuthServerIPAdd;
    WriteMethod write_MainRadiusAuthServerPort;
    WriteMethod write_MainRadiusAuthServerSharedKey;
    WriteMethod write_SecRadiusAuthServerIPAdd;
    WriteMethod write_SecRadiusAuthServerPort;
    WriteMethod write_SecRadiusAuthServerSharedKey;
    WriteMethod write_MainRadiusAccServerIPAdd;
    WriteMethod write_MainRadiusAccServerPort;
    WriteMethod write_MainRadiusAccServerSharedKey;
    WriteMethod write_SecRadiusAccServerIPAdd;
    WriteMethod write_SecRadiusAccServerPort;
    WriteMethod write_SecRadiusAccServerSharedKey;
    WriteMethod write_SyslogSvcEnable;
    WriteMethod write_SyslogServerIPAddr;
    WriteMethod write_SyslogReportEventLevel;
    WriteMethod write_LoadFlag;
    WriteMethod write_FileName;
    WriteMethod write_FileType;
    WriteMethod write_TransProtocol;
    WriteMethod write_ServerAddr;
    WriteMethod write_ServerPort;
    WriteMethod write_ServerUsername;
    WriteMethod write_ServerPasswd;
    WriteMethod write_apFileUpGrade;
    WriteMethod write_SyslogMutiIp;
    WriteMethod write_TrafficThreshhd;
    WriteMethod write_TrafficDiffThreshhd;
    WriteMethod write_LoadBalanceTrafficeEnable;
    WriteMethod write_UsersThreshhd;
    WriteMethod write_UsersDiffThreshhd;
    WriteMethod write_LoadBalanceUsersEnable;

#endif /* APFILECONFIGINFO_H */