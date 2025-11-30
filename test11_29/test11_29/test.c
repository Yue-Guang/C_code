#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归 大事化小的思想
//递推与回归
//int main()
//{
//	printf("hehe\n");
//	main();//栈溢出 每一次调用函数都会向栈区申请一块内存空间
////无休止的函数调用 导致栈溢出
//	return 0;
//}
//递归有限制条件 当满足此条件时便不再递归
//每次递归后都越来越接近条件               两个都是必要条件 

//计算阶乘

//int fac(int n)
//{
//	if (n == 0)//条件1 不递归的条件
//		return 1;
//	else
//		return n * fac(n - 1);//条件2 无限接近
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fac(n);
//	printf("阶乘为：%d", r);
//
//	return 0;
//}

//顺序打印数字

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);//去掉末尾
//	}
//	printf("%d ",n % 10);//打印末尾
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//
//	return 0;
//}

//迭代
//计算第N个斐波那契数
//int Fact(int n)//迭代
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int r = Fact(n);
//	printf("%d", r);
//	return 0;
//}