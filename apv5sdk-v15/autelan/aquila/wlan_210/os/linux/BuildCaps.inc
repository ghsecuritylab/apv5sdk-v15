#
# defaults
#
ifndef ENCAP_OFFLOAD
export ENCAP_OFFLOAD=0
endif

ifndef ATH_SW_WOW_SUPPORT
export ATH_SW_WOW_SUPPORT=0
endif

ifndef NBUF_PREALLOC_POOL
export NBUF_PREALLOC_POOL=0
endif

ifndef ATH_CAP_SUPERG_FF
export ATH_CAP_SUPERG_FF=0
endif

ifndef ATH_CAP_DYNTURBO
export ATH_CAP_DYNTURBO=0
endif

ifndef ATH_CAP_SUPERG_COMP
export ATH_CAP_SUPERG_COMP=0
endif

ifndef ATH_CAP_XR
export ATH_CAP_XR=0
endif

ifndef ATH_CAP_TPC
export ATH_CAP_TPC=0
endif

ifndef ATH_CAP_CWM
export ATH_CAP_CWM=1
endif

ifndef ATH_CHAINMASK_SELECT
export ATH_CHAINMASK_SELECT=1
endif

ifndef ATH_FORCE_PPM
export ATH_FORCE_PPM=0
endif

ifndef ATH_FORCE_BIAS
export ATH_FORCE_BIAS=0
endif

ifndef AR5416_EMULATION
export AR5416_EMULATION=0
endif

ifndef AR9100
export AR9100=0
endif

ifndef ATH_RXBUF
export ATH_RXBUF=512
endif

ifndef ATH_SUPPORT_DFS
export ATH_SUPPORT_DFS=1
endif

ifndef ATH_SUPPORT_CWM
export ATH_SUPPORT_CWM=1
endif

ifndef ATH_SUPPORT_SPECTRAL
export ATH_SUPPORT_SPECTRAL=0
endif

ifndef ATH_SUPPORT_VLAN
export ATH_SUPPORT_VLAN=1
endif

ifndef ATH_TX_INACT_TIMER
export ATH_TX_INACT_TIMER=0
endif

ifndef ATH_WPS_IE
export ATH_WPS_IE=1
endif

ifndef ATH_CAP_AMSDU
export ATH_CAP_AMSDU=1
endif

ifndef ATH_SUPPORT_UAPSD
export ATH_SUPPORT_UAPSD=1
endif

ifndef ATH_SUPPORT_DESCFAST
export ATH_SUPPORT_DESCFAST=1
endif

ifndef ATH_SUPPORT_SHARED_IRQ
export ATH_SUPPORT_SHARED_IRQ=0
endif

ifndef ATH_SUPPORT_FLOWMAC_MODULE
export ATH_SUPPORT_FLOWMAC_MODULE=0
endif

ifndef ATH_SUPPORT_AGGR_BURST
export ATH_SUPPORT_AGGR_BURST=1
endif

ifndef BUILD_AP
export BUILD_AP=1
endif

ifndef BUILD_UMAC
export BUILD_UMAC=1
endif

ifndef UMAC_SUPPORT_AP_POWERSAVE
export UMAC_SUPPORT_AP_POWERSAVE=1
endif

ifndef UMAC_SUPPORT_STA_POWERSAVE
export UMAC_SUPPORT_STA_POWERSAVE=0
endif

ifndef UMAC_SUPPORT_POWERSAVE_QUEUE
export UMAC_SUPPORT_POWERSAVE_QUEUE=1
endif

ifndef UMAC_SUPPORT_P2P_GO_POWERSAVE
export UMAC_SUPPORT_P2P_GO_POWERSAVE=0
endif

ifndef UMAC_SUPPORT_CCMP_SW_CRYPTO
export UMAC_SUPPORT_CCMP_SW_CRYPTO=1
endif

ifndef UMAC_SUPPORT_TKIP_SW_CRYPTO
export UMAC_SUPPORT_TKIP_SW_CRYPTO=1
endif

ifndef ATH_SUPPORT_WEP_MBSSID
export ATH_SUPPORT_WEP_MBSSID=0
endif

ifndef UMAC_SUPPORT_RESMGR_SM
export UMAC_SUPPORT_RESMGR_SM=0
endif

ifndef UMAC_SUPPORT_RESMGR
export UMAC_SUPPORT_RESMGR=0
endif

ifndef UMAC_SUPPORT_RESMGR_OC_SCHED
export UMAC_SUPPORT_RESMGR_OC_SCHED=0
endif

ifndef UMAC_SUPPORT_RIJNDAEL
export UMAC_SUPPORT_RIJNDAEL=1
endif

ifndef UMAC_SUPPORT_ACS
export UMAC_SUPPORT_ACS=1
endif

ifndef UMAC_SUPPORT_WDS
export UMAC_SUPPORT_WDS=1
endif

ifndef UMAC_SUPPORT_NAWDS
export UMAC_SUPPORT_NAWDS=1
endif

