/**
 * @file CmdLineConfig.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2022-04-12
 * 
 * @copyright Copyright@appotronics 2022. All Rights Reserved
 * 
 */

/* Cmdlines Config */
#define MAX_CMDLINE_REGISTER_NUM (20) // max number of cmdline register table
#define MAX_CMD_SIZE (0xFF)           // max size of single cmdline
#define WRONG_CMD (0xFF)              // wrong cmd
#define CMD_PARAS_MAX_NUM 10          // max number of parameters
#define cmd_printf printf