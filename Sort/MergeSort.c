#include "sort.h"

//递归实现
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

		//归并过程
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

		//从临时数组复制数据到pre_list数组
		for (i = 0; i < n; i++)
		{
			array[i] = tmp[i];
		}
		return true;
	}

	return true;
}