#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////结构体
//
////struct Stu//学生
////{
////	char name[20];
////	int age;
////	char sex[5];
////	char id[20];//学号
////
////
////};
////
//////结构体是用大括号初始化的
////int main()
////{
////	struct Stu s1={"张三",20,"男","200000" };//按顺序初始化
////	struct Stu s2={.age=10,.name="秋香" };//指定顺序初始化
////	printf("名字：%s\n", s1.name);
////	printf("年龄：%d", s1.age);
////	return 0;
////}
//
//
////结构体里也能包含其他结构体 即嵌套
//struct Book
//{
//	char name[20];
//	float price;
//
//};
//struct Stu//学生
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];//学号
//	struct Book b;
//
//
//};
//
////结构体是用大括号初始化的
//int main()
//{
//	struct Stu s1 = { "张三",20,"男","200000" ,{"C语言大全",20} };//按顺序初始化
//	struct Stu s2 = { 0 };//指定顺序初始化
//	printf("请输入名字：");
//	scanf("%s", s1.name);
//	printf("请输入年龄;");
//	scanf("%d",&(s1.age));
//	printf("名字：%s\n", s1.name);
//	printf("年龄：%d\n", s1.age);
//	printf("书：%s 价格：%.1f", s1.b.name,s1.b.price);
//
//	return 0;
//}

#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认真对比预期
int main()
{
	int left = 4;	
	int right = 0;
	int i = 0;
	int arr[5] = { 0 };
	//输入部分
	printf("请输入数字");
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&arr[i]);
	}
	//输出部分
		
	while(right<left)
	{
		int tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;
		right++;
		left--;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


int main() {
	// 定义一个3x3的矩阵
	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	// 假设第一个元素是最大值和最小值
	int max = matrix[0][0];
	int min = matrix[0][0];

	// 遍历矩阵
	for (int i = 0; i < 3; i++) { // 遍历每一行
		for (int j = 0; j < 3; j++) { // 遍历每一列
			if (matrix[i][j] > max) {
				max = matrix[i][j]; // 更新最大值
			}
			if (matrix[i][j] < min) {
				min = matrix[i][j]; // 更新最小值
			}
		}
	}

	// 输出结果
	printf("最大值是: %d\n", max);
	printf("最小值是: %d\n", min);

	return 0;
}