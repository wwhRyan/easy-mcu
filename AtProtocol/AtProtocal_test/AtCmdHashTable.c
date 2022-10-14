#include "AtCmdHashTable.h"

unsigned short g_atcmd_num = 18;		/* AtCmd Num */
asCmdListUnit gsCmdList[] = {
/*00*/	{ 0X0010A1BF, NULL ,"Sn"}, /* Sn */
/*01*/	{ 0X00592743, NULL ,"Ovp921"}, /* Ovp921 */
/*02*/	{ 0X02801EAB, NULL ,"System"}, /* System */
/*03*/	{ 0X030B85E1, NULL ,"InstallationMode"}, /* InstallationMode */
/*04*/	{ 0X08563BBC, NULL ,"Version"}, /* Version */
/*05*/	{ 0X095B4C06, NULL ,"UpgradeOvp921Firmware"}, /* UpgradeOvp921Firmware */
/*06*/	{ 0X0BBED600, NULL ,"Eeprom"}, /* Eeprom */
/*07*/	{ 0X1FED8839, NULL ,"LightSource"}, /* LightSource */
/*08*/	{ 0X2CCB5EC5, NULL ,"Current"}, /* Current */
/*09*/	{ 0X2D00BBF3, NULL ,"CwSpeed"}, /* CwSpeed */
/*10*/	{ 0X2F13D444, NULL ,"Error"}, /* Error */
/*11*/	{ 0X41B4E980, NULL ,"Temperature"}, /* Temperature */
/*12*/	{ 0X4C58DF1A, NULL ,"LightSourceTime"}, /* LightSourceTime */
/*13*/	{ 0X4DA43177, NULL ,"Reset"}, /* Reset */
/*14*/	{ 0X5BA10D06, NULL ,"TestPattern"}, /* TestPattern */
/*15*/	{ 0X73BFD97F, NULL ,"SilentAsyncMessages"}, /* SilentAsyncMessages */
/*16*/	{ 0X786E80BE, NULL ,"UpgradeOvp921Anf"}, /* UpgradeOvp921Anf */
/*17*/	{ 0X7CBE16F2, NULL ,"LogInfo"}, /* LogInfo */
};
uint16_t gScmd_list_len = sizeof(gsCmdList) / sizeof(asCmdListUnit);
