#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NDEBUG
#include <assert.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//取出a的地址并存储到指针变量pa中
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	printf("a=%d\n", a);
//	int* pa = &a;
//	*pa = 0;
//	printf("a=%d\n", a);
//	return 0;
//}
//指针变量的大小
//在32位系统中，指针变量的大小是4个字节
//在64位系统中，指针变量的大小是8个字节
//不同类型的指针变量，其大小是相同的
//指针变量的大小与所指向的数据类型无关
//指针变量的大小与操作系统的位数有关
//sizeof运算符可以用来获取指针变量的大小
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}
//指针变量的⼤⼩和类型⽆关，只要是指针变量，在同⼀个平台下，⼤⼩都是⼀样的，为什么还要有各
//种各样的指针类型呢？
//答：指针类型的区分，主要是为了在指针运算和解引用时，能够正确地处理数据。
//例如：int*类型的指针变量在解引用时，会按照int类型的数据大小来读取数据，而char*类型的指针变量在解引用时，则会按照char类型的数据大小来读取数据。
 
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}
//指针运算
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr; //指针变量p指向数组arr的第一个元素
//	printf("%d\n", *p); //输出0
//	p++; //指针变量p向后移动一个int类型的数据大小即4个字节
//	printf("%d\n", *p); //输出1
//	p += 3; //指针变量p向后移动3个int类型的数据大小即12个字节
//	printf("%d\n", *p); //输出4
//	p--; //指针变量p向前移动一个int类型的数据大小即4个字节
//	printf("%d\n", *p); //输出3
//	p -= 2; //指针变量p向前移动2个int类型的数据大小即8个字节
//	printf("%d\n", *p); //输出1
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}
//void* 指针变量
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	void* pa = &a;
//	void* pc = &a;
//	*pa = 10;
//	*pc = 0;
//	return 0;
//}
//void* 指针变量是一种特殊的指针变量，它可以指向任何类型的数据，但是不能直接解引用。
//要想通过void* 指针变量访问数据，必须先将其转换为具体类型的指针变量，然后再进行解引用操作。
//例如：将void* 指针变量转换为int* 类型的指针变量，然后再进行解引用操作。
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	void* pv = &a;
//	*(int*)pv = 20;
//	printf("a=%d\n", a);
//	return 0;
//}
//指针运算
//指针的基本运算有三种，分别是：
//•
//指针 + -整数
//•
//指针 - 指针
//•
//指针的关系运算
#include <stdio.h>
//
//指针+ -整数

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];//指针变量p指向数组arr的第一个元素
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组arr的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));//p+i 这⾥就是指针+整数
//		//p+i 表示指针变量p向后移动i个int类型的数据大小
//		//*(p+i) 表示访问指针变量p向后移动i个int类型的数据大小所指向的元素
//		//等价于 arr[i]
//		//注意：指针+整数时，整数会根据指针所指向的数据类型进行缩放
//		//例如：int*类型的指针变量p，p+1表示向后移动4个字节（假设int类型占4个字节）
//		//char*类型的指针变量pc，pc+1表示向后移动1个字节（假设char类型占1个字节）
//		//所以在进行指针运算时，一定要注意指针所指向的数据类型
//	}
//	return 0;
//}
////指针-指针
//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;//定义一个指针变量p，指向字符串s的第一个字符
//	while (*p != '\0')//遍历字符串，直到遇到字符串结束符'\0'
//		p++;//指针变量p向后移动一个char类型的数据大小
//	return p - s;//指针-指针，计算字符串的长度
//	//指针-指针的结果是两个指针之间相差的元素个数
//	//注意：两个指针相减时，必须保证它们指向同一个数组或字符串，否则结果是未定义的
//	//例如：char arr[10]; char* p1 = &arr[2]; char* p2 = &arr[5]; int n = p2 - p1; //n的值是3
//	//但如果p1和p2指向不同的数组或字符串，则结果是未定义的
//	//例如：char arr1[10]; char arr2[10]; char* p1 = &arr1[2]; char* p2 = &arr2[5]; int n = p2 - p1; //结果未定义
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}


