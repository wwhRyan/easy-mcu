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
 * @brief eg：将字符串 "12344321" --Convert--> 12,34,43,21 Or 1234,4321 Or 12344321
 * 
 * @test
 * void main(){
    char *tmp="01ff010001010203";
    uint16_t data[100] = {0};
    AsciiToInt(tmp,data,sizeof(data[0]));
    
    for (size_t i = 0; i < sizeof(tmp); i++)
    {
        printf("%X ",data[i]);
    }
    printf("\n");
}
 * 
 * @param p_ascii_data 字符串指针,string no including ' '
 * @param p_void_data 数组指针,adapter to int_size
 * @param int_size 一个整型(Int)包含字符(char)个数，通常是2、4、8
 * @return bool 
 */
bool AsciiToInt(const char *p_ascii_data, void *p_void_data, int int_size)
{
    bool ret = true;
    int ascii_data_num = strlen(p_ascii_data);
    char *p_destin;
    char *p_mem;
    char *p_source = (char *)p_ascii_data;

    uint8_t *p_uint8_t = (uint8_t *)p_void_data;
    uint16_t *p_uint16_t = (uint16_t *)p_void_data;
    uint32_t *p_uint32_t = (uint32_t *)p_void_data;

    int_size = int_size * 2;
    if (int_size != 2 && int_size != 4 && int_size != 8)
    {
        printf("error int_size. %d\n", int_size);
        return false;
    }

    if (ascii_data_num % int_size != 0)
    {
        printf("error ascii_data_num %d\n", ascii_data_num);
        return false;
    }

    p_mem = malloc(2 * ascii_data_num);
    if (p_mem == NULL)
    {
        printf("error malloc memory\n");
        return false;
    }
    p_destin = p_mem;
    memset(p_destin, 0, 2 * ascii_data_num);

    for (size_t i = 0; i < ascii_data_num / int_size; i++)
    {
        memcpy(p_destin, p_source, int_size);
        p_destin += int_size;
        p_destin += 1;
        *p_destin = ' ';
        p_source += int_size;
    }

    p_destin = p_mem;

    switch (int_size)
    {
    case 2:
        for (size_t i = 0; i < ascii_data_num / int_size; i++)
        {
            int data;
            sscanf(p_destin, "%x", (int *)&data);
            p_uint8_t[i] = data;
            p_destin += int_size;
            p_destin += 1;
        }
        break;
    case 4:
        for (size_t i = 0; i < ascii_data_num / int_size; i++)
        {
            int data;
            sscanf(p_destin, "%x", (int *)&data);
            p_uint16_t[i] = data;
            p_destin += int_size;
            p_destin += 1;
        }
        break;
    case 8:
        for (size_t i = 0; i < ascii_data_num / int_size; i++)
        {
            int data;
            sscanf(p_destin, "%x", (int *)&data);
            p_uint32_t[i] = data;
            p_destin += int_size;
            p_destin += 1;
        }
        break;

    default:
        break;
    }

    free(p_mem);
    return ret;
}

/**
 * @brief eg：将字符串 "12344321" --Convert--> 12,34,43,21 Or 1234,4321 Or 12344321, 无内存消耗
 * 
 * @param p_ascii_data 字符串指针,string no including ' '
 * @param p_void_data 数组指针,adapter to int_size
 * @param int_size 一个整型(Int)包含字符(char)个数，通常是2、4、8
 * @return true 
 * @return false 
 */
bool AsciiToIntPro(const char *p_ascii_data, void *p_void_data, int int_size)
{
    int num_ascii_data = strlen(p_ascii_data);

    uint8_t *p_uint8_t = (uint8_t *)p_void_data;
    uint16_t *p_uint16_t = (uint16_t *)p_void_data;
    uint32_t *p_uint32_t = (uint32_t *)p_void_data;

    int_size = int_size * 2;
    if (int_size != 2 && int_size != 4 && int_size != 8)
    {
        printf("error int_size. %d\n", int_size);
        return false;
    }

    if (num_ascii_data % int_size != 0)
    {
        printf("error ascii_data_num %d\n", num_ascii_data);
        return false;
    }

    //ascii string to int
    char unit_string[8] = {0};
    for (size_t i = 0; i < num_ascii_data / int_size; i++)
    {
        memset(unit_string, 0, sizeof(unit_string));
        strncpy(unit_string, p_ascii_data + i * int_size, int_size);

        switch (int_size)
        {
        case 2:
            sscanf(unit_string, "%x", (int *)&p_uint8_t[i]);
            break;
        case 4:
            sscanf(unit_string, "%x", (int *)&p_uint16_t[i]);
            break;
        case 8:
            sscanf(unit_string, "%x", (int *)&p_uint32_t[i]);
            break;
        default:
            break;
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
    if (*(char *)&x == 1)
        return true;
    else
        return false;
}

/**
 * @brief swap bytes order, little endian to big endian, big endian to little endian.
 * 
 * @param x 
 * @return uint32_t 
 */
uint32_t swap_endian(uint32_t x)
{
    x = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0xFF00FF);
    return (x << 16) | (x >> 16);
}

void swap_endian_uint32_t(uint32_t *p_uint16, int num)
{
    uint32_t *pdata = p_uint16;
    for (size_t i = 0; i < num; i++)
    {
        *pdata = swap_endian(*pdata);
        pdata++;
    }
}

void swap_endian_uint16_t(uint16_t *p_uint16, int num)
{
    uint16_t *pdata = p_uint16;
    for (size_t i = 0; i < num; i++)
    {
        *pdata = ((*pdata << 8) & 0xFF00) | ((*pdata >> 8) & 0x00FF);
        pdata++;
    }
}

/**
 * @brief swap bytes order, little endian to big endian, big endian to little endian.
 * 
 * @param pdata array buffer or data pointer
 * @param num array num
 * @param size array member size, like sizeof(*array_pointer); data size, like sizeof(data);
 * @return true 
 * @return false 
 */
bool SwapEndianPro(void *pdata, int num, int size)
{
    if(size != sizeof(uint8_t) && size != sizeof(uint16_t) && size != sizeof(uint32_t))
    {
        printf("error size. %d\n", size);
        return false;
    }
    
    switch (size)
    {
    case sizeof(uint8_t):
        break;

    case sizeof(uint16_t):
        swap_endian_uint16_t((uint16_t *)pdata, num);
        break;

    case sizeof(uint32_t):
        swap_endian_uint32_t((uint32_t *)pdata, num);
        break;

    default:
        return false;
    }
    return true;
}
