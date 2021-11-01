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

#include "../Include/summary.h"

void bubblesort(int *array, int size);
void quicksort(int *array, int size);
void insertsort(int *array, int size);
void selectionsort(int *array, int size);

#endif
