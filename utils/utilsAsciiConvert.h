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

#include "Common.h"
bool AsciiToInt(const char* p_ascii_data, void* p_void_data, int byte_size);
bool IntToAscii(void* p_void_data, char* p_ascii_data, int byte_size, size_t size);

/**
 * @brief convert string to hex data
 * #p_ascii string pointer, no include ' '!
 * #p_data hex data pointer
 */
#define ASCII_TO_INT(p_ascii, p_data) \
    AsciiToInt(p_ascii, p_data, sizeof(p_data[0]))

bool IsLittleEndian(void);
bool memory_endian_conversion(void* pointer, size_t size);

#endif
