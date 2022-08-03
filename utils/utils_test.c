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

#include "utilsAsciiConvert.h"

int test_AsciiToInt()
{
    printf("\n");
    printf("[%s - %d]\n", __func__, __LINE__);
    char* tmp = "01ff010001010203";
    uint16_t data[100] = { 0 };
    ASCII_TO_INT(tmp, data);

    for (size_t i = 0; i < strlen(tmp); i++) {
        printf("%X ", data[i]);
    }
    printf("\n");

    return 0;
}

void test_IntToAscii()
{
    printf("[%s - %d]\n", __func__, __LINE__);
    char output[256] = { 0 };
    uint8_t uint8_data[5] = { 0x01, 0x02, 0x03, 0x04 };
    uint16_t uint16_data[5] = { 0x0102, 0x0304, 0x0405, 0x0607 };
    uint32_t uint32_data[5] = { 0x01020304, 0x05060708, 0x09101112, 0x13141516 };

    IntToAscii(uint8_data, (char*)output, 1, ARRAY_SIZE(uint8_data));
    printf("uint8_data output %s\n", (char*)output);
    memset(output, 0, sizeof(output));

    IntToAscii(uint16_data, (char*)output, 2, ARRAY_SIZE(uint16_data));
    printf("uint16_data output %s\n", (char*)output);
    memset(output, 0, sizeof(output));

    IntToAscii(uint32_data, (char*)output, 4, ARRAY_SIZE(uint32_data));
    printf("uint32_data output %s\n", (char*)output);
    memset(output, 0, sizeof(output));
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
    test_IntToAscii();
    return 0;
}
