#include "sort.h"

//直接插入排序 
Status InsertSort(int *array, int n)
{
	int i, j, tmp;//tmp 存放需要改变位置的元素
	for (i = 0; i < n - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];//需要改变的元素的位置是 i+ 1
			for (j = i + 1; j > 0 && array[j - 1] > tmp; j--)
			{
				array[j] = array[j - 1];

				//如果前一个比后一个大，前一个后移
				/*if (array[j] > tmp)
				{
					array[j] += array[j + 1];
					array[j + 1] = array[j] - array[j + 1];
					array[j] = array[j] - array[j + 1];
				}*/

				//如果前一个比后一个小 或者 j = 0，结束循环
				/*if (0 == j || array[j - 1] < array[j])
				{
					array[j] = tmp;
					break;
				}*/
			}
			array[j] = tmp;
		}
	}
	return true;
}