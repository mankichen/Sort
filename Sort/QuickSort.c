#include "sort.h"

#define INSERT_MAX_SIZE		7

//��������
void QInsertSort(int *array, int low, int high)
{
	InsertSort(array + low, high - low + 1);
}

//��û�׼���������е�����
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
	int point;//ָ���׼��
	if (high - low > INSERT_MAX_SIZE)
	{
		point = LocateKey(array, low, high);
		QSort(array, low, point - 1);
		QSort(array, point + 1, high);
	}
	else
	{
		QInsertSort(array, low, high);//�Ż����� ����ĸ���С��7�� ��ѡ���������
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