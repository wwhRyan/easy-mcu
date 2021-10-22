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
 * @brief test case
 * 
 * 
 */

void main()
{
    char *tmp = "01ff010001010203";
    uint16_t data[100] = {0};
    AsciiToInt(tmp, data, sizeof(data[0]));

    for (size_t i = 0; i < sizeof(tmp); i++)
    {
        printf("%X ", data[i]);
    }
    printf("\n");
}