ifndef ATH_SUPPORT_TDLS
export UMAC_SUPPORT_TDLS=0
endif

ifndef ATH_CONFIG_RCPI
export CONFIG_RCPI=0
endif

ifndef UMAC_SUPPORT_STAFWD
export UMAC_SUPPORT_STAFWD=0
endif

ifndef UMAC_SUPPORT_DFS
export UMAC_SUPPORT_DFS=1
endif

ifndef UMAC_SUPPORT_ACL
export UMAC_SUPPORT_ACL=1
endif

ifndef UMAC_SUPPORT_TX_FRAG
export UMAC_SUPPORT_TX_FRAG=1
endif

ifndef UMAC_SUPPORT_RPTPLACEMENT
export UMAC_SUPPORT_RPTPLACEMENT=0
endif

ifndef UMAC_SUPPORT_IBSS
export UMAC_SUPPORT_IBSS=1
endif

ifndef ATH_SUPPORT_TxBF
export ATH_SUPPORT_TxBF=0
endif

ifndef ATH_SUPPORT_WPA_SUPPLICANT_CHECK_TIME
export ATH_SUPPORT_WPA_SUPPLICANT_CHECK_TIME=0
endif

ifndef ATH_GEN_TIMER
export ATH_GEN_TIMER=0
endif

ifndef ATH_DEBUG
export ATH_DEBUG=1
endif

ifndef ATH_SUPPORT_TSF_TIMER
export ATH_SUPPORT_TSF_TIMER=0
endif

ifndef UMAC_SUPPORT_VAP_PAUSE
export UMAC_SUPPORT_VAP_PAUSE=0
endif

ifndef UMAC_SUPPORT_IE_UTILS
export UMAC_SUPPORT_IE_UTILS=0
endif

ifndef UMAC_SUPPORT_TSF_TIMER
export UMAC_SUPPORT_TSF_TIMER=0
endif

ifndef ATH_BEACON_DEFERRED_PROC
export ATH_BEACON_DEFERRED_PROC=0
endif

ifneq ($(strip ${BUILD_ADF}),0)
    ifndef BUILD_ADF
    export BUILD_ADF=1
    endif

    ifndef BUILD_ADF_NET
    export BUILD_ADF_NET=1
    endif

    ifndef BUILD_ADF_DEFER_PVT
    export BUILD_ADF_DEFER_PVT=1
    endif

    ifndef BUILD_ADF_IRQ_PVT
    export BUILD_ADF_IRQ_PVT=1
    endif
endif

ifndef ATH_WLAN_COMBINE
export ATH_WLAN_COMBINE=0
endif

ifndef ATH_NO_SW_CRYPTO
export ATH_NO_SW_CRYPTO=0
endif

ifndef ATH_NO_5G_SUPPORT
export ATH_NO_5G_SUPPORT=0
endif

ifndef IEEE80211_MCAST_ENHANCEMENT
export IEEE80211_MCAST_ENHANCEMENT=1
endif

ifndef ATH_SUPPORT_IQUE
export ATH_SUPPORT_IQUE=0
endif

ifndef  ATH_SUPPORT_AOW
export ATH_SUPPORT_AOW=0
endif

ifndef ATH_SUPPORT_IQUE_EXT
export ATH_SUPPORT_IQUE_EXT=0
endif

ifndef NO_SIMPLE_CONFIG
export NO_SIMPLE_CONFIG=0
endif

ifndef ATH_DEFINE_ENDIAN
export ATH_DEFINE_ENDIAN=1
endif

ifndef ATH_SUPPORT_LINUX_STA
export ATH_SUPPORT_LINUX_STA=0
endif

ifndef ATH_RFKILL
export ATH_RFKILL=0
endif

ifndef ATH_MIB_INTR_FILTER
export ATH_MIB_INTR_FILTER=0
endif

ifndef ATH_SUPPORT_GREEN_AP
export ATH_SUPPORT_GREEN_AP=1
endif


ifndef ATH_SUPPORT_EEEPC
export ATH_SUPPORT_EEEPC=0
endif

ifndef ATH_SUPPORT_WAPI
export ATH_SUPPORT_WAPI=0
endif

ifndef ATH_SUPPORT_UAPSD_RATE_CONTROL
export ATH_SUPPORT_UAPSD_RATE_CONTROL=0
endif

ifndef AH_REGREAD_DEBUG
export AH_REGREAD_DEBUG=0
endif

ifndef ATH_SUPPORT_VOWEXT
export ATH_SUPPORT_VOWEXT=0
endif

ifndef ATH_HW_TXQ_STUCK_WAR
export ATH_HW_TXQ_STUCK_WAR=0
endif

# Add for FOA solution 2, 2012-12-10
ifndef AUTELAN_SOLUTION2
export AUTELAN_SOLUTION2=0
endif

ifndef WAR_TX_UNDERRUN
export WAR_TX_UNDERRUN=0
endif

ifndef ATH_SUPPORT_5G_EACS
export ATH_SUPPORT_5G_EACS=0
endif

