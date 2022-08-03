/**
 * @file utilsAsciiConvert.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2021-10-22
 *
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 *
 */

#include "utilsAsciiConvert.h"

/**
 * @brief eg：将字符串 "12344321" --Convert--> 12,34,43,21 Or 1234,4321 Or 12344321, 无内存消耗
 *
 * @param p_ascii_data 字符串指针,string no including ' '
 * @param p_void_data 数组指针,adapter to output array
 * @param byte_size 一个整型(Int)包含字符(byte)个数，通常是1、2、4
 * @return true
 * @return false
 */
bool AsciiToInt(const char* p_ascii_data, void* p_void_data, int byte_size)
{
    E_assert(byte_size == 1 || byte_size == 2 || byte_size == 4); // check byte size of int
    int num_ascii_data = strlen(p_ascii_data);

    uint8_t* p_uint8_t = (uint8_t*)p_void_data;
    uint16_t* p_uint16_t = (uint16_t*)p_void_data;
    uint32_t* p_uint32_t = (uint32_t*)p_void_data;

    int int_size = byte_size * 2;
    if (num_ascii_data % int_size != 0) {
        printf("error ascii_data_num %d\n", num_ascii_data);
        return false;
    }

    // ascii string to int
    char unit_string[8] = { 0 };
    uint32_t data;
    for (size_t i = 0; i < num_ascii_data / int_size; i++) {
        memset(unit_string, 0, sizeof(unit_string));
        strncpy(unit_string, p_ascii_data + i * int_size, int_size);
        if (sscanf(unit_string, "%x", (uint32_t*)&data) <= 0)
            return false;

        switch (int_size) {
        case 2:
            p_uint8_t[i] = data;
            break;
        case 4:
            p_uint16_t[i] = data;
            break;
        case 8:
            p_uint32_t[i] = data;
            break;
        default:
            break;
        }
    }
    return true;
}

bool IntToAscii(void* p_void_data, char* p_ascii_data, int byte_size, size_t size)
{
    E_assert(byte_size == 1 || byte_size == 2 || byte_size == 4); // check byte size of int

    uint8_t* p_uint8_t = (uint8_t*)p_void_data;
    uint16_t* p_uint16_t = (uint16_t*)p_void_data;
    uint32_t* p_uint32_t = (uint32_t*)p_void_data;

    for (size_t i = 0; i < size; i++) {
        switch (byte_size) {
        case 1:
            sprintf(p_ascii_data + i * 2, "%02X", p_uint8_t[i]);
            break;
        case 2:
            sprintf(p_ascii_data + i * 4, "%04X", p_uint16_t[i]);
            break;
        case 4:
            sprintf(p_ascii_data + i * 8, "%08X", p_uint32_t[i]);
            break;
        default:
            return false;
        }
    }
    return true;
}

/**
 * @brief whether it is Little end byte order?
 *
 * @return true
 * @return false
 */
bool IsLittleEndian()
{
    int x = 1;
    if (*(char*)&x == 1)
        return true;
    else
        return false;
}
