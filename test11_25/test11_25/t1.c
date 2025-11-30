#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//可以用if判断多次
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		
//	}
//printf("%d", count);
//
//
//	return 0;
//}


//给定两个数，求这两个数的最大公约数
//
//例如：
//
//输入：20 40
//
//输出：20
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int c = a % b;
//	while (c != 0)//辗转相除法
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d", b);
//	return 0;
//}


//求10 个整数中最大值

//int main()
//{
//	
//	int i;
//	int arr[10] = { 0 };       
//	
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	//统计大小
//int max = arr[0];
//	for (i=1;i<10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

int main()
{

	int i;
	int arr[10] = {3,3,3,4,5,6,3,6,5,333 };

	
	//统计大小
	int max = arr[0];
	for (i = 1; i < 10; i++)//遍历比较最大值*********
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}