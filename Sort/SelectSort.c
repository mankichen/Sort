#include "sort.h"
//选择排序
Status SelectSort(int *array, int n)
{
	int i, j, tmp;//tmp指向本次循环的最小值
	for (i = 0; i < n - 1; i++)
	{
		tmp = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
			}
		}

		if (i != tmp)
		{
			//交换值
			array[i] = array[i] + array[tmp];
			array[tmp] = array[i] - array[tmp];
			array[i] = array[i] - array[tmp];
		}
	}
	return true;
}