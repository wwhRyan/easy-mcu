#ifndef __ATKEYHASHTABLE_H__
#define __ATKEYHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef enum __aeKeyName{
	kKeyB = 0x0,
	kKeyG = 0x1,
	kKeyR = 0x2,
	kKeyY = 0x3,
	kKeyOk = 0x4,
	kKeyOn = 0x5,
	kKeyOvp921 = 0x6,
	kKeyVerticalRamp = 0x7,
	kKeyNtcGreen = 0x8,
	kKeyData = 0x9,
	kKeyEeprom = 0xa,
	kKeyHorizontalRamp = 0xb,
	kKeyScatteringWheel = 0xc,
	kKeyMcu = 0xd,
	kKeyTableFront = 0xe,
	kKeySize = 0xf,
	kKeyBlack = 0x10,
	kKeyNtcBlue = 0x11,
	kKeyAll = 0x12,
	kKeyAnf1 = 0x13,
	kKeyAnf2 = 0x14,
	kKeyAnf3 = 0x15,
	kKeyNtcEnv = 0x16,
	kKeyFactory = 0x17,
	kKeyProjector = 0x18,
	kKeyNtcRed = 0x19,
	kKeyYellow = 0x1a,
	kKeyLightEngineBoard = 0x1b,
	kKeyGreen = 0x1c,
	kKeyGrey = 0x1d,
	kKeyGrid = 0x1e,
	kKeyOff = 0x1f,
	kKeyBlue = 0x20,
	kKeyCrc = 0x21,
	kKeyHour = 0x22,
	kKeyAddr = 0x23,
	kKeyCeilingRear = 0x24,
	kKeyNtcLcos = 0x25,
	kKeySourceLight = 0x26,
	kKeyMinute = 0x27,
	kKeyTableRear = 0x28,
	kKeyCeilingFront = 0x29,
	kKeyClear = 0x2a,
	kKeyLightEngine = 0x2b,
	kKeyRed = 0x2c,
	kKeyUser = 0x2d,
	kKeyStatus = 0x2e,
	kKeyMagenta = 0x2f,
	kKeyCheckerboard = 0x30,
	kKeyCyan = 0x31,
	kKeyWhite = 0x32,
	kKeyEmpty = 0x33,
	kKeySecond = 0x34,
	kKeyIdle = 0x35,
	kKeyIdx = 0x36,
} aeKeyName;

extern unsigned short g_atkey_num;
extern asKeyListUnit gsKeyList[];
extern uint16_t gSkey_list_len;


#ifdef __cplusplus
}
#endif

#endif
