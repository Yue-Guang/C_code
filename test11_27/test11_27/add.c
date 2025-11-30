#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    char c1 = 'A';  // ASCII 65
    char c2 = 'B';  // ASCII 66

    int result = c1 + c2;
    printf("'A' + 'B' = %d\n", result);  // 输出: 65 + 66 = 131
    printf("作为字符: %c (可能不可打印)\n", result);

    return 0;
}