ifndef ATH_SUPPORT_VOW_DCS
export ATH_SUPPORT_VOW_DCS=0
endif

ifndef VOW_TIDSCHED
export VOW_TIDSCHED=0
endif

ifndef VOW_LOGLATENCY
export VOW_LOGLATENCY=0
endif

ifndef ATH_SUPPORT_CFEND
export ATH_SUPPORT_CFEND=0
endif

ifndef ATH_SUPPORT_LED
export ATH_SUPPORT_LED=0
endif

ifndef ATH_TX_BUF_FLOW_CNTL
export ATH_TX_BUF_FLOW_CNTL=1
endif

ifndef ATH_VOW_EXT_STATS
export ATH_VOW_EXT_STATS=0
endif

ifndef ATH_SUPPORT_QUICK_KICKOUT
export ATH_SUPPORT_QUICK_KICKOUT=0
endif

ifndef ATH_SUPPORT_EDMA
export ATH_SUPPORT_EDMA=1
endif

ifndef ATH_SUPPORT_AP_WDS_COMBO
export ATH_SUPPORT_AP_WDS_COMBO=0
endif

ifndef ATH_SUPPORT_IBSS
export ATH_SUPPORT_IBSS=1
endif

ifndef ATH_SUPPORT_IBSS_PERSTA_HWKEY
export ATH_SUPPORT_IBSS_PERSTA_HWKEY=1
endif

ifndef ATH_SUPPORT_IBSS_WPA2
export ATH_SUPPORT_IBSS_WPA2=1
endif

ifndef ATHEROS_LINUX_PERIODIC_SCAN
export ATHEROS_LINUX_PERIODIC_SCAN=1
endif

ifndef ATHEROS_LINUX_P2P_DRIVER
export ATHEROS_LINUX_P2P_DRIVER=0
endif

ifndef ATH_SUPPORT_P2P
export ATH_SUPPORT_P2P=0
endif

ifndef ATH_SUPPORT_IBSS_HT
export ATH_SUPPORT_IBSS_HT=0
endif
ifndef ATHEROS_LINUX_PERIODIC_SCAN
export ATHEROS_LINUX_PERIODIC_SCAN=1
endif

ifndef ATH_SUPPORT_IBSS_WMM
export ATH_SUPPORT_IBSS_WMM=0
endif

ifndef ATH_SUPPORT_IBSS_NETLINK_NOTIFICATION
export ATH_SUPPORT_IBSS_NETLINK_NOTIFICATION=0
endif

ifndef ATH_SUPPORT_IBSS_PRIVATE_SECURITY
export ATH_SUPPORT_IBSS_PRIVATE_SECURITY=0
endif

ifndef ATH_SUPPORT_IBSS_ACS
export ATH_SUPPORT_IBSS_ACS=0
endif

ifndef REMOVE_PKT_LOG
export REMOVE_PKT_LOG=0
endif

ifndef ATH_SUPPORT_LINUX_VENDOR
export ATH_SUPPORT_LINUX_VENDOR=0
endif

ifndef ATH_RXBUF_RECYCLE
export ATH_RXBUF_RECYCLE=0
endif

ifndef UMAC_SUPPORT_VI_DBG
export UMAC_SUPPORT_VI_DBG=0
endif
ifndef ATH_SUPPORT_IWSPY
export ATH_SUPPORT_IWSPY=0
endif

ifndef ATH_SUPPORT_DYN_TX_CHAINMASK
export ATH_SUPPORT_DYN_TX_CHAINMASK=0
endif

ifndef ATH_SUPPORT_DESC_CACHABLE
export ATH_SUPPORT_DESC_CACHABLE=1
endif

ifndef ATH_SUPPORT_BYPASS_BRIDGE
export ATH_SUPPORT_BYPASS_BRIDGE=0
endif

ifndef ATH_SUPPORT_IBSS_DFS
export ATH_SUPPORT_IBSS_DFS=0
endif
ifndef UMAC_SUPPORT_SMARTANTENNA
export UMAC_SUPPORT_SMARTANTENNA=0
endif
ifndef UMAC_SUPPORT_INTERNALANTENNA
export UMAC_SUPPORT_INTERNALANTENNA=0
endif
ifndef ATH_IBSS_DFS_CHANNEL_SUPPORT
export ATH_IBSS_DFS_CHANNEL_SUPPORT=0
endif

ifndef ATH_SWRETRY
export ATH_SWRETRY=0
endif

ifndef ATH_LMAC_TXSEQ
export ATH_LMAC_TXSEQ=0
endif

ifndef UMAC_SUPPORT_APONLY
export UMAC_SUPPORT_APONLY=0
endif

ifndef ATH_TXQ_BH_LOCK
export ATH_TXQ_BH_LOCK=1
endif

ifndef ATH_BUS_PM
export ATH_BUS_PM=0
endif

ifndef ATH_ANI_NOISE_SPUR_OPT
export ATH_ANI_NOISE_SPUR_OPT=0
endif

