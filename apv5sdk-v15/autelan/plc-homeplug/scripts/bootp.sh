#!/bin/sh
# file: scripts/bootp.sh

# use program int6kbootp to initialize an INT6400 device having a 
# blank or corrupt NVRAM; the Bootloader must be running for this 
# script to work properly;

# ====================================================================
# host symbols;
# --------------------------------------------------------------------

. ${SCRIPTS}/hardware.sh
. ${SCRIPTS}/firmware.sh

# ====================================================================
# confirm connection;
# --------------------------------------------------------------------

echo -n "Interface [${ETH}]: "; read  
if [ ! -z ${REPLY} ]; then
	ETH=${REPLY}
fi

# ====================================================================
# check connection;
# --------------------------------------------------------------------

int6kwait -xqsi ${ETH} 
if [ ${?} != 0 ]; then
	echo "Device is not connected"
	exit 1
fi

# ====================================================================
# randomize identity;
# --------------------------------------------------------------------

MAC=next
DAK=key1
NMK=key1

# ====================================================================
# confirm address;
# --------------------------------------------------------------------

echo -n "MAC [${MAC}]: "; read
if [ ! -z ${REPLY} ]; then
	MAC="${REPLY}"                  
fi

echo -n "DAK [${DAK}]: "; read
if [ ! -z ${REPLY} ]; then
	DAK="${REPLY}"                  
fi

echo -n "NMK [${NMK}]: "; read
if [ ! -z ${REPLY} ]; then
	NMK="${REPLY}"                  
fi

# ====================================================================
# modify PIB;
# --------------------------------------------------------------------

modpib -M ${MAC} -D ${DAK} -N ${NMK} ${PIB}
if [ ${?} != 0 ]; then
	exit 1
fi

# ====================================================================
# flash NVRAM with firmware and factory PIB;
# --------------------------------------------------------------------

int6kbootp -i ${ETH} -P ${PIB} -N ${NVM} -F       
if [ ${?} != 0 ]; then
	exit 1
fi

# ====================================================================
# confirm identity;
# --------------------------------------------------------------------

int6k -i ${ETH} -I

# ====================================================================
# return success;
# --------------------------------------------------------------------

exit 0   
