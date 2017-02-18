#define 	true	1
#define		false	0

#define ARR_SIZE	11
typedef int Status;

//Array:为需要排序的目标数组
//num 数组里面实际存储的元素个数

//交换两个数据
void swap(int *array, int a, int b);

//冒泡排序
Status BubbleSort(int *array, int num);

//选择排序
Status SelectSort(int *array, int n);

//直接插入排序
Status InsertSort(int *array, int n);

//希尔排序
Status ShellSort(int *array, int n);

//堆排序
Status HeapSort(int *array, int n);

//归并排序
Status MergeSort(int *array, int n);

//快速排序
Status QuickSort(int *array, int n);