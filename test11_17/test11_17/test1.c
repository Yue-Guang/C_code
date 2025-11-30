#define _CRT_SECURE_NO_WARNINGS

//九九乘法表
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)//for循环内部的for循环也仅仅被视作一个语句
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}
//素数的判断  一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数
//即有一个方法 令n去%从2开始到n的所有数字如果结果有0 即n不是素数 那就下一个数字进行判断 1 2 3 5 7 11 13 17   1 2 3 4 5 6 7 8 9 10 11 12 13

int main()
{
	int i = 0;
	int j = 0;
	for (j = 1; j <= 100; j++)
	{
		int a = 1;
		for (i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				a = 0;
				break;
			}
			
		}
		if (a == 1)
			printf("%d ", j);
	}

	return 0;
}
