#define _CRT_SECURE_NO_WARNINGS

//数组练习 一.浮现字符
#include<stdio.h>
//#include<string.h>
// #include<windows.h>
//int main()
//{
//	char arr1[] = "I Love you Forever!";
//	char arr2[] = "*******************";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//会把/0计算进去 所以是减二
//	int right = strlen(arr1) - 1;
//	while (left <= right)//循环条件
//	{
//		arr2[left] = arr1[left];//字符的替换				
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);//此处arr2是字符数组可以全部打印粗来
//		Sleep(1000);//1000ms
//		system("cls");//用printf("\r");也可以
//		left++;
//		right--;//循环中的变化
//		
//
//	}
//	printf("%s\n", arr2);//此处arr2是字符数组可以全部打印粗来
//
//
//
//
//	return 0;
//}


//：给定?个升序的整型数组，在这个数组中查找到指定的值n，找到了就打印n的下标，找不到就
//打印："找不到"。
//int main()
//{
//	int arr1[] = { 1,4,7,4,5,6,11,6,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr1[i] == n)
//		{
//			printf("找到了；%d", i);
//			break;//break 不是跳出 if 语句，而是跳出包含该 if 语句的最内层循环。break 只能用于 循环语句（for、while、do-while）和 switch 语句
//
//			//break 不能用于 if 语句
//		}
//
//
//	}
//	if (i == sz)//全部没有找到就是找不到 跳出循环条件就是当i=sz
//	{
//		printf("找不到");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	printf("%d",5/2);
//
//	return 0;
//}

//二分法查找有序数字中的特殊值
//一次尝试
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int left = 0;
//	int key = 0;
//	scanf("%d", &key);
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = (left + right) / 2;//mid变量应该放在循环内 
//	while (left <= right)
//	{
//		if (mid < key)
//		{
//			left = mid++;
//		}
//		else if (mid > key)
//		{
//			right = mid--;
//		}
//		else if (mid = key)
//		{
//			printf("zhaodaole");
//		}
//			
//
//	}
//
//	return 0;
//}

// int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int left = 0;
//	int key = 9;
//	scanf("%d", &key);
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int mid = 0;
//	//mid变量应该放在循环内 
//	int a = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//这里有问题 循环结束后这个变量就被销毁了 下标也就无法打印出来
//		if (arr[mid] < key)
//		{
//			left = mid++;
//		}
//		else if (arr[mid] > key)
//		{
//			right = mid--;
//		}
//		else
//		{
//			a = 1;
//			break;
//		}
//			
//
//	}
//	if (a == 1)
//	{
//		printf("找到了 其下标为%d",mid);
//	}
//	else
//	{
//		printf("没有啊");
//	}
//
//
//	return 0;
//}
 /*1 2 3 4 5 6 7 8 9
 0 1 2 3 4 5 6 7 8*/
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	int left = 0;
	int key = 9;
	scanf("%d", &key);
	int right = sizeof(arr) / sizeof(arr[0]);
	int mid = 0;
	//mid变量应该放在循环内 
	int a = 0;
	while (left <= right)//能够进行查找的情况
	{
		 mid = (left + right) / 2;//这里有问题 循环结束后这个变量就被销毁了 下标也就无法打印出来
		if (arr[mid] < key)
		{
			left = mid++;
		}
		else if (arr[mid] > key)
		{
			right = mid--;
		}
		else
		{
			a = 1;
			break;
		}


	}
	if (a == 1)
	{
		printf("找到了 其下标为%d", mid);
	}
	else
	{
		printf("没有啊");
	}


	return 0;
}