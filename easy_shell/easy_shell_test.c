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

#include "easy_shell.h"
#include <windows.h>

void helloworld(char argc, char* argv)
{
    es_printf("helloworld\n");
}

int main(void)
{
    char cmd[0xff] = { 0 };
    shell_append("helloworld", helloworld);
    for (;;) {
        es_printf("input cmd:\n");
        scanf("%254[^\n]s", cmd); // get a string until '\n'
        // easy_shell_input(cmd);
        GET_TIME(easy_shell_input, cmd);
        memset(cmd, 0, sizeof(cmd));
        fflush(stdin); // clear the buffer
    }

    return 0;
}
