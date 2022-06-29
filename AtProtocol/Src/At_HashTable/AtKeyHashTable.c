#include "AtKeyHashTable.h"

unsigned short g_atkey_max_collide_num = 6;		/* AtKey Max Collide Num */
unsigned short g_atkey_num = 51;		/* AtKey Num */
unsigned short g_atkey_htsize = 103;	/* AtKey HashTable Size */

unsigned char g_atkey_htsize_bits = 7;	/* AtKey HashTable Size's bits */

asKeyListUnit gsKeyList[] = {
	{ 0x42, 0 ,"B"}, /* B */
	{ 0x47, 0 ,"G"}, /* G */
	{ 0xf3, 0 ,"Black"}, /* Black */
	{ 0x95, 0 ,"Idx"}, /* Idx */
	{ 0xbf, 0 ,"Hour"}, /* Hour */
	{ 0x52, 0 ,"R"}, /* R */
	{ 0x59, 0 ,"Y"}, /* Y */
	{ 0xe5, 0 ,"Off"}, /* Off */
	{ 0x47, 0 ,"TableFront"}, /* TableFront */
	{ 0x46, 0 ,"Checkerboard"}, /* Checkerboard */
	{ 0xe4, 0 ,"Blue"}, /* Blue */
	{ 0x9f, 0 ,"Ok"}, /* Ok */
	{ 0xc2, 0 ,"NtcEnv"}, /* NtcEnv */
	{ 0x2b, 0 ,"NtcGreen"}, /* NtcGreen */
	{ 0xf1, 0 ,"NtcLcos"}, /* NtcLcos */
	{ 0xab, 0 ,"NtcRed"}, /* NtcRed */
	{ 0x0, 0 ,NULL},
	{ 0xef, 0 ,"CeilingFront"}, /* CeilingFront */
	{ 0x72, 0 ,"Red"}, /* Red */
	{ 0x9c, 0 ,"On"}, /* On */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x81, 0 ,"Empty"}, /* Empty */
	{ 0xf1, 0 ,"ScatteringWheel "}, /* ScatteringWheel  */
	{ 0xa1, 0 ,"Cyan"}, /* Cyan */
	{ 0x1a, 0 ,"Ovp921"}, /* Ovp921 */
	{ 0x21, 0 ,"Size"}, /* Size */
	{ 0x3b, 0 ,"Green"}, /* Green */
	{ 0xce, 0 ,"Second"}, /* Second */
	{ 0x67, 0 ,"TableRear"}, /* TableRear */
	{ 0x80, 0 ,"Projector"}, /* Projector */
	{ 0x0, 0 ,NULL},
	{ 0xac, 0 ,"White"}, /* White */
	{ 0x0, 0 ,NULL},
	{ 0x14, 0 ,"CeilingRear"}, /* CeilingRear */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x3d, 0 ,"HorizontalRamp"}, /* HorizontalRamp */
	{ 0x42, 0 ,"VerticalRamp"}, /* VerticalRamp */
	{ 0x36, 0 ,"Grid"}, /* Grid */
	{ 0xfb, 0 ,"Addr"}, /* Addr */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0xc1, 0 ,"Minute"}, /* Minute */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0xd0, 0 ,"Anf1"}, /* Anf1 */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0xd1, 0 ,"Anf2"}, /* Anf2 */
	{ 0x0, 0 ,NULL},
	{ 0x1c, 0 ,"LightEngine"}, /* LightEngine */
	{ 0xd2, 0 ,"Anf3"}, /* Anf3 */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x37, 0 ,"Mcu"}, /* Mcu */
	{ 0x6, 0 ,"Factory"}, /* Factory */
	{ 0x52, 0 ,"Data"}, /* Data */
	{ 0xc3, 0 ,"User"}, /* User */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x53, 0 ,"All"}, /* All */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x5d, 0 ,"Crc"}, /* Crc */
	{ 0x73, 0 ,"NtcBlue"}, /* NtcBlue */
	{ 0x1, 0 ,"Grey"}, /* Grey */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x28, 0 ,"Yellow"}, /* Yellow */
	{ 0xa, 0 ,"SourceLight"}, /* SourceLight */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x22, 0 ,"Magenta"}, /* Magenta */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x62, 0 ,"Status"}, /* Status */
};
uint16_t gSkey_list_len = sizeof(gsKeyList) / sizeof(asKeyListUnit);
