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

void bubble_sort(int* array, int size)
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

/*
================================================
 功能：快速排序
 输入：数组名称（也就是数组首地址）、数组中起止元素的下标
================================================
*/
/*
====================================================
算法思想简单描述：
 快速排序是对冒泡排序的一种本质改进。它的基本思想是通过一趟
 扫描后，使得排序序列的长度能大幅度地减少。在冒泡排序中，一次
 扫描只能确保最大数值的数移到正确位置，而待排序序列的长度可能只
 减少1。快速排序通过一趟扫描，就能确保某个数（以它为基准点吧）
 的左边各数都比它小，右边各数都比它大。然后又用同样的方法处理
 它左右两边的数，直到基准点的左右只有一个元素为止。它是由
 C.A.R.Hoare于1962年提出的。

 显然快速排序可以用递归实现，当然也可以用栈化解递归实现。下面的
 函数是用递归实现的，有兴趣的朋友可以改成非递归的。
 快速排序是不稳定的。最理想情况算法时间复杂度O(nlog2n)，最坏O(n2)

=====================================================
*/
void quick_sort(int* x, int low, int high)
{
    int i, j, t;
    if (low < high) /*要排序的元素起止下标，保证小的放在左边，大的放在右边。这里以下标为low的元素为基准点*/
    {
        i = low;
        j = high;
        t = *(x + low); /*暂存基准点的数*/
        while (i < j) /*循环扫描*/
        {
            while (i<j&&*(x + j)> t) /*在右边的只要比基准点大仍放在右边*/
            {
                j--; /*前移一个位置*/
            }
            if (i < j) {
                *(x + i) = *(x + j); /*上面的循环退出：即出现比基准点小的数，替换基准点的数*/
                i++; /*后移一个位置，并以此为基准点*/
            }
            while (i < j && *(x + i) <= t) /*在左边的只要小于等于基准点仍放在左边*/
            {
                i++; /*后移一个位置*/
            }
            if (i < j) {
                *(x + j) = *(x + i); /*上面的循环退出：即出现比基准点大的数，放到右边*/
                j--; /*前移一个位置*/
            }
        }
        *(x + i) = t; /*一遍扫描完后，放到适当位置*/
        quick_sort(x, low, i - 1); /*对基准点左边的数再执行快速排序*/
        quick_sort(x, i + 1, high); /*对基准点右边的数再执行快速排序*/
    }
}

/**
 * @brief
 *
 * @param p_data uint8_t*, uint16_t*, uint32_t*
 * @param length array length
 * @param byte_size the size of array member, eg:1,2,4
 * @return true
 * @return false
 */
bool array_shift(void* p_data, int length, uint8_t byte_size)
{
    E_assert(byte_size == 1 || byte_size == 2 || byte_size == 4); // check byte size of int

    uint8_t* p_uint8_t = (uint8_t*)p_data;
    uint16_t* p_uint16_t = (uint16_t*)p_data;
    uint32_t* p_uint32_t = (uint32_t*)p_data;

    switch (byte_size) {
    case 1:
        memcpy(p_uint8_t, &p_uint8_t[1], (length - 1) * byte_size);
        p_uint8_t[length - 1] = 0;
        break;
    case 2:
        memcpy(p_uint16_t, &p_uint16_t[1], (length - 1) * byte_size);
        p_uint16_t[length - 1] = 0;
        break;
    case 4:
        memcpy(p_uint32_t, &p_uint32_t[1], (length - 1) * byte_size);
        p_uint32_t[length - 1] = 0;
        break;
    default:
        E_assert(0);
        return false;
    }
    return true;
}
