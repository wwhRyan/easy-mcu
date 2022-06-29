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
	kKeyIdx = 0x3,
	kKeyHour = 0x4,
	kKeyR = 0x5,
	kKeyY = 0x6,
	kKeyOff = 0x7,
	kKeyTableFront = 0x8,
	kKeyCheckerboard = 0x9,
	kKeyBlue = 0xa,
	kKeyOk = 0xb,
	kKeyNtcEnv = 0xc,
	kKeyNtcGreen = 0xd,
	kKeyNtcLcos = 0xe,
	kKeyNtcRed = 0xf,
	kKeyCeilingFront = 0x11,
	kKeyRed = 0x12,
	kKeyOn = 0x13,
	kKeyEmpty = 0x16,
	kKeyScatteringWheel  = 0x17,
	kKeyCyan = 0x18,
	kKeyOvp921 = 0x19,
	kKeySize = 0x1a,
	kKeyGreen = 0x1b,
	kKeySecond = 0x1c,
	kKeyTableRear = 0x1d,
	kKeyProjector = 0x1e,
	kKeyWhite = 0x20,
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
