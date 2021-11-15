/**
 * @file utilsAsciiConvert.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief 
 * @version 1.02
 * @date 2021-10-22
 * 
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 * 
 */

#ifndef UTILSASCIICONVERT_H
#define UTILSASCIICONVERT_H

#include "../Include/summary.h"
bool AsciiToInt(const char *p_ascii_data, void *p_void_data, int int_size);
bool AsciiToIntPro(const char *p_ascii_data, void *p_void_data, int int_size);

bool SwapEndianPro(void *pdata, int num, int size);
uint32_t swap_endian(uint32_t x);

/**
 * @brief convert string to hex data
 * #p_ascii string pointer, no include ' '!
 * #p_data hex data pointer
 */
#define ASCII_TO_INT(p_ascii, p_data) \
    AsciiToIntPro(p_ascii, p_data, sizeof(p_data[0]))

#define SWAP_ENDIAN(pdata,num) \
    SwapEndianPro(pdata, num, sizeof(*pdata))

#endif