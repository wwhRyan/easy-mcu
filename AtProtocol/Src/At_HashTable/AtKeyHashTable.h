#ifndef __ATKEYHASHTABLE_H__
#define __ATKEYHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef enum __aeKeyName{
	kKeyWhite = 0x0,
	kKeyOn = 0x1,
	kKeyTableFront = 0x2,
	kKeyTableRear = 0x3,
	kKeyCeilingFront = 0x4,
	kKeyIdle = 0x5,
	kKeyY = 0x6,
	kKeyMagenta = 0x7,
	kKeyGrid = 0x8,
	kKeyLightEngineBoard = 0x9,
	kKeyHorizontalRamp = 0xa,
	kKeyCyan = 0xb,
	kKeyNtcBlue = 0xc,
	kKeyScatteringWheel = 0xd,
	kKeyR = 0xe,
	kKeyNtcRed = 0xf,
	kKeyMcu = 0x10,
	kKeyVerticalRamp = 0x11,
	kKeyLightEngine = 0x12,
	kKeyGrey = 0x13,
	kKeyIdx = 0x14,
	kKeyNtcLcos = 0x15,
	kKeyAnf1 = 0x16,
	kKeySecond = 0x17,
	kKeySize = 0x18,
	kKeySourceLight = 0x19,
	kKeyYellow = 0x1a,
	kKeyCrc = 0x1b,
	kKeyHour = 0x1c,
	kKeyEeprom = 0x1d,
	kKeyOff = 0x1e,
	kKeyAnf2 = 0x1f,
	kKeyFactory = 0x20,
	kKeyData = 0x21,
	kKeyEmpty = 0x22,
	kKeyCheckerboard = 0x23,
	kKeyBlue = 0x24,
	kKeyStatus = 0x25,
	kKeyMinute = 0x26,
	kKeyBlack = 0x27,
	kKeyProjector = 0x28,
	kKeyRed = 0x29,
	kKeyNtcEnv = 0x2a,
	kKeyG = 0x2b,
	kKeyCeilingRear = 0x2c,
	kKeyB = 0x2d,
	kKeyOvp921 = 0x2e,
	kKeyOk = 0x2f,
	kKeyClear = 0x30,
	kKeyGreen = 0x31,
	kKeyNtcGreen = 0x32,
	kKeyAddr = 0x33,
	kKeyAnf3 = 0x34,
	kKeyAll = 0x35,
	kKeyUser = 0x36,
} aeKeyName;

typedef struct __asKeyListUnit {
	int var;
	void* type;
	char* str;

} asKeyListUnit;

extern unsigned short g_atkey_num;
extern asKeyListUnit gsKeyList[];
extern uint16_t gSkey_list_len;


#ifdef __cplusplus
}
#endif

#endif
