#ifndef __ATKEYHASHTABLE_H__
#define __ATKEYHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef enum __aeKeyName{
	kKeyB = 0x0,
	kKeyG = 0x1,
	kKeyBlack = 0x2,
	kKeyOff = 0x3,
	kKeyHour = 0x4,
	kKeyCheckerboard = 0x5,
	kKeyBlue = 0x6,
	kKeyOn = 0x7,
	kKeyR = 0x8,
	kKeyNtcLcos = 0x9,
	kKeyLightEngineBoard = 0xa,
	kKeyNtcEnv = 0xb,
	kKeyTableFront = 0xc,
	kKeyNtcGreen = 0xd,
	kKeyY = 0xe,
	kKeyScatteringWheel  = 0xf,
	kKeyNtcRed = 0x10,
	kKeyCeilingFront = 0x11,
	kKeyEmpty = 0x12,
	kKeyOvp921 = 0x13,
	kKeyCyan = 0x14,
	kKeyWhite = 0x16,
	kKeyRed = 0x17,
	kKeyProjector = 0x19,
	kKeySize = 0x1a,
	kKeyGreen = 0x1b,
	kKeySecond = 0x1c,
	kKeyTableRear = 0x1d,
	kKeyCeilingRear = 0x22,
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
	kKeyYellow = 0x5c,
	kKeySourceLight = 0x5d,
	kKeyMagenta = 0x60,
	kKeyStatus = 0x66,
	kKeyIdx = 0x68,
	kKeyOk = 0x6a,
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
