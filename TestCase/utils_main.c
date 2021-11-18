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
    uint16_t *pdata16_swap = (uint16_t *)pdata16;
    uint32_t *pdata32_swap = (uint32_t *)pdata32;

    SwapEndianPro(&data16, 1, sizeof(data16));
    SwapEndianPro(&data32, 1, sizeof(data32));

    printf("data16 %X\n", data16);
    printf("data32 %X\n", data32);

    for (size_t i = 0; i < ARRAY_SIZE(pdata16); i++)
    {
        pdata16[i] = rand();
        printf("%.4X\n", pdata16[i]);
    }

    SwapEndianPro(pdata16_swap, ARRAY_SIZE(pdata16), sizeof(*pdata16));

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

    SwapEndianPro(pdata32_swap, ARRAY_SIZE(pdata32), sizeof(*pdata32));

    printf("after swap\n");
    for (size_t i = 0; i < ARRAY_SIZE(pdata32); i++)
    {
        printf("%.8X\n", pdata32[i]);
    }
}
/**
 * @brief sizeof(array) is total size of array
 * sizeof(array[0]) is size of array member
 * sizeof(*array) also is size of array memer
 * 
 */

int main()
{
    test_AsciiToInt();
    test_SwapEndian();
    return 0;
}