ifndef AP_MULTIPLE_BUFFER_RCV
export AP_MULTIPLE_BUFFER_RCV=0
endif

ifndef ATH_LED_CUSTOMER
export ATH_LED_CUSTOMER=0
endif


#
# directives
#
ifeq ($(strip ${AP_MULTIPLE_BUFFER_RCV}),1)
COPTS+= -DAP_MULTIPLE_BUFFER_RCV=1
else
COPTS+= -DAP_MULTIPLE_BUFFER_RCV=0
endif

#zhaoyang1 transplant from 717
#wangyu add 2011-05-23
ifeq ($(PC018),1)
COPTS+= -DPC018=1
endif
#wangyu add end
#zhengkun add 2011-11-11
ifeq ($(BOARD_TYPE),amcc)
COPTS+= -DAPM82181=1
endif
#zhengkun add end 2011-11-11
#lisongbai add for XJPB44_02
ifeq ($(XJPB44_02),1)
COPTS+= -DXJPB44_02=1
endif
ifeq ($(TDPB44_02),1)
COPTS+= -DTDPB44_02=1
endif
#lisongbai add end
#zhaoyang1 transplant end

ifeq ($(strip ${ENCAP_OFFLOAD}),1)
COPTS+= -DENCAP_OFFLOAD=1
endif

ifeq ($(strip ${ATH_SUPPORT_LINUX_STA}),1)
COPTS+= -DATH_SUPPORT_LINUX_STA=1
endif

ifeq ($(strip ${ATH_RFKILL}),1)
COPTS+= -DATH_RFKILL=1
endif

ifeq ($(strip ${ATH_MIB_INTR_FILTER}),1)
COPTS+= -DATH_MIB_INTR_FILTER=1
endif

ifeq ($(strip ${ATH_SUPPORT_EEEPC}),1)
COPTS+= -DATH_SUPPORT_EEEPC=1
endif

ifneq ($(strip ${ATH_CAP_SUPERG_FF}),0)
COPTS+= -DATH_SUPERG_FF=1
endif

ifneq ($(strip ${ATH_CAP_DYNTURBO}),0)
COPTS+= -DATH_SUPERG_DYNTURBO=1 -DATH_TURBO_SCAN=1
endif

ifneq ($(strip ${ATH_CAP_SUPERG_COMP}),0)
COPTS+= -DATH_SUPERG_COMP=1
endif

ifneq ($(strip ${ATH_CAP_XR}),0)
COPTS+= -DATH_SUPERG_XR=1
endif

ifneq ($(strip ${ATH_CAP_TPC}),0)
COPTS+= -DATH_CAP_TPC=1
endif

ifneq ($(strip ${ATH_CAP_CWM}),0)
COPTS+= -DATH_SUPPORT_CWM=1
endif

ifneq ($(strip ${ATH_CHAINMASK_SELECT}),0)
COPTS+= -DATH_CHAINMASK_SELECT=1
endif

ifneq ($(strip ${ATH_SUPPORT_AGGR_BURST}),0)
COPTS+= -DATH_SUPPORT_AGGR_BURST=1
endif

ifneq ($(strip ${ATH_FORCE_PPM}),0)
COPTS+= -DATH_FORCE_PPM=1
endif

ifneq ($(strip ${ATH_FORCE_BIAS}),0)
COPTS+= -DATH_FORCE_BIAS=1
endif

ifneq ($(strip ${AR5416_EMULATION}),0)
COPTS+= -DAR5416_EMULATION=1
endif

ifneq ($(strip ${AR9100}),0)
COPTS+= -DAR9100=1
endif

COPTS+= -DATH_RXBUF=${ATH_RXBUF}

ifdef ATH_TXBUF
COPTS+= -DATH_TXBUF=${ATH_TXBUF}
endif

ifneq ($(strip ${ATH_SUPPORT_DFS}),0)
COPTS+= -DATH_SUPPORT_DFS=1
endif

ifneq ($(strip ${ATH_SUPPORT_SPECTRAL}),0)
COPTS+= -DATH_SUPPORT_SPECTRAL=1
endif

ifneq ($(strip ${ATH_SUPPORT_VLAN}),0)
COPTS+= -DATH_SUPPORT_VLAN=1
endif

ifneq ($(strip ${ATH_TX_INACT_TIMER}),0)
COPTS+= -DATH_TX_INACT_TIMER=1
endif

ifneq ($(strip ${ATH_RB}),0)
COPTS+= -DATH_RB=1
endif

ifneq ($(strip ${ATH_CAP_AMSDU}),0)
COPTS+= -DATH_AMSDU=1
endif

ifneq ($(strip ${ATH_SUPPORT_UAPSD}),0)
COPTS+= -DATH_SUPPORT_UAPSD=1
endif

ifneq ($(strip ${ATH_SUPPORT_DESCFAST}),0)
COPTS+= -DATH_SUPPORT_DESCFAST=1
endif