//指针的关系运算
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz) ////指针的⼤⼩⽐较
//		//arr+sz 指向数组arr的最后⼀个元素的下⼀个位置
//		//p<arr+sz 判断指针变量p是否到达数组arr的末尾
//		//当p指向的地址小于arr+sz时，说明p还没有到达数组的末尾，可以继续访问数组元素
//		//当p指向的地址等于arr+sz时，说明p已经到达数组的末尾，不能再访问数组元素，否则会越界
//		//指针的关系运算只能在同一个数组或字符串内进行，否则结果是未定义的
//	{
//		printf("%d ", *p);//访问指针变量p所指向的元素
//	 p++;//指针变量p向后移动一个int类型的数据大小
//	}
//	return 0;
//}

//const修饰变量
//变量是可以修改的，如果把变量的地址交给⼀个指针变量，通过指针变量的也可以修改这个变量。
//但是如果我们希望⼀个变量加上⼀些限制，不能被修改，怎么做呢？这就是const的作⽤
//const可以修饰变量，表示该变量是只读的，不能被修改。
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	m = 20;//m是可以修改的
//	const int n = 0;//const修饰n，表示n是只读的，不能被修改
//	n = 20;//n是不能被修改的
//	printf("n=%d\n", n);
//	return 0;
//}
//但是如果我们绕过n，使⽤n的地址，去修改n就能做到了，虽然这样做是在打破语法规则。
//#include <stdio.h>
//int main()
//{
//	const int n = 0;//const修饰n，表示n是只读的，不能被修改
//	printf("n = %d\n", n);
//	int* p = &n;//取出n的地址赋值给指针变量p
//	*p = 20;//通过指针变量p修改n的值
//	printf("n = %d\n", n);
//	return 0;
//}
//如果p拿到n的地址就能修改n，这样就打破了const的限制，这是不合理的，所以应该让p拿到n的地址也不能修改n，那接下来怎么做呢？
//const 修饰指针变量
//⼀般来讲const修饰指针变量，可以放在* 的左边，也可以放在* 的右边，意义是不⼀样的
//1.const放在*的左边，表示指针所指向的数据是只读的，不能通过指针修改数据
#include <stdio.h>
//void test0()
//{
//	int b = 10;
//	int n = 10;
//	const int* p = &n; //const放在*的左边，表示指针所指向的数据是只读的 
//						//int const* p = &n; //等价写法
//	//*p = 20; //错误，不能通过指针修改数据
//	p = &b;//可以修改指针的指向
//	n = 20; //可以直接修改n
//	printf("n=%d\n", n);
//}
////2.const放在*的右边，表示指针变量本身是只读的，不能修改指针的指向
//void test1()
//{
//	int a = 10;
//	int b = 20;
//	int* const p = &a; //const放在*的右边，表示指针变量本身是只读的
//	*p = 30; //可以通过指针修改数据
//	//p = &b; //错误，不能修改指针的指向
//	a = 40; //可以直接修改a
//	printf("a=%d\n", a);
//}
//int main()
//{
//	test0();
//	test1();
//	return 0;
//}
////3.const同时放在*的左边和右边，表示指针变量本身是只读的，指针所指向的数据也是只读的
//void test2()
//{
//	int n = 10;
//	const int* const p = &n; //const同时放在*的左边和右边
//	//*p = 20; //错误，不能通过指针修改数据
//	//p = NULL; //错误，不能修改指针的指向
//	n = 30; //可以直接修改n
//	printf("n=%d\n", n);
//}
//总结：
//1.const放在*的左边，"表示指针所指向的数据是只读的，'不能通过指针修改数据'"
// 2.const放在*的右边，"表示指针变量本身是只读的，不能修改指针的'指向'"
// 3.const同时放在*的左边和右边，表示指针变量本身是只读的，指针所指向的数据也是只读的
//共同点：
// 
// 指向的变量都可以直接修改
// 
//不同点：
//const放在*的左边，可以直接修改变量的值
//const放在*的右边，不能修改指针的指向

