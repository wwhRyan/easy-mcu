/**
 * @file unittest.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-10-29
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#include "CmdLine.h"

int main(void)
{
    char cmd[0xff] = {0};
    for (;;)
    {
        printf("input cmd:\n");
        scanf("%254s", cmd);
        ICmdLinesInput(cmd);
    }

    return 0;
}
