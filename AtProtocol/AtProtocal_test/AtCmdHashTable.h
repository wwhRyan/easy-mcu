#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdSn = 0x0,
	kCmdOvp921 = 0x1,
	kCmdSystem = 0x2,
	kCmdInstallationMode = 0x3,
	kCmdVersion = 0x4,
	kCmdUpgradeOvp921Firmware = 0x5,
	kCmdEeprom = 0x6,
	kCmdLightSource = 0x7,
	kCmdCurrent = 0x8,
	kCmdCwSpeed = 0x9,
	kCmdError = 0xa,
	kCmdTemperature = 0xb,
	kCmdLightSourceTime = 0xc,
	kCmdReset = 0xd,
	kCmdTestPattern = 0xe,
	kCmdSilentAsyncMessages = 0xf,
	kCmdUpgradeOvp921Anf = 0x10,
	kCmdLogInfo = 0x11,
} aeCmdName;

extern unsigned short g_atcmd_num;
extern asCmdListUnit gsCmdList[];
extern uint16_t gScmd_list_len;


#ifdef __cplusplus
}
#endif

#endif
