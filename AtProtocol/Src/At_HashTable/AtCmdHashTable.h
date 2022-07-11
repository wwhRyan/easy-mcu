#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdSystem = 0x7,
	kCmdEeprom = 0x8,
	kCmdOvp921 = 0x9,
	kCmdVersion = 0xc,
	kCmdError = 0xf,
	kCmdUpgradeOvp921Anf = 0x11,
	kCmdTestPattern = 0x15,
	kCmdUpgradeOvp921Firmware = 0x19,
	kCmdLogInfo = 0x1a,
	kCmdCurrent = 0x1c,
	kCmdReset = 0x1f,
	kCmdInstallationMode = 0x21,
	kCmdLightSourceTime = 0x24,
	kCmdCwSpeed = 0x25,
	kCmdLightSource = 0x28,
	kCmdSilentAsyncMessages = 0x2a,
	kCmdTemperature = 0x2b,
	kCmdSn = 0x2e,
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
