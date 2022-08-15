/**
 * @file sort.h
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2021-10-29
 *
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 *
 */

#ifndef SORT_H
#define SORT_H

#include "Common.h"

void bubble_sort(int* array, int size);
void quick_sort(int* x, int low, int high);

bool array_shift(void* p_data, int length, uint8_t byte_size);

#endif
