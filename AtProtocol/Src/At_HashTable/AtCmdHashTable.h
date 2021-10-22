#ifndef __ATCMDHASHTABLE_H__
#define __ATCMDHASHTABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "Src/At_internal/AtInternalConfig.h"
typedef struct __asAtKvList asAtKvList;
typedef enum __aeCmdName{
	kCmdDlpSaturation = 0x1,
	kCmdKeystone2D = 0x3,
	kCmdProjectionMode = 0x6,
	kCmdNetwork = 0x7,
	kCmdLcdCscLUT = 0x8,
	kCmdVolumeControl = 0x9,
	kCmdProductInformation = 0xa,
	kCmdType3D = 0xc,
	kCmdPowerConsumption = 0xd,
	kCmdAdcAdjust = 0xe,
	kCmdSystem = 0xf,
	kCmdVerticalKeystone = 0x10,
	kCmdMotorShift = 0x12,
	kCmdEdid = 0x13,
	kCmdVolume = 0x16,
	kCmdGetCurrent = 0x17,
	kCmdDlpGain = 0x18,
	kCmdVersion = 0x19,
	kCmdGetDlpBlackField = 0x1a,
	kCmdXprFixed = 0x1e,
	kCmdGetDlpRgbLevel = 0x20,
	kCmdAspectRatio = 0x22,
	kCmdImageFreeze = 0x25,
	kCmdDlpSource = 0x27,
	kCmdContrastEnhance = 0x29,
	kCmdGamma = 0x2b,
	kCmdHeartBeat = 0x2d,
	kCmdLcdProjector = 0x2f,
	kCmdTestPattern = 0x31,
	kCmdColorWheelDelay = 0x33,
	kCmdDlpPowerStatus = 0x35,
	kCmdGammaLUT = 0x39,
	kCmdLogInfo = 0x3a,
	kCmdSetFan = 0x3b,
	kCmdDlpWarping = 0x3c,
	kCmdReset = 0x3e,
	kCmdSignalChannel = 0x3f,
	kCmdFpgaPatternSize = 0x40,
	kCmdProjectionMode1 = 0x41,
	kCmdDlpWhiteGain = 0x42,
	kCmdDlpDefaultConfig = 0x43,
	kCmdLcdTestPattern = 0x44,
	kCmdBrilliantColor = 0x46,
	kCmdWarning = 0x47,
	kCmdInstallationMode = 0x48,
	kCmdFpga = 0x49,
	kCmdFanStatus = 0x4a,
	kCmdCwSpeed = 0x4b,
	kCmdHorizonKeystone = 0x4d,
	kCmdMotorCenter = 0x4f,
	kCmdMotorFocus = 0x50,
	kCmdLightSource = 0x51,
	kCmdMode3D = 0x52,
	kCmdSn = 0x54,
	kCmdLightSourceTime = 0x55,
	kCmdTemperature = 0x56,
	kCmdSetCurrent1 = 0x57,
	kCmdSyncFlip3D = 0x5b,
	kCmdDlpHue = 0x5c,
	kCmdStanbyTimes = 0x5d,
	kCmdUpgrade = 0x60,
	kCmdVcom = 0x63,
	kCmdLcdCsc = 0x65,
	kCmdSetCurrent = 0x67,
	kCmdRunTime = 0x68,
	kCmdStandbyMode = 0x6d,
	kCmdEeprom = 0x6e,
	kCmdGetCurrent1 = 0x72,
	kCmdDlpLogo = 0x78,
	kCmdHelp = 0x7b,
	kCmdMotorZoom = 0x7c,
	kCmdError = 0x7d,
} aeCmdName;

typedef struct __asCmdListUnit {
	unsigned char var;
	void (*func)(asAtKvList*, asAtStr*);
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