ifneq ($(strip ${ATH_SUPPORT_SHARED_IRQ}),0)
COPTS+= -DATH_SUPPORT_SHARED_IRQ=1
endif

ifneq ($(strip ${BUILD_AP}),0)
COPTS+= -DBUILD_AP=1
endif

ifneq ($(strip ${ATH_WLAN_COMBINE}),0)
COPTS+= -DATH_WLAN_COMBINE=1
endif

ifneq ($(strip ${ATH_NO_SW_CRYPTO}),0)
COPTS+= -DATH_NO_SW_CRYPTO=1
endif

ifneq ($(strip ${ATH_NO_5G_SUPPORT}),0)
COPTS+= -DATH_NO_5G_SUPPORT=1
endif

ifneq ($(strip ${IEEE80211_MCAST_ENHANCEMENT}),0)
COPTS+= -DIEEE80211_MCAST_ENHANCEMENT=1
endif

ifneq ($(strip ${ATH_SUPPORT_IQUE}),0)
COPTS+= -DATH_SUPPORT_IQUE=1
endif

ifneq ($(strip ${ATH_SUPPORT_AOW}),0)
COPTS+= -DATH_SUPPORT_AOW=1
COPTS+= -DATH_GEN_TIMER=1
endif

ifneq ($(strip ${ATH_SUPPORT_IQUE_EXT}),0)
COPTS+= -DATH_SUPPORT_IQUE_EXT=1
endif

ifneq ($(strip ${ATH_SUPPORT_WAPI}),0)
COPTS+= -DATH_SUPPORT_WAPI=1
endif

ifneq ($(strip ${ATH_SUPPORT_UAPSD_RATE_CONTROL}),0)
COPTS+= -DATH_SUPPORT_UAPSD_RATE_CONTROL=1
endif

ifneq ($(strip ${AH_REGREAD_DEBUG}),0)
COPTS+= -DAH_REGREAD_DEBUG=1
endif

ifneq ($(strip ${ATH_WPS_IE}),0)
COPTS+= -DATH_WPS_IE=1
endif

ifneq ($(strip ${NO_SIMPLE_CONFIG}),0)
COPTS+= -DNO_SIMPLE_CONFIG=1
endif

ifneq ($(strip ${BUILD_UMAC}),0)
COPTS+= -DUMAC
endif

ifneq ($(strip ${BUILD_ADF}),0)
COPTS+= -DADF_SUPPORT=1
endif

ifneq ($(strip ${ATH_SUPPORT_VOWEXT}),0)
COPTS+= -DATH_SUPPORT_VOWEXT=1
endif

ifneq ($(strip ${ATH_HW_TXQ_STUCK_WAR}),0)
COPTS+= -DATH_HW_TXQ_STUCK_WAR=1
endif

# Add for FOA solution 2, 2012-12-10
ifneq ($(strip ${AUTELAN_SOLUTION2}),0)
COPTS+= -DAUTELAN_SOLUTION2=1
endif

ifneq ($(strip ${WAR_TX_UNDERRUN}),0)
COPTS+= -DWAR_TX_UNDERRUN=1
endif

ifneq ($(strip ${ATH_SUPPORT_5G_EACS}),0)
COPTS+= -DATH_SUPPORT_5G_EACS=1
endif

ifneq ($(strip ${ATH_SUPPORT_VOW_DCS}),0)
COPTS+= -DATH_SUPPORT_VOW_DCS=1
endif

ifneq ($(strip ${VOW_TIDSCHED}),0)
COPTS+= -DVOW_TIDSCHED=1
endif

ifneq ($(strip ${VOW_LOGLATENCY}),0)
COPTS+= -DVOW_LOGLATENCY=1
endif

ifneq ($(strip ${ATH_SUPPORT_CFEND}),0)
COPTS+= -DATH_SUPPORT_CFEND=1
endif

ifneq ($(strip ${ATH_VOW_EXT_STATS}),0)
COPTS+= -DATH_VOW_EXT_STATS=1
endif

ifeq ($(strip ${ATH_SUPPORT_LED}),1)
COPTS+= -DATH_SUPPORT_LED=1
ifneq ($(strip ${ATH_LED_CUSTOMER}),0)
COPTS+= -DATH_LED_CUSTOMER=${ATH_LED_CUSTOMER}
else
COPTS+= -DATH_LED_CUSTOMER=0
endif
COPTS+= -DGPIO_PIN_FUNC_0=${GPIO_PIN_FUNC_0}
COPTS+= -DGPIO_PIN_FUNC_1=${GPIO_PIN_FUNC_1}
COPTS+= -DGPIO_PIN_FUNC_2=${GPIO_PIN_FUNC_2}
else
COPTS+= -DATH_SUPPORT_LED=0
endif

ifneq ($(strip ${ATH_SUPPORT_GREEN_AP}),0)
COPTS+= -DATH_SUPPORT_GREEN_AP=1
endif


COPTS+= -DIEEE80211_USE_WPA_CCMP=1

