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

#include "../utils/Include/summary.h"

int main()
{
    char *tmp = "01ff010001010203";
    uint16_t data[100] = {0};
    ASCII_TO_INT(tmp, data);

    for (size_t i = 0; i < sizeof(tmp); i++)
    {
        printf("%X ", data[i]);
    }
    printf("\n");

    return 0;
}