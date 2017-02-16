#include "sort.h"

//�ݹ�ʵ��
Status MergeSort(int *array, int n)
{
	if (n > 1)
	{
		int pre_listNum = n / 2;
		int *pre_list = array;

		int back_listNum = n - pre_listNum;
		int *back_list = array + pre_listNum;

		int i, j, m;
		int tmp[ARR_SIZE];

		MergeSort(pre_list, pre_listNum);
		MergeSort(back_list, back_listNum);

		//�鲢����
		i = j = m = 0;
		while (i < pre_listNum && j < back_listNum)
		{
			if (pre_list[i] > back_list[j])
			{
				tmp[m++] = back_list[j++];
			}
			else
			{
				tmp[m++] = pre_list[i++];
			}
		}
		while (i < pre_listNum)
		{
			tmp[m++] = pre_list[i++];
		}
		while (j < back_listNum)
		{
			tmp[m++] = back_list[j++];
		}

		//����ʱ���鸴�����ݵ�pre_list����
		for (i = 0; i < n; i++)
		{
			array[i] = tmp[i];
		}
		return true;
	}

	return true;
}