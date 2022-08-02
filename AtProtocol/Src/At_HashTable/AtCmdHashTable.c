#include "AtCmdHashTable.h"

unsigned short g_atcmd_num = 18;		/* AtCmd Num */
asCmdListUnit gsCmdList[] = {
/*00*/	{ 0X2CCB5EC5, NULL ,"Current"}, /* Current */
/*01*/	{ 0X02801EAB, NULL ,"System"}, /* System */
/*02*/	{ 0X08563BBC, NULL ,"Version"}, /* Version */
/*03*/	{ 0X5BA10D06, NULL ,"TestPattern"}, /* TestPattern */
/*04*/	{ 0X030B85E1, NULL ,"InstallationMode"}, /* InstallationMode */
/*05*/	{ 0X4C58DF1A, NULL ,"LightSourceTime"}, /* LightSourceTime */
/*06*/	{ 0X41B4E980, NULL ,"Temperature"}, /* Temperature */
/*07*/	{ 0X1FED8839, NULL ,"LightSource"}, /* LightSource */
/*08*/	{ 0X2D00BBF3, NULL ,"CwSpeed"}, /* CwSpeed */
/*09*/	{ 0X4DA43177, NULL ,"Reset"}, /* Reset */
/*10*/	{ 0X786E80BE, NULL ,"UpgradeOvp921Anf"}, /* UpgradeOvp921Anf */
/*11*/	{ 0X095B4C06, NULL ,"UpgradeOvp921Firmware"}, /* UpgradeOvp921Firmware */
/*12*/	{ 0X0BBED600, NULL ,"Eeprom"}, /* Eeprom */
/*13*/	{ 0X73BFD97F, NULL ,"SilentAsyncMessages"}, /* SilentAsyncMessages */
/*14*/	{ 0X7CBE16F2, NULL ,"LogInfo"}, /* LogInfo */
/*15*/	{ 0X00592743, NULL ,"Ovp921"}, /* Ovp921 */
/*16*/	{ 0X2F13D444, NULL ,"Error"}, /* Error */
/*17*/	{ 0X0010A1BF, NULL ,"Sn"}, /* Sn */
};
uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);
