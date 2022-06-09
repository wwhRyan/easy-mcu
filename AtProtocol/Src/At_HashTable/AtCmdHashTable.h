#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdHorizonKeystone = 0x0,
	kCmdCwSpeed = 0x1,
	kCmdKeystone2D = 0x2,
	kCmdLightSource = 0x3,
	kCmdLightSourceTime = 0x4,
	kCmdTemperature = 0x6,
	kCmdSystem = 0x7,
	kCmdVerticalKeystone = 0x8,
	kCmdSn = 0x9,
	kCmdGetCurrent = 0xb,
	kCmdVersion = 0xc,
	kCmdSetCurrent = 0xf,
	kCmdRunTime = 0x10,
	kCmdEeprom = 0x13,
	kCmdGamma = 0x15,
	kCmdTestPattern = 0x16,
	kCmdHelp = 0x19,
	kCmdError = 0x1a,
	kCmdReset = 0x1f,
	kCmdLogInfo = 0x20,
	kCmdInstallationMode = 0x21,
	kCmdWarning = 0x23,
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
