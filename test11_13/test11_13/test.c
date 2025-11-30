#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        if (a > b && b > c)
            printf("The maximum number is : % d",a);
        else if (a > c && c > b)
                printf("The minimum number is : % d",a);
        else if (b > a && a > c)
                    printf("The maximum number is : % d",b);
        else if (b > a && a > c)
                        printf("The maximum number is : % d",b);
        else if (c > a && a > b)
                            printf("The maximum number is : % d",c);
        else 
                                printf("The maximum number is :% d",c);


    }
    return 0;
}