#include "sort.h"

//Ï£¶ûÅÅĞò
Status ShellSort(int *array, int n)
{
	int i, j, tmp;
	int Step = n;
	do 
	{
		Step = Step / 2;
		for (i = Step; i < n; i++)
		{
			if (array[i-Step] > array[i])
			{
				tmp = array[i];
				for ( j = i - Step; j >= 0 && tmp < array[j]; j-=Step)
				{
					array[j+Step] = array[j];
				}
				array[j + Step] = tmp;
			}

		}
	} while (Step >= 1);
	return true;
}