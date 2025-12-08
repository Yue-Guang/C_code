#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n)
{
	int i = 0;
	int s = 0;
	for (i=1;i<n;i++)
	{
		if (n % i == 0)
		{
			s=s+i;
		}
	}
	return s;

}
int main()
{
    int n;
    for (n = 1; n <= 500; n++)
    {
        int a = sum(n);
		if (a >= 1 && a <= 500)         
        {
            if (sum(a) == n && n <= a)  
            {
                printf("%d %d\n", n, a);
            }
        }
    }
	return 0;//亲密数的输出 求 x 的 n 次方的函数  本质上是一个循环累乘 冒泡排序算法排列大小
}



#include <stdio.h>

// 求 x 的 n 次方的函数  本质上是一个循环累乘
double power(double x, int n)
{
    double result = 1; // 初始化结果为 1
    for (int i = 0; i < n; i++) // 循环 n 次
    {
        result *= x; // 每次乘以 x
    }
    return result; // 返回结果
}

int main()
{
    double x; // 底数
    int n;    // 指数

    // 输入 x 和 n 的值
    printf("请输入底数 x: ");
    scanf("%lf", &x);
    printf("请输入指数 n: ");
    scanf("%d", &n);

    // 调用 power 函数并输出结果
    double result = power(x, n);
    printf("%.2lf 的 %d 次方是 %.2lf\n", x, n, result);

    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort_asc(int arr[], int len)
{
    int i, j, tmp;
    for (i = 0; i < len - 1; i++)              /* 外层控制轮数，共需要 len-1 轮 */
    {
        for (j = 0; j < len - 1 - i; j++)      /* 内层每轮比较相邻元素，右端已排好可减去 i */
        {
            if (arr[j] > arr[j + 1])           /* 若前者比后者大，交换它们 */
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int count;
    if (scanf("%d", &count) != 1 || count <= 0) return 0;

    if (count > 1000) count = 1000;           /* 简单限制，防止数组越界 */
    int arr[1000];
    for (int i = 0; i < count; i++) scanf("%d", &arr[i]);

    sort_asc(arr, count);

    for (int i = 0; i < count; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}