#include "AtCmdHashTable.h"

unsigned short g_atcmd_max_collide_num = 4;		/* AtCmd MAX Collide Num */
unsigned short g_atcmd_num = 72;		/* AtCmd Num */
unsigned short g_atcmd_htsize = 127;	/* AtCmd HashTable Size */

unsigned char g_atcmd_htsize_bits = 7;	/* AtCmd HashTable Size's bits */

asCmdListUnit gsCmdList[] = {
	{ 0x0, NULL },
	{ 0x38, NULL }, /* DlpSaturation */
	{ 0x0, NULL },
	{ 0x2b, NULL }, /* Keystone2D */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x27, NULL }, /* ProjectionMode */
	{ 0x29, NULL }, /* Network */
	{ 0xe, NULL }, /* LcdCscLUT */
	{ 0xa8, NULL }, /* VolumeControl */
	{ 0xd, NULL }, /* ProductInformation */
	{ 0x0, NULL },
	{ 0x79, NULL }, /* Type3D */
	{ 0xd0, NULL }, /* PowerConsumption */
	{ 0x84, NULL }, /* AdcAdjust */
	{ 0x2b, NULL }, /* System */
	{ 0x2a, NULL }, /* VerticalKeystone */
	{ 0x0, NULL },
	{ 0x39, NULL }, /* MotorShift */
	{ 0xfe, NULL }, /* Edid */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xbb, NULL }, /* Volume */
	{ 0x8e, NULL }, /* GetCurrent */
	{ 0xa5, NULL }, /* DlpGain */
	{ 0xea, NULL }, /* Version */
	{ 0xaa, NULL }, /* GetDlpBlackField */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xf7, NULL }, /* XprFixed */
	{ 0x0, NULL },
	{ 0xed, NULL }, /* GetDlpRgbLevel */
	{ 0x0, NULL },
	{ 0x30, NULL }, /* AspectRatio */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x97, NULL }, /* ImageFreeze */
	{ 0x0, NULL },
	{ 0xac, NULL }, /* DlpSource */
	{ 0x0, NULL },
	{ 0xd5, NULL }, /* ContrastEnhance */
	{ 0x0, NULL },
	{ 0xd7, NULL }, /* Gamma */
	{ 0x0, NULL },
	{ 0x45, NULL }, /* HeartBeat */
	{ 0x0, NULL },
	{ 0x6f, NULL }, /* LcdProjector */
	{ 0x0, NULL },
	{ 0xa7, NULL }, /* TestPattern */
	{ 0x0, NULL },
	{ 0x37, NULL }, /* ColorWheelDelay */
	{ 0x0, NULL },
	{ 0x3a, NULL }, /* DlpPowerStatus */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xb9, NULL }, /* GammaLUT */
	{ 0x4c, NULL }, /* LogInfo */
	{ 0x6e, NULL }, /* SetFan */
	{ 0x6b, NULL }, /* DlpWarping */
	{ 0x0, NULL },
	{ 0xd3, NULL }, /* Reset */
	{ 0x45, NULL }, /* SignalChannel */
	{ 0x65, NULL }, /* FpgaPatternSize */
	{ 0xdb, NULL }, /* ProjectionMode1 */
	{ 0xf4, NULL }, /* DlpWhiteGain */
	{ 0xd5, NULL }, /* DlpDefaultConfig */
	{ 0x22, NULL }, /* LcdTestPattern */
	{ 0x0, NULL },
	{ 0xbf, NULL }, /* BrilliantColor */
	{ 0x25, NULL }, /* Warning */
	{ 0xea, NULL }, /* InstallationMode */
	{ 0x68, NULL }, /* Fpga */
	{ 0xa0, NULL }, /* FanStatus */
	{ 0xf3, NULL }, /* CwSpeed */
	{ 0x0, NULL },
	{ 0x55, NULL }, /* HorizonKeystone */
	{ 0x0, NULL },
	{ 0x1f, NULL }, /* MotorCenter */
	{ 0x9, NULL }, /* MotorFocus */
	{ 0xd4, NULL }, /* LightSource */
	{ 0x62, NULL }, /* Mode3D */
	{ 0x0, NULL },
	{ 0xaf, NULL }, /* Sn */
	{ 0x42, NULL }, /* LightSourceTime */
	{ 0x34, NULL }, /* Temperature */
	{ 0x7d, NULL }, /* SetCurrent1 */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xba, NULL }, /* SyncFlip3D */
	{ 0x77, NULL }, /* DlpHue */
	{ 0xf1, NULL }, /* StanbyTimes */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x6a, NULL }, /* Upgrade */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xcc, NULL }, /* Vcom */
	{ 0x0, NULL },
	{ 0xee, NULL }, /* LcdCsc */
	{ 0x0, NULL },
	{ 0x42, NULL }, /* SetCurrent */
	{ 0xd5, NULL }, /* RunTime */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x5f, NULL }, /* StandbyMode */
	{ 0xbe, NULL }, /* Eeprom */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xca, NULL }, /* GetCurrent1 */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0xb6, NULL }, /* DlpLogo */
	{ 0x0, NULL },
	{ 0x0, NULL },
	{ 0x46, NULL }, /* Help */
	{ 0xfc, NULL }, /* MotorZoom */
	{ 0x57, NULL }, /* Error */
	{ 0x0, NULL },
};
uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);
