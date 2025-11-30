#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//extern g;//声明外部变量
////全局变量拥有外部链接属性 不想别人用的时侯 用s'tatic将外部链接属性替换成内部连接属性 使作用域变小
////extern static
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);
//	printf("%d", g);
//	return 0;

//}









//extern int add(int a, int b);//还有静态库的调用
////#pragrma comment(lib, "add,lib")
////include "add.h"
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d", sum);
//
//	return 0;
//}



//int main()
//{
//	/*size_t len = strlen("abcdef");*///不包括斜杠0
//	/*printf("%zu", len"));*///可以省略len这个中间值
//
///*	printf("%zu", strlen("abcdef"))*/;//链式访问 优化空间复杂度
//
//printf("%d", printf("%d", printf("%d", 12)));//由printf的返回值造成的 printf也有返回值的
////12 2 1 
//	return 0;
//} 

//函数的声明和定义 函数的调用需要在定义的后面 因为C语言是从上往下扫描的
//函数的定义 从前往后 但可以通过函数的声明使前后关系无影响

//int get_mouth_days(int y, int m);
//int judge_year_change(int y);
//
//int main()
//{
//	//设置年 月变量
//	int year = 0;
//	int mouth = 0;
//	scanf("%d %d", &year, &mouth);
//	int day = get_mouth_days(year,mouth);
//	printf("%d年 %d月 有%d天", year, mouth, day);
//
//	return 0;
//}
//
//int judge_year_change(int y)//注意形参和实参的对应关系
//{
//	//if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	//{
//	//	return 1;//是闰年
//	//}
//	//else
//		return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));//非闰年
//
//}
//
//int get_mouth_days(int y,int m)
//{
//	//设置数组表示月与日的关系
//	int arr[13] = { 0,31,28,31,30,31,30,31,30,31,30,31,30 };
//					/*0 1  2  3  4  5  6  7  8  9  10 11 12*/
//	int d = arr[m];//m是指接收的参数 在数组中的下标 即月期
//	//创建函数判断闰年 并返回值 使天数得到改变
//	if (judge_year_change(y) && m == 2)//m为二月和闰年共同构成条件
//	{
//		d++;
//	}
//	return d;
//
//}








//return语

//函数的参数 标明void表明无参数
//void test()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("HHEE");
//	if (a > 10)
//	{
//		return;
//	}
//	printf("ii");
//
//}

//int main()
//{
//	test();
//
//	return 0;
//}
//break 使循环结束 return使函数结束
//return;也算是一个语句
 //函数的返回值和返回类型尽量保持一致 否则会转换
//if分支语句需要都有返回值
//函数没有表明返回值的时候 默认int
//函数就算标明了返回值 但没有明确返回值 所返回值为随机 

//数组作参数
//void set_arr(int arr2[10], int sz2)//形式参数里的参数 名字应该一致 //形参注意啊
//{//一维数组 可以把大小省略掉即把10省略 因为不会创建新的空间
//	int i;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = 1;
//
//	}
//}
//void print_arr(int arr3[10], int sz3)
//{
//	int i;
//	for (i = 0; i < sz3; i++)
//	{
//		printf("%d", arr3[i]);
//
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz;
//	 sz = sizeof(arr) / sizeof(arr[1]);
//	//set all = -1
//	set_arr(arr,sz);//实参记得传
//	//after print all
//	print_arr(arr, sz);
//	return 0;
//}

//void print_arr(int arr1[3][5],int r,int t)
//{
//	int i, j;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < t; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print_arr(arr, 3, 5);
//	return 0;
//}
//形参和实参数组地址一样




//函数调用和链式访问
//由年和月来判断天数（嵌套调用）
//int judge_year_change(int y)//注意形参和实参的对应关系
//{
//	//if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	//{
//	//	return 1;//是闰年
//	//}
//	//else
//		return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));//非闰年
//
//}
//
//int get_mouth_days(int y,int m)
//{
//	//设置数组表示月与日的关系
//	int arr[13] = { 0,31,28,31,30,31,30,31,30,31,30,31,30 };
//					/*0 1  2  3  4  5  6  7  8  9  10 11 12*/
//	int d = arr[m];//m是指接收的参数 在数组中的下标 即月期
//	//创建函数判断闰年 并返回值 使天数得到改变
//	if (judge_year_change(y) && m == 2)//m为二月和闰年共同构成条件
//	{
//		d++;
//	}
//	return d;
//
//}
//
//int main()
//{
//	//设置年 月变量
//	int year = 0;
//	int mouth = 0;
//	scanf("%d %d", &year, &mouth);
//	int day = get_mouth_days(year,mouth);
//	printf("%d年 %d月 有%d天", year, mouth, day);
//
//	return 0;
//}

