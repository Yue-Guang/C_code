#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//整数储存在内存里二进制的1数统计

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (i < 32)
//	{
//		if ((a >> i) & 1 == 1)//a不会改变
//			count++;
//			i++;
//
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int n = 0;//n与n-1 &后可以去掉最右边的1
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//000000000000000001101
//	//000000000000000010000   这是1<<5-1
//	//000000000000000011101   这是按位或后
//	a |= (1 << 5 - 1);
//	printf("%d\n", a);
//	a&= ~(1 << 5 - 1);
//	printf("%d", a);
//	return 0;
//}


////逗号表达式
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 3;
//	if(a>0,b+2,b=c+a)//逗号表达式从左到右依次计算
//
//
//
//
//}
//结构体
  //描述一个学生的--学生类型


struct stu
{
	//描述学生的属性
	char name[20];
	short  

};


int main()
{


	return 0;
}





