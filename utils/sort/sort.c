/**
 * @file sort.c
 * @author Wu Wenhao (whwu@appotronics.com)
 * @brief
 * @version 1.02
 * @date 2021-10-29
 *
 * @copyright Copyright@appotronics 2021. All Rights Reserved
 *
 */

#include "sort.h"

void bubblesort(int* array, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void quicksort(int* array, int size)
{
    int i, j, pivot, temp;
    i = 0;
    j = size - 1;
    pivot = array[size / 2];
    while (i < j) {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (i < size - 1)
        quicksort(array, i);
    if (j > 0)
        quicksort(array + j, size - j);
}

void insertionsort(int* array, int size)
{
    int i, j, temp;
    for (i = 1; i < size; i++) {
        temp = array[i];
        for (j = i - 1; j >= 0 && array[j] > temp; j--)
            array[j + 1] = array[j];
        array[j + 1] = temp;
    }
}

void selectionsort(int* array, int size)
{
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i + 1; j < size; j++)
            if (array[j] < array[min])
                min = j;
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}
