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

int test_AsciiToInt()
{
    printf("\n");
    printf("[%s - %d]\n", __func__, __LINE__);
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

int test_SwapEndian()
{
    printf("\n");
    printf("[%s - %d]\n", __func__, __LINE__);

    uint16_t pdata16[10] = {0};
    uint32_t pdata32[10] = {0};
    uint16_t data16 = 0x1234;
    uint32_t data32 = 0x12345678;

    SWAP_ENDIAN(&data16, 1);
    SWAP_ENDIAN(&data32, 1);

    printf("data16 %X\n", data16);
    printf("data32 %X\n", data32);

    for (size_t i = 0; i < ARRAY_SIZE(pdata16); i++)
    {
        pdata16[i] = rand();
        printf("%.4X\n", pdata16[i]);
    }

    SWAP_ENDIAN(&pdata16, ARRAY_SIZE(pdata16));

    printf("after swap\n");
    for (size_t i = 0; i < ARRAY_SIZE(pdata16); i++)
    {
        printf("%.4X\n", pdata16[i]);
    }

    printf("\n");
    for (size_t i = 0; i < ARRAY_SIZE(pdata32); i++)
    {
        pdata32[i] = rand() * 0xffff;
        printf("%.8X\n", pdata32[i]);
    }

    SWAP_ENDIAN(&pdata32, ARRAY_SIZE(pdata32));

    printf("after swap\n");
    for (size_t i = 0; i < ARRAY_SIZE(pdata32); i++)
    {
        printf("%.8X\n", pdata32[i]);
    }
}

int main()
{
    test_AsciiToInt();
    test_SwapEndian();
    return 0;
}
