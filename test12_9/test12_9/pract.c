//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void len(int arr[],int sz)
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)//外层循环控制趟数
//	{
//		int j = 0;//内层循环控制每趟比较的次数 j必须初始化从0开始
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[10] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	len(arr, sz);
//	return 0;
//}
//
//
////优化
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void len(int arr[], int sz)
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)//外层循环控制趟数
//	{
//		int flag = 0;//设置标志位
//		int j = 0;//内层循环控制每趟比较的次数 j必须初始化从0开始
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//发生了交换，标志位置1
//			}
//		}
//		if(flag==0)//一趟下来没有发生交换，说明有序，提前结束排序
//			{
//				break;
//			}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[10] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	len(arr, sz);
//	return 0;
//}