//野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的
//1. 指针未初始化
//#include <stdio.h>
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//		* p = 20;
//		printf("%d\n", *p);
//	return 0;
//}
//2. 指针越界访问
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)//越界访问
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;//越界访问
//	}
//	return 0;
//}
//3. 指针指向的空间释放
//#include <stdio.h>
//int* test()//函数返回局部变量的地址
//{
//	int n = 100;
//	return &n;//返回局部变量n的地址，n在函数结束后被释放
//	//返回局部变量的地址是错误的，返回后该地址变成了野指针
//	//因为局部变量在函数结束后会被释放，指针指向的地址不再有效
//	//所以返回局部变量的地址是错误的
//	//正确的做法是，使用动态内存分配或者静态变量
//	//例如：使用动态内存分配
//	//int* p = (int*)malloc(sizeof(int));
//	//*p = 100;
//	//return p;
//	//或者使用静态变量
//	//static int n = 100;
//	//return &n;
//}
//int main()
//{
//	int* p = test(); /*n的地址，n在函数结束后被释放*/
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i; //
//	}
//	//此时p已经越界了，可以把p置为NULL
//	
//		p = NULL;
//	//下次使⽤的时候，判断p不为NULL的时候再使⽤
//
//		//...
//		p = &arr[0];//重新让p获得地址
//
//		if (p != NULL) //判断
//
//		{
//			//...
//		}
//	return 0;
//}
//
////strlen的模拟实现
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);//断言，保证str不为NULL
//	while (*str)//遍历字符串，直到遇到字符串结束符'\0'
//		//\0的ASCII码值为0，在C语言中表示false
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//传值调⽤和传址调⽤
//写⼀个函数，交换两个整型变量的值
//传值调⽤
//#include <stdio.h>
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	Swap1(a, b);
//	printf("交换前：a = % d b = % d\n", a, b);
//	printf("交换后：a = % d b = % d\n", a, b);
//	return 0;
//}
//上面的代码不能实现交换两个整型变量的值，因为Swap1函数是传值调⽤，
//函数内部的修改不会影响到实参的值
//传址调⽤
//#include <stdio.h>
//void Swap2(int* px, int* py)//接收的是两个整型指针变量
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//printf("交换前：a = % d b = % d\n", a, b);
//	Swap2(&a, &b);
//	
//	printf("交换后：a = % d b = % d\n", a, b);
//	return 0;
//}

//数组名的理解
//sizeof(数组名)，sizeof中单独放数组名，这⾥的数组名表⽰整个数组，计算的是整个数组的⼤⼩，单位是字节
//& 数组名，这⾥的数组名表⽰整个数组，取出的是整个数组的地址（整个数组的地址和数组⾸元素的地址是有区别的）
// 数组名就是数组⾸元素(第⼀个元素)的地址。
//除此之外，任何地⽅使⽤数组名，数组名都表⽰⾸元素的地址。
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr        = % p\n", arr);
//	printf("&arr    = % p\n", &arr);
//return 0;
//}
//三个打印结果⼀模⼀样，这时候⼜纳闷了，那arr和& arr有啥区别呢？
//区别在于它们的类型不一样
//arr的类型是int*
//&arr的类型是int(*)[10]
//所以arr + 1和& arr + 1的结果是不一样的
//arr + 1表示指针变量arr向后移动一个int类型的数据大小
//&arr + 1表示指针变量&arr向后移动一个数组大小

