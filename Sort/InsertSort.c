#include "sort.h"

//ֱ�Ӳ������� 
Status InsertSort(int *array, int n)
{
	int i, j, tmp;//tmp �����Ҫ�ı�λ�õ�Ԫ��
	for (i = 0; i < n - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];//��Ҫ�ı��Ԫ�ص�λ���� i+ 1
			for (j = i + 1; j > 0 && array[j - 1] > tmp; j--)
			{
				array[j] = array[j - 1];

				//���ǰһ���Ⱥ�һ����ǰһ������
				/*if (array[j] > tmp)
				{
					array[j] += array[j + 1];
					array[j + 1] = array[j] - array[j + 1];
					array[j] = array[j] - array[j + 1];
				}*/

				//���ǰһ���Ⱥ�һ��С ���� j = 0������ѭ��
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