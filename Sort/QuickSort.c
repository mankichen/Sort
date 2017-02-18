#include "sort.h"

#define INSERT_MAX_SIZE		7

//插入排序
void QInsertSort(int *array, int low, int high)
{
	InsertSort(array + low, high - low + 1);
}

//获得基准点在数组中的坐标
int LocateKey(int *array, int low, int high)
{
	int key = low;
	while (low < high)
	{
		while (array[high] > array[key])
		{
			high--;
		}
		while (array[low] <= array[key])
		{
			low++;
		}
		if (low < high)
		{
			swap(array, low, high);
		}
	}
	if (key != high)
	{
		swap(array, key, high);
	}
	
	return high;

}

void QSort(int *array, int low, int high)
{
	int point;//指向基准点
	if (high - low > INSERT_MAX_SIZE)
	{
		point = LocateKey(array, low, high);
		QSort(array, low, point - 1);
		QSort(array, point + 1, high);
	}
	else
	{
		QInsertSort(array, low, high);//优化：若 排序的个数小于7个 则选择插入排序
	}
}

Status QuickSort(int *array, int n)
{
	if (!array)
	{
		return false;
	}

	QSort(array, 0, n - 1);
	return true;
}