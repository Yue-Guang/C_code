#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异
//int main()
//{
//	//即遍历矩阵 比较最大值
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	//输入部分
//	for (i = 0; i < 3; i++)//行
//	{
//		for (j = 0; j < 4; j++)//列
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//		}
//
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//写一个函数，使输入的一个字符串按反序存放，在主函数中输入和输出
//输出字符串
//void change(char arr[], int n)
//{
//    int right = 0;
//    int left = 6;
//   
//    while (right < left)
//    {
//		int a = arr[right];
//        arr[right] = arr[left];
//		arr[left] = a;
//        right++;
//        left--;
//    }
//}
//int main()
//{
//    char arr[8] = { '0' };
//    //输入
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%s", &arr[i]);
//    }
//    //反序交换
//
//    char arr1 = change(arr, 7);
//    printf("%s", arr);
//
//   
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
//// 原地反转字符串
//void change(char arr[])
//{
//    int left = 0;
//    int right = (int)strlen(arr) - 1;
//    while (left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100];           // 缓冲区，最多读入99个字符（不含空格）
//    if (scanf("%99s", arr) == 1)
//    {
//        change(arr);
//        printf("%s", arr);   // 输出反转后的字符串
//    }
//    return 0;
//}
//
////方法 A — 数值反转（推荐，避免字符串开销）

#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期输出和实际输出之间的差异

int judge(int n)
{
	int orign = n;
	int temp = n;
	int rev = 0;
	int digt = 0;
	while (temp!= 0)
	{
		digt= temp % 10;
		rev =rev10 + digt;
		temp /= 10;
	}
	if (rev == orign)
		return 1;
	else
		return 0;
}

int main()
{
	int n = 1;
	for (n = 1; n <= 300; n++)
	{
		if (judge(n) == 1&&judge(n * n)==1)
		{
			printf("%d", n);
		}

	}


	//注意：main函数必须return 0,否则无法通过评测， 因此不要修改下面的代码
	return 0;
}