//使⽤指针访问数组
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//输⼊
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //输⼊
//	int* p = arr;//指针变量p指向数组arr的第⼀个元素
//	for (i = 0; i < sz; i++)//sz是数组元素个数 
//    {
//		scanf("%d", p + i);//通过指针访问数组元素 //p没有改变，仍然指向arr[0]
//        //scanf("%d", arr+i);//也可以这样写
//      
//
//    }
//    //输出
//        for (i = 0; i < sz; i++)
//        {
//            printf("%d ", *(p + i));
//        }
//    return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//    int* pa = arr;
//    //输入
//	int i = 0;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",pa+i );
//	}
//   //输出
//    for (i=0;i<10;i++)
//    {
//        printf("%d", *(pa + i));
//
//    }
//	return 0;
//}
//p等价于&arr[0] 等价于数组第一个元素的地址 等价于arr数组名

//⼀维数组传参的本质
//我们之前都是在函数外部计算数组的元素个数，那我们可以把数组传给⼀个函数后，函数内部求数组的元素个数吗？
//#include <stdio.h>
//void test(int arr[])
//{
//    int sz2 = sizeof(arr) / sizeof(arr[0]);
//    printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)计算的是整个数组的大小
//    printf("sz1 = %d\n", sz1);
//    test(arr);
//    return 0;
//}
//结果sz1 = 10
//结果sz2 = 1
//在函数test中，arr并不是数组，而是指向数组第一个元素的指针变量
//所以sizeof(arr)计算的是指针变量的大小，而不是数组的大小
//所以在函数内部无法通过sizeof计算数组的元素个数
//所以⼀维数组传参的本质是传指针
//void test(int* arr)//等价于void test(int arr[])

//冒泡排序
//冒泡排序的核⼼思想就是：两两相邻的元素进⾏⽐较。
//
//⽅法1
//void bubble_sort(int arr[], int sz)//参数接收数组元素个数
//{
//    int i = 0;
//	for (i = 0; i < sz - 1; i++)//趟数8 0-8 即要搞9趟 让所有的元素有序
//    {
//        int j = 0;
//		for (j = 0; j < sz - i - 1; j++)//每趟比较次数 即比几次可以将最大值放到最后
//			//为啥是sz-i-1呢？因为每趟排序后，最后面的i个元素已经是有序的了，不需要再比较
//			//sz-i-1表示每趟比较的次数
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
//    bubble_sort(arr, sz);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//指针数组
//指针数组是指针还是数组？
//指针数组是数组
//指针数组是数组吗？指针数组是由指针变量组成的数组
//例如：int* arr[10]; //arr是一个指针数组，包含10个int*类型的指针变量
//
//
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	//数组名是数组⾸元素的地址，类型是int*的，就可以存放在parr数组中
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
////指针数组的应用
//二维数组的传参的本质
//#include <stdio.h>
//void test(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}
//函数指针的使用
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf3)(int, int) = Add;
//	printf("%d\n", (*pf3)(2, 3));
//	printf("%d\n", pf3(3, 5));
//	return 0;
//}
//回调函数
//#include <stdio.h>
//
//// 这是一个普通函数，将来会被当作回调函数使用
//void when_done(const char* task_name)
//{
//    printf("任务'%s'完成了！现在我被调用了！\n", task_name);
//}
//
//// 这个函数接受一个回调函数作为参数
//void do_task(const char* task, void (*callback)(const char*))
//{
//    printf("正在执行任务: %s\n", task);
//    printf("任务进行中...\n");
//    printf("任务进行中...\n");
//    
//    // 任务完成后，调用回调函数
//    callback(task);  // 这就是"回调"
//}
//
//int main()
//{
//    // 把 when_done 函数传递给 do_task
//    // when_done 就是回调函数
//    do_task("煮饭", when_done);
//    
//    return 0;
//}
//结构体
int main()
{
	typedef struct Student
	{
		char name[20];
		int age;
		float score;
	}student;//struct Student是结构体类型名
	student s1 = { "张三",20,95.5f };//student是结构体类型名
	student* ps = &s1;
	printf("name=%s\n", ps->name);


	return 0;
}
int main()
{
	struct Student
	{
		char name[20];
		int age;
		float score;
	}s1;//struct Student是结构体类型名
	s1 = { "张三",20,95.5f };//student是结构体类型名
	return 0;
}







