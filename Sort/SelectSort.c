#include "sort.h"
//ѡ������
Status SelectSort(int *array, int n)
{
	int i, j, tmp;//tmpָ�򱾴�ѭ������Сֵ
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
			//����ֵ
			array[i] = array[i] + array[tmp];
			array[tmp] = array[i] - array[tmp];
			array[i] = array[i] - array[tmp];
		}
	}
	return true;
}