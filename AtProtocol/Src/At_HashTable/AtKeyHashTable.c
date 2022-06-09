#include "AtKeyHashTable.h"

unsigned short g_atkey_max_collide_num = 12;		/* AtKey Max Collide Num */
unsigned short g_atkey_num = 63;		/* AtKey Num */
unsigned short g_atkey_htsize = 107;	/* AtKey HashTable Size */

unsigned char g_atkey_htsize_bits = 7;	/* AtKey HashTable Size's bits */

asKeyListUnit gsKeyList[] = {
	{ 0x42, 0 ,"B"}, /* B */
	{ 0xef, 0 ,"BottomLeftX"}, /* BottomLeftX */
	{ 0xf3, 0 ,"Black"}, /* Black */
	{ 0xee, 0 ,"BottomLeftY"}, /* BottomLeftY */
	{ 0x47, 0 ,"G"}, /* G */
	{ 0x9c, 0 ,"On"}, /* On */
	{ 0xe4, 0 ,"Blue"}, /* Blue */
	{ 0xec, 0 ,"McuSoftware"}, /* McuSoftware */
	{ 0x52, 0 ,"R"}, /* R */
	{ 0x24, 0 ,"BrandName"}, /* BrandName */
	{ 0x47, 0 ,"TableFront"}, /* TableFront */
	{ 0xab, 0 ,"NtcRed"}, /* NtcRed */
	{ 0x59, 0 ,"Y"}, /* Y */
	{ 0x34, 0 ,"DiagonalLines"}, /* DiagonalLines */
	{ 0xd1, 0 ,"BottomRightX"}, /* BottomRightX */
	{ 0xce, 0 ,"BottomRightY"}, /* BottomRightY */
	{ 0x0, 0 ,NULL},
	{ 0xef, 0 ,"CeilingFront"}, /* CeilingFront */
	{ 0x81, 0 ,"Empty"}, /* Empty */
	{ 0xf1, 0 ,"NtcLcos"}, /* NtcLcos */
	{ 0xa1, 0 ,"Cyan"}, /* Cyan */
	{ 0x0, 0 ,NULL},
	{ 0xc3, 0 ,"EngineVersion"}, /* EngineVersion */
	{ 0xe5, 0 ,"Off"}, /* Off */
	{ 0xac, 0 ,"White"}, /* White */
	{ 0x80, 0 ,"Projector"}, /* Projector */
	{ 0x0, 0 ,NULL},
	{ 0x3b, 0 ,"Green"}, /* Green */
	{ 0x4f, 0 ,"MachineSn"}, /* MachineSn */
	{ 0x72, 0 ,"Red"}, /* Red */
	{ 0x67, 0 ,"TableRear"}, /* TableRear */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x14, 0 ,"CeilingRear"}, /* CeilingRear */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x3d, 0 ,"HorizontalRamp"}, /* HorizontalRamp */
	{ 0x42, 0 ,"VerticalRamp"}, /* VerticalRamp */
	{ 0x36, 0 ,"Grid"}, /* Grid */
	{ 0xdb, 0 ,"Megenta"}, /* Megenta */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x52, 0 ,"ColorBars"}, /* ColorBars */
	{ 0x0, 0 ,NULL},
	{ 0xc1, 0 ,"Minute"}, /* Minute */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x36, 0 ,"NtcPowerSupply"}, /* NtcPowerSupply */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x2b, 0 ,"NtcGreen"}, /* NtcGreen */
	{ 0x1c, 0 ,"LightEngine"}, /* LightEngine */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x7c, 0 ,"ModelName"}, /* ModelName */
	{ 0x0, 0 ,NULL},
	{ 0x6, 0 ,"Factory"}, /* Factory */
	{ 0xc3, 0 ,"User"}, /* User */
	{ 0x47, 0 ,"HorizontalLines"}, /* HorizontalLines */
	{ 0x0, 0 ,NULL},
	{ 0xec, 0 ,"RGBRamps"}, /* RGBRamps */
	{ 0x53, 0 ,"All"}, /* All */
	{ 0x0, 0 ,NULL},
	{ 0xbc, 0 ,"PlmSerial"}, /* PlmSerial */
	{ 0x0, 0 ,NULL},
	{ 0x19, 0 ,"PartNumber"}, /* PartNumber */
	{ 0x1, 0 ,"Grey"}, /* Grey */
	{ 0x86, 0 ,"TopRightX"}, /* TopRightX */
	{ 0x0, 0 ,NULL},
	{ 0x53, 0 ,"TopLeftX"}, /* TopLeftX */
	{ 0xfb, 0 ,"Servicer"}, /* Servicer */
	{ 0xea, 0 ,"InstallationMode"}, /* InstallationMode */
	{ 0x52, 0 ,"TopLeftY"}, /* TopLeftY */
	{ 0xbc, 0 ,"LcosSoftware"}, /* LcosSoftware */
	{ 0x0, 0 ,NULL},
	{ 0x85, 0 ,"TopRightY"}, /* TopRightY */
	{ 0x0, 0 ,NULL},
	{ 0x53, 0 ,"SetBars"}, /* SetBars */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0xa1, 0 ,"Xpr"}, /* Xpr */
	{ 0x0, 0 ,NULL},
	{ 0x28, 0 ,"Yellow"}, /* Yellow */
	{ 0xa, 0 ,"SourceLight"}, /* SourceLight */
	{ 0x0, 0 ,NULL},
	{ 0x79, 0 ,"VerticalLines"}, /* VerticalLines */
	{ 0x62, 0 ,"Status"}, /* Status */
	{ 0x0, 0 ,NULL},
	{ 0x72, 0 ,"NtcBLue"}, /* NtcBLue */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0xbb, 0 ,"CheckErboard"}, /* CheckErboard */
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x0, 0 ,NULL},
	{ 0x9f, 0 ,"Ok"}, /* Ok */
};
uint16_t gSkey_list_len = sizeof(gsKeyList) / sizeof(asKeyListUnit);