ifeq ($(strip ${ATH_EXT_AP}),1)
COPTS+= -DATH_EXT_AP=1
#COPTS+= -DEXTAP_DEBUG=1
endif

ifneq ($(strip ${ATH_TX_BUF_FLOW_CNTL}),0)
COPTS+= -DATH_TX_BUF_FLOW_CNTL=1
endif

ifneq ($(strip ${ATH_SUPPORT_QUICK_KICKOUT}),0)
COPTS+= -DATH_SUPPORT_QUICK_KICKOUT=1
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS}),0)
COPTS+= -DATH_SUPPORT_IBSS=1
else
COPTS+= -DATH_SUPPORT_IBSS=0
endif

ifneq ($(strip ${ATH_IBSS_DFS_CHANNEL_SUPPORT}),0)
COPTS+= -DATH_IBSS_DFS_CHANNEL_SUPPORT=1
else
COPTS+= -DATH_IBSS_DFS_CHANNEL_SUPPORT=0
endif

ifneq ($(strip ${ATH_SUPPORT_EDMA}),0)
COPTS+= -DATH_SUPPORT_EDMA=1
else
COPTS+= -DATH_SUPPORT_EDMA=0
endif

ifneq ($(strip ${UMAC_SUPPORT_AP_POWERSAVE}),0)
COPTS+= -DUMAC_SUPPORT_AP_POWERSAVE=1
else
COPTS+= -DUMAC_SUPPORT_AP_POWERSAVE=0
endif

ifneq ($(strip ${UMAC_SUPPORT_STA_POWERSAVE}),0)
COPTS+= -DUMAC_SUPPORT_STA_POWERSAVE=1
else
COPTS+= -DUMAC_SUPPORT_STA_POWERSAVE=0
endif

ifneq ($(strip ${UMAC_SUPPORT_POWERSAVE_QUEUE}),0)
COPTS+= -DUMAC_SUPPORT_POWERSAVE_QUEUE=1
else
COPTS+= -DUMAC_SUPPORT_POWERSAVE_QUEUE=0
endif

ifneq ($(strip ${UMAC_SUPPORT_CCMP_SW_CRYPTO}),0)
COPTS+= -DUMAC_SUPPORT_CCMP_SW_CRYPTO=1
else
COPTS+= -DUMAC_SUPPORT_CCMP_SW_CRYPTO=0
endif

ifneq ($(strip ${UMAC_SUPPORT_TKIP_SW_CRYPTO}),0)
COPTS+= -DUMAC_SUPPORT_TKIP_SW_CRYPTO=1
else
COPTS+= -DUMAC_SUPPORT_TKIP_SW_CRYPTO=0
endif

ifneq ($(strip ${ATH_SUPPORT_WEP_MBSSID}),0)
COPTS+= -DATH_SUPPORT_WEP_MBSSID=1
else
COPTS+= -DATH_SUPPORT_WEP_MBSSID=0
endif

ifneq ($(strip ${UMAC_SUPPORT_RESMGR_SM}),0)
COPTS+= -DUMAC_SUPPORT_RESMGR_SM=1
else
COPTS+= -DUMAC_SUPPORT_RESMGR_SM=0
endif

ifneq ($(strip ${UMAC_SUPPORT_RESMGR}),0)
COPTS+= -DUMAC_SUPPORT_RESMGR=1
else
COPTS+= -DUMAC_SUPPORT_RESMGR=0
endif

ifneq ($(strip ${UMAC_SUPPORT_RESMGR_OC_SCHED}),0)
COPTS+= -DUMAC_SUPPORT_RESMGR_OC_SCHED=1
else
COPTS+= -DUMAC_SUPPORT_RESMGR_OC_SCHED=0
endif

ifneq ($(strip ${UMAC_SUPPORT_RIJNDAEL}),0)
COPTS+= -DUMAC_SUPPORT_RIJNDAEL=1
else
COPTS+= -DUMAC_SUPPORT_RIJNDAEL=0
endif

ifneq ($(strip ${UMAC_SUPPORT_ACS}),0)
COPTS+= -DUMAC_SUPPORT_ACS=1
else
COPTS+= -DUMAC_SUPPORT_ACS=0
endif

ifneq ($(strip ${UMAC_SUPPORT_WDS}),0)
COPTS+= -DUMAC_SUPPORT_WDS=1
else
COPTS+= -DUMAC_SUPPORT_WDS=0
endif

ifneq ($(strip ${UMAC_SUPPORT_NAWDS}),0)
COPTS+= -DUMAC_SUPPORT_NAWDS=1
else
COPTS+= -DUMAC_SUPPORT_NAWDS=0
endif

ifneq ($(strip ${UMAC_SUPPORT_TDLS}),0)
COPTS+= -DUMAC_SUPPORT_TDLS=1
else
COPTS+= -DUMAC_SUPPORT_TDLS=0
endif

ifneq ($(strip ${CONFIG_RCPI}),0)
COPTS+= -DCONFIG_RCPI=1
endif

