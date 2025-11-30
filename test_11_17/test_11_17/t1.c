#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//ype arr_name[常量值]
//int main()
//{
//	int math[20] = { 3,3,3,3,3,3,3,3,3,3 };//代表有五个数
//	char str[50];//字符类型
//	double score[30];//score这个数组名的类型是double [30] 这便是它的类型 数组是自定义类型
//	int n = 0;//初始化
//	int arr[] = { 1,2,3,4,5,6,7 };//数组元素个数是根据初始化的内容决定的
//	return 0;
//}
//int n = 0;//但全局变量不初始化时 为0
//int main()
//{
//	int n;//局部变量不进行初始化时 其为随机值
//	printf("%d", n);
//
//
//	return 0;
//}
//int main()/*数组是自定义类型*/
//{
//	int a[20] = { 4 };
//	int b = 20;
//	printf("%zu ", sizeof(b));
//	printf("%zu ", sizeof(a));
//	printf("%zu ", sizeof(int [20]));
//	printf("%zu ", sizeof(int [10]));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//              0 1 2 3 4 5 6 7 8 9
	//打印数组 遍历数组——》用循环遍历
	/*int i = 1;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}*/
	//数组的输入 也是用for循环一个一个输入
	//int i = 1;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);//注意arr[i]是数组里的一个元素不是数组名 数组名才不用取地址

	//}
	//for (i = 0; i <10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//一维数组在内存中的存储 打印数组各个元素的地址
	//int i = 1;
	//for (i = 1; i <= 9; i++)
	//{
	//	printf("%p\n", &arr[i]);//观察地址可以发现 数组的创建是连续开辟内存空间的
	//	//%p -- 用来打印地址 
	//}


	//printf("%d\n", arr[3]);
	//printf("%d\n", arr[4]);
	//printf("%d\n", arr[5]);
	//printf("%d\n", arr[7]);
	//arr[3] = 66;//3+4 中+是操作数 同理数组中[]是操作数 arr 3是操作数
	//printf("%d", arr[3]);
	/*return 0;
}*/

int main()
{
	///*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };*/
					//0 1 2 3 4 5 6 7 8 9
	/*for (i = 1; i <= 9; i++)*/
		//printf("%d\n", sizeof(arr));
		//printf("%d\n", sizeof(arr[0]));
		////printf("%d ", sizeof(int [10]));//一个整形类型为4个字节
		//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//sizeof的意义就是可以创建一个变量（变量指的是数组元素的个数） 此变量可以实时根据数组的变化而变化
	/*int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 1;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);

	}*/
	//给十个整数求他们的和
	int arr[10] = { 0 };
	int i = 1;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr[i]);

	}
	int sum = 1;
	for (i = 0; i < sz; i++)
	{
		sum += arr[i];

	}
	printf("%d ", sum);
	return 0;
}