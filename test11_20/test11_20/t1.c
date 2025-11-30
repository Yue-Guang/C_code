#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
//int main()
//{
//	double r = sqrt((double)16);
//	printf("%f", r);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	/*int sum = a + b;*/
	int sum/*接收函数值*/ = add(a, b);//传参数（实际参数）  //调用函数之后才有形参 实参开辟的内存空间 后形参才开辟空间
		printf("sum = %d",sum);

	return 0;
}
int add(int x, int y)//接收参数（形式参数）
{
	int z = x + y;
	
	return z;//返回z值回函数 并且z的数据类型需要与函数相同
}
//函数有很好的复用性 简化了多次的计算