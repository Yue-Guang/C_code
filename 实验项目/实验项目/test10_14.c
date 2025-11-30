//#include<stdio.h>
//int main()
//{
//	printf("Hello!\n");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a, b; sum;
//	a = 5; b = 10;
//	sum = a + b
//		printf(sum = % d, sum);
//	return 0;
//}
#include <stdio.h>
int main()
{
    int a, b, c, t;
    printf("请输入三个整数：");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b) { t = a; a = b; b = t; }
    if (a > c) { t = a; a = c; c = t; }
    if (b > c) { t = b; b = c; c = t; }
    printf("从小到大：%d %d %d\n", a, b, c);
    return 0;
}
