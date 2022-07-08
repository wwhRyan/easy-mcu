#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdCwSpeed = 0x0,
	kCmdLightSource = 0x1,
	kCmdSn = 0x3,
	kCmdSilentAsyncMessages = 0x5,
	kCmdSystem = 0x7,
	kCmdOvp921 = 0x9,
	kCmdTemperature = 0xb,
	kCmdVersion = 0xc,
	kCmdUpgradeOvp921Firmware = 0x11,
	kCmdEeprom = 0x12,
	kCmdTestPattern = 0x15,
	kCmdError = 0x19,
	kCmdLogInfo = 0x1a,
	kCmdCurrent = 0x1c,
	kCmdUpgradeOvp921Anf = 0x1e,
	kCmdReset = 0x1f,
	kCmdInstallationMode = 0x21,
	kCmdLightSourceTime = 0x24,
} aeCmdName;

typedef struct __asCmdListUnit {
	int var;
	void (*func)(asAtKvList*, asAtStr*);
	char* str;
} asCmdListUnit;

extern unsigned short g_atcmd_max_collide_num;
extern unsigned short g_atcmd_num;
extern unsigned short g_atcmd_htsize;
extern unsigned char g_atcmd_htsize_bits;
extern asCmdListUnit gsCmdList[];
extern uint16_t gScmd_list_len;


#ifdef __cplusplus
}
#endif

#endif
