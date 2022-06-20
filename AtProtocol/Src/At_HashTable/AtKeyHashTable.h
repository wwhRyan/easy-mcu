#ifndef __ATKEYHASHTABLE_H__
#define __ATKEYHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef enum __aeKeyName{
	kKeyB = 0x0,
	kKeyBottomLeftX = 0x1,
	kKeyBlack = 0x2,
	kKeyBottomLeftY = 0x3,
	kKeyCyan = 0x4,
	kKeyG = 0x5,
	kKeyDiagonalLines = 0x6,
	kKeyMcuSoftware = 0x7,
	kKeyPlmSerial = 0x8,
	kKeyNtcLcos = 0x9,
	kKeyR = 0xa,
	kKeyY = 0xb,
	kKeyTableFront = 0xc,
	kKeyMegenta = 0xd,
	kKeyBottomRightX = 0xe,
	kKeyBottomRightY = 0xf,
	kKeyCeilingFront = 0x11,
	kKeyNtcGreen = 0x14,
	kKeyEngineVersion = 0x16,
	kKeyWhite = 0x18,
	kKeyProjector = 0x19,
	kKeyGreen = 0x1b,
	kKeyMachineSn = 0x1c,
	kKeyTableRear = 0x1d,
	kKeyCeilingRear = 0x22,
	kKeyHorizontalRamp = 0x26,
	kKeyVerticalRamp = 0x27,
	kKeyGrid = 0x28,
	kKeyMinute = 0x29,
	kKeyColorBars = 0x2e,
	kKeySetBars = 0x30,
	kKeyNtcPowerSupply = 0x34,
	kKeyLightEngine = 0x38,
	kKeyModelName = 0x3c,
	kKeyFactory = 0x3e,
	kKeyUser = 0x3f,
	kKeyHorizontalLines = 0x40,
	kKeyRGBRamps = 0x42,
	kKeyAll = 0x43,
	kKeyPartNumber = 0x47,
	kKeyGrey = 0x48,
	kKeyTopRightX = 0x49,
	kKeyTopLeftX = 0x4b,
	kKeyServicer = 0x4c,
	kKeyInstallationMode = 0x4d,
	kKeyTopLeftY = 0x4e,
	kKeyLcosSoftware = 0x4f,
	kKeyTopRightY = 0x51,
	kKeyXpr = 0x53,
	kKeyYellow = 0x5c,
	kKeySourceLight = 0x5d,
	kKeyVerticalLines = 0x5f,
	kKeyStatus = 0x60,
	kKeyNtcBLue = 0x62,
	kKeyCheckErboard = 0x65,
	kKeyOk = 0x6a,
	kKeyOn = 0x6c,
	kKeyOff = 0x6e,
	kKeyRed = 0x70,
	kKeyBlue = 0x71,
	kKeyBrandName = 0x74,
	kKeyNtcRed = 0x76,
	kKeyEmpty = 0x7d,
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
