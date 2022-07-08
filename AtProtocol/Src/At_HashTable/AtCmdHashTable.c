#include "AtCmdHashTable.h"

unsigned short g_atcmd_max_collide_num = 1;		/* AtCmd MAX Collide Num */
unsigned short g_atcmd_num = 18;		/* AtCmd Num */
unsigned short g_atcmd_htsize = 37;	/* AtCmd HashTable Size */

unsigned char g_atcmd_htsize_bits = 6;	/* AtCmd HashTable Size's bits */

asCmdListUnit gsCmdList[] = {
	{ 0xf3, NULL ,"CwSpeed"}, /* CwSpeed */
	{ 0xd4, NULL ,"LightSource"}, /* LightSource */
	{ 0x0, NULL ,NULL},
	{ 0xaf, NULL ,"Sn"}, /* Sn */
	{ 0x0, NULL ,NULL},
	{ 0xc0, NULL ,"SilentAsyncMessages"}, /* SilentAsyncMessages */
	{ 0x0, NULL ,NULL},
	{ 0x2b, NULL ,"System"}, /* System */
	{ 0x0, NULL ,NULL},
	{ 0x1a, NULL ,"Ovp921"}, /* Ovp921 */
	{ 0x0, NULL ,NULL},
	{ 0x34, NULL ,"Temperature"}, /* Temperature */
	{ 0xea, NULL ,"Version"}, /* Version */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x5d, NULL ,"UpgradeOvp921Firmware"}, /* UpgradeOvp921Firmware */
	{ 0xbe, NULL ,"Eeprom"}, /* Eeprom */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0xa7, NULL ,"TestPattern"}, /* TestPattern */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x57, NULL ,"Error"}, /* Error */
	{ 0x4c, NULL ,"LogInfo"}, /* LogInfo */
	{ 0x0, NULL ,NULL},
	{ 0xe, NULL ,"Current"}, /* Current */
	{ 0x0, NULL ,NULL},
	{ 0xd0, NULL ,"UpgradeOvp921Anf"}, /* UpgradeOvp921Anf */
	{ 0xd3, NULL ,"Reset"}, /* Reset */
	{ 0x0, NULL ,NULL},
	{ 0xea, NULL ,"InstallationMode"}, /* InstallationMode */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x42, NULL ,"LightSourceTime"}, /* LightSourceTime */
};
uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);
