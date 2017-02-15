#include "sort.h"

void swap(int *array, int a, int b)
{
	array[a] += array[b];
	array[b] = array[a] - array[b];
	array[a] = array[a] - array[b];
}


//p为需要调整的双亲坐标，n 未排序的个数
Status HeapAdjust(int *array, int p, int n)
{
	int i;
	for (i = 2 * p; i <= n; i*=2)
	{
		if (i < n && array[i] < array [i+1])
		{
			i++;
		}
		if (array[p] > array[i])
		{
			break;
		}
		swap(array, p, i);
		p = i;
	}
	return true;
}

Status HeapSort(int *array, int n)
{
	int i;
	for (i = n / 2; i > 0; i--)
	{
		HeapAdjust(array, i, n);
	}

	for (i = n; i > 1; i--)
	{
		swap(array, i, 1);
		HeapAdjust(array, 1, i-1);
	}
	return true;
}