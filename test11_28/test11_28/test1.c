#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()//输入值求其阶乘累加和
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	scanf("%d", &m);
//	int sum = 1;
//	for (j = 1, j <= m, j++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//
//		}
//		
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()//输入值求其阶乘的累加和
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	int sum = 0;//初始化 不影响后续值的改变
//	for (j = 1;j <= n; j++)
//	{
//		ret = 1;//初始化循环
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	for (i = 0; i <= 12; i++)//越界访问
//	{
//		arr[i] = 0;
//	printf("hehe\n");
//	}
//
//
//	return 0;
//}

void test(int arr[3][5])
{


}


int main()
{
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,1,1,1,1,1};
	test(arr);
	return 0;
}