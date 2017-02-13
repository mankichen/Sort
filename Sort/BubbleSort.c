#include <stdio.h>
#include"sort.h"

//冒泡排序
Status BubbleSort(int *aimArray, int num)
{
	int i, j, flag;
	flag = 1;
	for(i = 0; i < num-1 && flag; i++)
	{
		flag = 0;
		for(j=num-1; j > i; j--)
		{
			//flag = 0;
			if(aimArray[j-1] > aimArray[j])
			{
				flag = 1;
				aimArray[j-1] = aimArray[j-1] + aimArray[j];
				aimArray[j] = aimArray[j-1] - aimArray[j];
				aimArray[j-1] = aimArray[j-1] - aimArray[j];
			}
		}
	}
	return true;
}

