#include "AtCmdHashTable.h"

unsigned short g_atcmd_max_collide_num = 4;		/* AtCmd MAX Collide Num */
unsigned short g_atcmd_num = 22;		/* AtCmd Num */
unsigned short g_atcmd_htsize = 36;	/* AtCmd HashTable Size */

unsigned char g_atcmd_htsize_bits = 6;	/* AtCmd HashTable Size's bits */

asCmdListUnit gsCmdList[] = {
	{ 0x55, NULL ,"HorizonKeystone"}, /* HorizonKeystone */
	{ 0xf3, NULL ,"CwSpeed"}, /* CwSpeed */
	{ 0x2b, NULL ,"Keystone2D"}, /* Keystone2D */
	{ 0xd4, NULL ,"LightSource"}, /* LightSource */
	{ 0x42, NULL ,"LightSourceTime"}, /* LightSourceTime */
	{ 0x0, NULL ,NULL},
	{ 0x34, NULL ,"Temperature"}, /* Temperature */
	{ 0x2b, NULL ,"System"}, /* System */
	{ 0x2a, NULL ,"VerticalKeystone"}, /* VerticalKeystone */
	{ 0xaf, NULL ,"Sn"}, /* Sn */
	{ 0x0, NULL ,NULL},
	{ 0x8e, NULL ,"GetCurrent"}, /* GetCurrent */
	{ 0xea, NULL ,"Version"}, /* Version */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x42, NULL ,"SetCurrent"}, /* SetCurrent */
	{ 0xd5, NULL ,"RunTime"}, /* RunTime */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0xbe, NULL ,"Eeprom"}, /* Eeprom */
	{ 0x0, NULL ,NULL},
	{ 0xd7, NULL ,"Gamma"}, /* Gamma */
	{ 0xa7, NULL ,"TestPattern"}, /* TestPattern */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x46, NULL ,"Help"}, /* Help */
	{ 0x57, NULL ,"Error"}, /* Error */
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0x0, NULL ,NULL},
	{ 0xd3, NULL ,"Reset"}, /* Reset */
	{ 0x4c, NULL ,"LogInfo"}, /* LogInfo */
	{ 0xea, NULL ,"InstallationMode"}, /* InstallationMode */
	{ 0x0, NULL ,NULL},
	{ 0x25, NULL ,"Warning"}, /* Warning */
};
uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);
