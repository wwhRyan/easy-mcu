#ifndef __ATKEYHASHTABLE_H__
#define __ATKEYHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef enum __aeKeyName{
	kKeyB = 0x0,
	kKeyEeprom = 0x1,
	kKeyBlack = 0x2,
	kKeyCheckerboard = 0x3,
	kKeyBlue = 0x4,
	kKeyG = 0x5,
	kKeyR = 0x6,
	kKeyNtcEnv = 0x7,
	kKeyTableFront = 0x8,
	kKeyHour = 0x9,
	kKeyLightEngineBoard = 0xa,
	kKeyOff = 0xb,
	kKeyNtcRed = 0xc,
	kKeyNtcGreen = 0xd,
	kKeyNtcLcos = 0xe,
	kKeyRed = 0xf,
	kKeyEmpty = 0x10,
	kKeyCeilingFront = 0x11,
	kKeyCyan = 0x12,
	kKeyOvp921 = 0x13,
	kKeyY = 0x14,
	kKeyWhite = 0x16,
	kKeySecond = 0x17,
	kKeyProjector = 0x19,
	kKeySize = 0x1a,
	kKeyGreen = 0x1b,
	kKeyTableRear = 0x1c,
	kKeyCeilingRear = 0x22,
	kKeyClear = 0x25,
	kKeyHorizontalRamp = 0x26,
	kKeyVerticalRamp = 0x27,
	kKeyGrid = 0x28,
	kKeyAddr = 0x29,
	kKeyMinute = 0x30,
	kKeyAnf1 = 0x33,
	kKeyAnf2 = 0x36,
	kKeyLightEngine = 0x38,
	kKeyAnf3 = 0x39,
	kKeyMcu = 0x3d,
	kKeyFactory = 0x3e,
	kKeyData = 0x3f,
	kKeyUser = 0x40,
	kKeyAll = 0x43,
	kKeyCrc = 0x46,
	kKeyNtcBlue = 0x47,
	kKeyGrey = 0x48,
	kKeyScatteringWheel = 0x4b,
	kKeyYellow = 0x5c,
	kKeySourceLight = 0x5d,
	kKeyMagenta = 0x60,
	kKeyStatus = 0x66,
	kKeyIdx = 0x68,
	kKeyOk = 0x6a,
	kKeyOn = 0x6c,
} aeKeyName;

typedef struct __asKeyListUnit {
	int var;
	void* type;
	char* str;

} asKeyListUnit;

extern unsigned short g_atkey_max_collide_num;
extern unsigned short g_atkey_num;
extern unsigned short g_atkey_htsize;
extern unsigned char g_atkey_htsize_bits;
extern asKeyListUnit gsKeyList[];
extern uint16_t gSkey_list_len;


#ifdef __cplusplus
}
#endif

#endif