ifneq ($(strip ${UMAC_SUPPORT_STAFWD}),0)
COPTS+= -DUMAC_SUPPORT_STAFWD=1
else
COPTS+= -DUMAC_SUPPORT_STAFWD=0
endif

ifneq ($(strip ${UMAC_SUPPORT_DFS}),0)
COPTS+= -DUMAC_SUPPORT_DFS=1
else
COPTS+= -DUMAC_SUPPORT_DFS=0
endif

ifneq ($(strip ${UMAC_SUPPORT_ACL}),0)
COPTS+= -DUMAC_SUPPORT_ACL=1
else
COPTS+= -DUMAC_SUPPORT_ACL=0
endif

ifneq ($(strip ${UMAC_SUPPORT_TX_FRAG}),0)
COPTS+= -DUMAC_SUPPORT_TX_FRAG=1
else
COPTS+= -DUMAC_SUPPORT_TX_FRAG=0
endif

ifneq ($(strip ${UMAC_SUPPORT_RPTPLACEMENT}),0)
COPTS+= -DUMAC_SUPPORT_RPTPLACEMENT=1
else
COPTS+= -DUMAC_SUPPORT_RPTPLACEMENT=0
endif

ifneq ($(strip ${UMAC_SUPPORT_IBSS}),0)
COPTS+= -DUMAC_SUPPORT_IBSS=1
else
COPTS+= -DUMAC_SUPPORT_IBSS=0
endif

ifneq ($(strip ${ATH_SUPPORT_WPA_SUPPLICANT_CHECK_TIME}),0)
COPTS+= -DATH_SUPPORT_WPA_SUPPLICANT_CHECK_TIME=1
endif

ifneq ($(strip ${ATH_SUPPORT_TxBF}),0)
COPTS+= -DATH_SUPPORT_TxBF=1
endif

ifneq ($(strip ${ATHEROS_LINUX_PERIODIC_SCAN}),0)
COPTS+= -DATHEROS_LINUX_PERIODIC_SCAN=1
endif

ifneq ($(strip ${ATH_SUPPORT_P2P}),0)
COPTS+= -DATH_SUPPORT_P2P=1 -DUMAC_SUPPORT_P2P=1 -DATH_MOD64_SUPPORT=1
endif

ifneq ($(strip ${ATHEROS_LINUX_P2P_DRIVER}),0)
COPTS+= -DATHEROS_LINUX_P2P_DRIVER=1
endif

ifneq ($(strip ${ATHEROS_LINUX_PERIODIC_SCAN}),0)
COPTS+= -DATHEROS_LINUX_PERIODIC_SCAN=1
endif

ifneq ($(strip ${ATH_DEBUG}),0)
COPTS+= -DATH_DEBUG=1 
endif

ifneq ($(strip ${ATH_GEN_TIMER}),0)
COPTS+= -DATH_GEN_TIMER=1 
endif

ifneq ($(strip ${ATH_SUPPORT_TSF_TIMER}),0)
COPTS+= -DATH_SUPPORT_TSF_TIMER=1 
endif

ifneq ($(strip ${UMAC_SUPPORT_VAP_PAUSE}),0)
COPTS+= -DUMAC_SUPPORT_VAP_PAUSE=1
endif

ifneq ($(strip ${UMAC_SUPPORT_IE_UTILS}),0)
COPTS+= -DUMAC_SUPPORT_IE_UTILS=1
endif

ifneq ($(strip ${UMAC_SUPPORT_TSF_TIMER}),0)
COPTS+= -DUMAC_SUPPORT_TSF_TIMER=1
endif

ifneq ($(strip ${UMAC_SUPPORT_P2P_GO_POWERSAVE}),0)
COPTS+= -DUMAC_SUPPORT_P2P_GO_POWERSAVE=1
endif

ifneq ($(strip ${ATH_BEACON_DEFERRED_PROC}),0)
COPTS+= -DATH_BEACON_DEFERRED_PROC
endif

ifneq ($(strip ${ATH_SUPPORT_TX_BACKLOG}),0)
COPTS+= -DATH_SUPPORT_TX_BACKLOG=1
else
COPTS+= -DATH_SUPPORT_TX_BACKLOG=0
endif

ifneq ($(strip ${ATH_DEBUG}),0)
COPTS+= -DATH_DEBUG=1
else
COPTS+= -DATH_DEBUG=0
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS_HT}),0)
COPTS+= -DATH_SUPPORT_IBSS_HT=1
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS_WMM}),0)
COPTS+= -DATH_SUPPORT_IBSS_WMM=1
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS_NETLINK_NOTIFICATION}),0)
COPTS+= -DATH_SUPPORT_IBSS_NETLINK_NOTIFICATION=1
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS_PRIVATE_SECURITY}),0)
COPTS+= -DATH_SUPPORT_IBSS_PRIVATE_SECURITY=1
endif

ifneq ($(strip ${ATH_SUPPORT_IBSS_ACS}),0)
COPTS+= -DATH_SUPPORT_IBSS_ACS=1
endif

