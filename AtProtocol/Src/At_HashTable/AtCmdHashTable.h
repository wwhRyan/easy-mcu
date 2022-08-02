#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdCurrent = 0x0,
	kCmdSystem = 0x1,
	kCmdVersion = 0x2,
	kCmdTestPattern = 0x3,
	kCmdInstallationMode = 0x4,
	kCmdLightSourceTime = 0x5,
	kCmdTemperature = 0x6,
	kCmdLightSource = 0x7,
	kCmdCwSpeed = 0x8,
	kCmdReset = 0x9,
	kCmdUpgradeOvp921Anf = 0xa,
	kCmdUpgradeOvp921Firmware = 0xb,
	kCmdEeprom = 0xc,
	kCmdSilentAsyncMessages = 0xd,
	kCmdLogInfo = 0xe,
	kCmdOvp921 = 0xf,
	kCmdError = 0x10,
	kCmdSn = 0x11,
} aeCmdName;

typedef struct __asCmdListUnit {
	int var;
	void (*func)(asAtKvList*, asAtStr*);
	char* str;
} asCmdListUnit;

extern unsigned short g_atcmd_num;
extern asCmdListUnit gsCmdList[];
extern uint16_t gScmd_list_len;


#ifdef __cplusplus
}
#endif

#endif
