#include "AtKeyHashTable.h"

unsigned short g_atkey_max_collide_num = 27;		/* AtKey Max Collide Num */
unsigned short g_atkey_num = 261;		/* AtKey Num */
unsigned short g_atkey_htsize = 439;	/* AtKey HashTable Size */

unsigned char g_atkey_htsize_bits = 9;	/* AtKey HashTable Size's bits */

asKeyListUnit gsKeyList[] = {
	{ 0x42, 0 }, /* B */
	{ 0x47, 0 }, /* G */
	{ 0x28, 0 }, /* Gnum */
	{ 0x52, 0 }, /* R */
	{ 0xfa, 0 }, /* AutoFlipEnable */
	{ 0xef, 0 }, /* BottomLeftX */
	{ 0x59, 0 }, /* Y */
	{ 0x0, 0 },
	{ 0x57, 0 }, /* LensHardware */
	{ 0xf3, 0 }, /* Black */
	{ 0x0, 0 },
	{ 0xee, 0 }, /* BottomLeftY */
	{ 0x89, 0 }, /* ColorWheelSpoke */
	{ 0x14, 0 }, /* ProjectionModeHighLight1 */
	{ 0xe5, 0 }, /* Off */
	{ 0x92, 0 }, /* RLR */
	{ 0xe4, 0 }, /* Blue */
	{ 0x0, 0 },
	{ 0xd1, 0 }, /* ProductCode */
	{ 0x43, 0 }, /* BrightnessUniformity */
	{ 0x1b, 0 }, /* ProjectionModeHighLight2 */
	{ 0xc1, 0 }, /* EcoCurrent */
	{ 0x46, 0 }, /* Up */
	{ 0x0, 0 },
	{ 0x34, 0 }, /* DiagonalLines */
	{ 0x24, 0 }, /* BrandName */
	{ 0x97, 0 }, /* HDMI */
	{ 0x4, 0 }, /* Left */
	{ 0x7e, 0 }, /* MacAddress */
	{ 0x21, 0 }, /* ProjectionModeMovie */
	{ 0x7f, 0 }, /* Focus */
	{ 0x93, 0 }, /* IR3D */
	{ 0x47, 0 }, /* TableFront */
	{ 0x19, 0 }, /* ProjectionModePowersave1 */
	{ 0x0, 0 },
	{ 0x47, 0 }, /* Mask */
	{ 0x86, 0 }, /* HdcpKey */
	{ 0x1a, 0 }, /* ProjectionModePowersave2 */
	{ 0x6c, 0 }, /* ContrastRatio */
	{ 0x72, 0 }, /* Red */
	{ 0x16, 0 }, /* MaxB */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xd, 0 }, /* IduSoftware */
	{ 0x75, 0 }, /* Vnum */
	{ 0xf3, 0 }, /* DLPLink3D */
	{ 0xfb, 0 }, /* ProjectionModeHighLight */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x51, 0 }, /* VGA */
	{ 0x13, 0 }, /* MaxG */
	{ 0x1, 0 }, /* DlpVendorName */
	{ 0xc, 0 }, /* LogoIndex */
	{ 0x67, 0 }, /* PmuHardware */
	{ 0x80, 0 }, /* LensSoftware */
	{ 0x26, 0 }, /* MaxR */
	{ 0x24, 0 }, /* SrgbCurrent */
	{ 0x98, 0 }, /* NetworkStandby */
	{ 0xc7, 0 }, /* YcBcR */
	{ 0xd1, 0 }, /* BottomRightX */
	{ 0x40, 0 }, /* RGain */
	{ 0xb0, 0 }, /* NtcMask */
	{ 0xdb, 0 }, /* Megenta */
	{ 0x6b, 0 }, /* BGain */
	{ 0x81, 0 }, /* Empty */
	{ 0x57, 0 }, /* Error */
	{ 0xda, 0 }, /* Plus */
	{ 0xce, 0 }, /* BottomRightY */
	{ 0xe4, 0 }, /* Reduce */
	{ 0x8b, 0 }, /* VertPackedFull */
	{ 0xa1, 0 }, /* Cyan */
	{ 0xef, 0 }, /* CeilingFront */
	{ 0x74, 0 }, /* DVI */
	{ 0x68, 0 }, /* Half */
	{ 0x74, 0 }, /* Splash */
	{ 0xbc, 0 }, /* PlmSerial */
	{ 0xe6, 0 }, /* hiftHorizontal */
	{ 0x0, 0 },
	{ 0xee, 0 }, /* VertPackedHalf */
	{ 0x56, 0 }, /* Off_120Hz */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x84, 0 }, /* Erase */
	{ 0x0, 0 },
	{ 0x7b, 0 }, /* Zoom */
	{ 0x0, 0 },
	{ 0x9d, 0 }, /* On_60Hz */
	{ 0x7a, 0 }, /* MonitorName */
	{ 0xdd, 0 }, /* ALL */
	{ 0x0, 0 },
	{ 0xac, 0 }, /* White */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xc3, 0 }, /* EngineVersion */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x80, 0 }, /* Projector */
	{ 0xa, 0 }, /* Fill */
	{ 0x0, 0 },
	{ 0x75, 0 }, /* Active */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x12, 0 }, /* Mute */
	{ 0x55, 0 }, /* GGain */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xc1, 0 }, /* Minute */
	{ 0x3b, 0 }, /* Green */
	{ 0x67, 0 }, /* TableRear */
	{ 0x4f, 0 }, /* MachineSn */
	{ 0xdc, 0 }, /* Front */
	{ 0x6a, 0 }, /* NtcRedLaser1 */
	{ 0x9, 0 }, /* NtcBlueLaser1 */
	{ 0x0, 0 },
	{ 0xf9, 0 }, /* UnFreeze */
	{ 0xa, 0 }, /* NtcBlueLaser2 */
	{ 0xef, 0 }, /* HighLight */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x7b, 0 }, /* TemLookupTable1 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x78, 0 }, /* TemLookupTable2 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xf9, 0 }, /* Check */
	{ 0x6e, 0 }, /* PassThrough */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x14, 0 }, /* CeilingRear */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x6e, 0 }, /* Right */
	{ 0x0, 0 },
	{ 0x36, 0 }, /* ShiftVertical */
	{ 0xd1, 0 }, /* DlpHardware */
	{ 0x79, 0 }, /* TemLookupTable3 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x1, 0 }, /* IRE */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x7e, 0 }, /* TemLookupTable4 */
	{ 0x0, 0 },
	{ 0x3d, 0 }, /* HorizontalRamp */
	{ 0x0, 0 },
	{ 0x7d, 0 }, /* None */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x42, 0 }, /* VerticalRamp */
	{ 0x7f, 0 }, /* TemLookupTable5 */
	{ 0xe0, 0 }, /* SDI */
	{ 0x36, 0 }, /* Grid */
	{ 0xb2, 0 }, /* VsyncSeparatedHalf */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xdf, 0 }, /* UserCurrent */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x21, 0 }, /* SolidField */
	{ 0x86, 0 }, /* Movie */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x77, 0 }, /* NtcEnv1 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x52, 0 }, /* ColorBars */
	{ 0x97, 0 }, /* ColorCoordinateValue */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x27, 0 }, /* DlpVersion */
	{ 0x0, 0 },
	{ 0x69, 0 }, /* XprSl */
	{ 0x0, 0 },
	{ 0x76, 0 }, /* ColorWheelMode */
	{ 0x0, 0 },
	{ 0x5b, 0 }, /* Yes */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x42, 0 }, /* Idle */
	{ 0xbb, 0 }, /* PmuSoftware */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xc9, 0 }, /* Native */
	{ 0x37, 0 }, /* ColorWheelDelay */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xa2, 0 }, /* KeystoneOffset */
	{ 0x3f, 0 }, /* ColorWheelId */
	{ 0x36, 0 }, /* NtcPowerSupply */
	{ 0x53, 0 }, /* SetBars */
	{ 0xa, 0 }, /* StandardCurrent */
	{ 0x7a, 0 }, /* Hnum */
	{ 0xd5, 0 }, /* DefaultLanguage */
	{ 0xc, 0 }, /* HorizPackedHalf */
	{ 0x0, 0 },
	{ 0x69, 0 }, /* Warming */
	{ 0x0, 0 },
	{ 0x73, 0 }, /* NtcXpr1 */
	{ 0x8a, 0 }, /* ProjectionModePowersave */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x1c, 0 }, /* LightEngine */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xe1, 0 }, /* 4_3 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x42, 0 }, /* 16_10 */
	{ 0xf4, 0 }, /* BrightnesMode1 */
	{ 0xf5, 0 }, /* BrightnesMode2 */
	{ 0xf6, 0 }, /* BrightnesMode3 */
	{ 0xf7, 0 }, /* BrightnesMode4 */
	{ 0xe8, 0 }, /* BrightnesMode5 */
	{ 0xe9, 0 }, /* BrightnesMode6 */
	{ 0xea, 0 }, /* BrightnesMode7 */
	{ 0xeb, 0 }, /* BrightnesMode8 */
	{ 0xe8, 0 }, /* ProductModelNumber */
	{ 0x7c, 0 }, /* ModelName */
	{ 0x0, 0 },
	{ 0x40, 0 }, /* NtcGreenLaser1 */
	{ 0x0, 0 },
	{ 0xca, 0 }, /* Inside */
	{ 0xcb, 0 }, /* Oning */
	{ 0x6c, 0 }, /* Off_30Hz */
	{ 0x0, 0 },
	{ 0x7d, 0 }, /* VsyncSeparatedFull */
	{ 0xb6, 0 }, /* MinB */
	{ 0x6, 0 }, /* Factory */
	{ 0xcf, 0 }, /* Offing */
	{ 0x52, 0 }, /* Data */
	{ 0x42, 0 }, /* IduHardware */
	{ 0xbb, 0 }, /* MinG */
	{ 0xc, 0 }, /* Standby */
	{ 0x3b, 0 }, /* CurrentInfo1 */
	{ 0xec, 0 }, /* RGBRamps */
	{ 0x47, 0 }, /* HorizontalLines */
	{ 0xc6, 0 }, /* MinR */
	{ 0x7d, 0 }, /* XprId */
	{ 0x3a, 0 }, /* CurrentInfo2 */
	{ 0x0, 0 },
	{ 0xc3, 0 }, /* User */
	{ 0x3c, 0 }, /* Down */
	{ 0xdf, 0 }, /* ProjectionModeStadard1 */
	{ 0x35, 0 }, /* CurrentInfo3 */
	{ 0xdf, 0 }, /* Vga */
	{ 0x53, 0 }, /* All */
	{ 0xea, 0 }, /* InstallationMode */
	{ 0x0, 0 },
	{ 0x34, 0 }, /* CurrentInfo4 */
	{ 0xde, 0 }, /* ProjectionModeStadard2 */
	{ 0xfd, 0 }, /* Manufacturer */
	{ 0x1, 0 }, /* Grey */
	{ 0x0, 0 },
	{ 0x37, 0 }, /* CurrentInfo5 */
	{ 0x62, 0 }, /* Mode3D */
	{ 0x0, 0 },
	{ 0xd3, 0 }, /* Reset */
	{ 0x0, 0 },
	{ 0x36, 0 }, /* CurrentInfo6 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x19, 0 }, /* PartNumber */
	{ 0x0, 0 },
	{ 0x31, 0 }, /* CurrentInfo7 */
	{ 0xe4, 0 }, /* Invilid */
	{ 0x53, 0 }, /* TopLeftX */
	{ 0x86, 0 }, /* TopRightX */
	{ 0x52, 0 }, /* TopLeftY */
	{ 0x30, 0 }, /* CurrentInfo8 */
	{ 0x85, 0 }, /* TopRightY */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x47, 0 }, /* Fan1 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x46, 0 }, /* Fan2 */
	{ 0x0, 0 },
	{ 0x68, 0 }, /* HorizPackedFull */
	{ 0x49, 0 }, /* Fan3 */
	{ 0xf2, 0 }, /* Vx1Function */
	{ 0x38, 0 }, /* MovieCurrent */
	{ 0x48, 0 }, /* Fan4 */
	{ 0x61, 0 }, /* Null */
	{ 0xfb, 0 }, /* Servicer */
	{ 0x4b, 0 }, /* Fan5 */
	{ 0xf3, 0 }, /* ProjectionModeLowPower1 */
	{ 0x0, 0 },
	{ 0x4a, 0 }, /* Fan6 */
	{ 0x68, 0 }, /* SelfChecking */
	{ 0xf2, 0 }, /* ProjectionModeLowPower2 */
	{ 0x4d, 0 }, /* Fan7 */
	{ 0x0, 0 },
	{ 0x6d, 0 }, /* ProjectionModeMovie1 */
	{ 0x0, 0 },
	{ 0x6a, 0 }, /* ProjectionModeMovie2 */
	{ 0x0, 0 },
	{ 0x20, 0 }, /* ProjectionModeStadard */
	{ 0xf0, 0 }, /* CwId */
	{ 0x46, 0 }, /* No */
	{ 0xe6, 0 }, /* DemoCurrent */
	{ 0x28, 0 }, /* SelfCheckOk */
	{ 0xaf, 0 }, /* Sn */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xba, 0 }, /* DlpCompose */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x93, 0 }, /* ScreenDivisionEnable */
	{ 0x0, 0 },
	{ 0xa1, 0 }, /* Xpr */
	{ 0x0, 0 },
	{ 0x8e, 0 }, /* Brand */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x2b, 0 }, /* Freeze */
	{ 0x0, 0 },
	{ 0x60, 0 }, /* HDBaseT */
	{ 0x0, 0 },
	{ 0xdd, 0 }, /* Ip */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xe1, 0 }, /* Inx */
	{ 0x0, 0 },
	{ 0xac, 0 }, /* Powerup */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x43, 0 }, /* SerialNumber */
	{ 0x9e, 0 }, /* Normal */
	{ 0x77, 0 }, /* FanMask */
	{ 0x0, 0 },
	{ 0x70, 0 }, /* XprGain */
	{ 0xca, 0 }, /* CDS */
	{ 0x0, 0 },
	{ 0xc1, 0 }, /* Back */
	{ 0x28, 0 }, /* Yellow */
	{ 0x0, 0 },
	{ 0x5c, 0 }, /* Hdmi */
	{ 0xeb, 0 }, /* Rotationdirection */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xa, 0 }, /* SourceLight */
	{ 0x0, 0 },
	{ 0x6c, 0 }, /* 16_6 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x6f, 0 }, /* 16_9 */
	{ 0x0, 0 },
	{ 0x22, 0 }, /* Magenta */
	{ 0xa0, 0 }, /* DlpBoot */
	{ 0xa8, 0 }, /* Off_240Hz */
	{ 0x79, 0 }, /* VerticalLines */
	{ 0x79, 0 }, /* VideoOutput */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x62, 0 }, /* Status */
	{ 0x0, 0 },
	{ 0xd9, 0 }, /* Standard */
	{ 0x38, 0 }, /* GateWay */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xbd, 0 }, /* Cooling */
	{ 0xf7, 0 }, /* External */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0xf5, 0 }, /* ProjectionModeLowPower */
	{ 0x0, 0 },
	{ 0xbb, 0 }, /* CheckErboard */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x60, 0 }, /* ProductionWeek */
	{ 0xea, 0 }, /* LowPower */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x2, 0 }, /* DlpSoftware */
	{ 0xfe, 0 }, /* UnMute */
	{ 0x3e, 0 }, /* Dns */
	{ 0x15, 0 }, /* KeystoneTr */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x23, 0 }, /* LRL  */
	{ 0x9f, 0 }, /* Ok */
	{ 0x0, 0 },
	{ 0xa7, 0 }, /* FrameRate */
	{ 0x33, 0 }, /* DicomSimCurrent */
	{ 0xca, 0 }, /* NtcCw1 */
	{ 0x5e, 0 }, /* Brightness */
	{ 0xa5, 0 }, /* NtcDmd1 */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x21, 0 }, /* PowerSave */
	{ 0x0, 0 },
	{ 0x0, 0 },
	{ 0x9c, 0 }, /* On */
	{ 0x7d, 0 }, /* KeystoneEnable */
};
uint16_t gSkey_list_len = sizeof(gsKeyList) / sizeof(asKeyListUnit);
