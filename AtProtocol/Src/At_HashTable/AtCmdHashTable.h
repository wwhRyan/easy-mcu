#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdKeystone2D = 0x0,
	kCmdSetCurrent = 0x4,
	kCmdRunTime = 0x5,
	kCmdSystem = 0x7,
	kCmdEeprom = 0x8,
	kCmdVerticalKeystone = 0x9,
	kCmdGetCurrent = 0xb,
	kCmdVersion = 0xc,
	kCmdHelp = 0xe,
	kCmdError = 0xf,
	kCmdGamma = 0x15,
	kCmdTestPattern = 0x16,
	kCmdLogInfo = 0x1a,
	kCmdReset = 0x1f,
	kCmdInstallationMode = 0x21,
	kCmdWarning = 0x23,
	kCmdHorizonKeystone = 0x24,
	kCmdCwSpeed = 0x25,
	kCmdLightSourceTime = 0x26,
	kCmdLightSource = 0x28,
	kCmdTemperature = 0x2a,
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