ifneq ($(strip ${ATH_SUPPORT_AP_WDS_COMBO}),0)
COPTS+= -DATH_SUPPORT_AP_WDS_COMBO=1
else
COPTS+= -DATH_SUPPORT_AP_WDS_COMBO=0
endif

ifneq ($(strip ${REMOVE_PKT_LOG}),0)
COPTS+= -DREMOVE_PKT_LOG=1
endif

ifneq ($(strip ${ATH_SUPPORT_LINUX_VENDOR}),0)
COPTS+= -DATH_SUPPORT_LINUX_VENDOR=1
endif

ifneq ($(strip ${ATH_RXBUF_RECYCLE}),0)
COPTS+= -DATH_RXBUF_RECYCLE=1
else
COPTS+= -DATH_RXBUF_RECYCLE=0
endif

ifneq ($(strip ${ATH_SUPPORT_IWSPY}),0)
COPTS+= -DATH_SUPPORT_IWSPY=1
endif

ifneq ($(strip ${NBUF_PREALLOC_POOL}),0)
COPTS+= -DNBUF_PREALLOC_POOL
endif

ifeq ($(strip ${ATH_SUPPORT_PAPRD}),1)
COPTS+= -DATH_SUPPORT_PAPRD=1
endif

ifeq ($(strip ${ATH_TRAFFIC_FAST_RECOVER}),1)
COPTS+= -DATH_TRAFFIC_FAST_RECOVER=1
endif

ifneq ($(strip ${ATH_SW_WOW_SUPPORT}),0)
COPTS+= -DATH_SW_WOW=1
endif

ifneq ($(strip ${UMAC_SUPPORT_VI_DBG}),0)
COPTS+= -DUMAC_SUPPORT_VI_DBG=1
endif

ifneq ($(strip ${ATH_SUPPORT_DYN_TX_CHAINMASK}),0)
COPTS+= -DATH_SUPPORT_DYN_TX_CHAINMASK=1
endif

ifeq ($(strip ${ATH_SUPPORT_ANT_DIV_COMB}),1)
COPTS+= -DATH_ANT_DIV_COMB=1
endif

ifeq ($(strip ${ATH_SUPPORT_DESC_CACHABLE}),1)
COPTS+= -DATH_SUPPORT_DESC_CACHABLE=1
endif

ifneq ($(strip ${ATH_SUPPORT_BYPASS_BRIDGE}),0)
COPTS+= -DATH_SUPPORT_BYPASS_BRIDGE=1
endif

ifeq ($(strip ${ATH_SUPPORT_FLOWMAC_MODULE}),1)
COPTS+= -DATH_SUPPORT_FLOWMAC_MODULE=1
endif

ifeq ($(strip ${ATH_SUPPORT_IBSS_DFS}),1)
COPTS+= -DATH_SUPPORT_IBSS_DFS=1
endif

ifeq ($(strip ${UMAC_SUPPORT_INTERNALANTENNA}),1)
COPTS+= -DUMAC_SUPPORT_INTERNALANTENNA=1
else
ifeq ($(strip ${UMAC_SUPPORT_SMARTANTENNA}),0)
COPTS+= -DUMAC_SUPPORT_INTERNALANTENNA=0
endif
endif

ifeq ($(strip ${UMAC_SUPPORT_SMARTANTENNA}),1)
COPTS+= -DUMAC_SUPPORT_SMARTANTENNA=1
COPTS+= -DUMAC_SUPPORT_INTERNALANTENNA=1
else
COPTS+= -DUMAC_SUPPORT_SMARTANTENNA=0
endif

ifeq ($(strip ${ATH_SUPPORT_IBSS_PERSTA_HWKEY}),1)
COPTS+= -DATH_SUPPORT_IBSS_PERSTA_HWKEY=1
endif

ifeq ($(strip ${ATH_LMAC_TXSEQ}),1)
COPTS+= -DATH_LMAC_TXSEQ=1
endif

ifeq ($(strip ${ATH_SUPPORT_IBSS_WPA2}),1)
COPTS+= -DATH_SUPPORT_IBSS_WPA2=1
endif

ifeq ($(strip ${UMAC_SUPPORT_APONLY}),1)
COPTS+= -DUMAC_SUPPORT_APONLY=1
else
COPTS+= -DUMAC_SUPPORT_APONLY=0
endif

ifeq ($(strip ${ATH_SWRETRY}),1)
COPTS+= -DATH_SWRETRY=1
endif

ifeq ($(strip ${ATH_BUS_PM}),1)
COPTS+= -DATH_BUS_PM=1
endif

ifeq ($(strip ${ATH_TXQ_BH_LOCK}),1)
COPTS+= -DATH_TXQ_BH_LOCK=1
else
COPTS+= -DATH_TXQ_BH_LOCK=0
endif

ifeq ($(strip ${ATH_ANI_NOISE_SPUR_OPT}),1)
COPTS+= -DATH_ANI_NOISE_SPUR_OPT=1
endif