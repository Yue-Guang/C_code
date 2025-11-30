#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main() {
//    double h = 100.0;  
//    double t = 0.0;  
//    int i;
//
//    for (i = 1; i <= 10; i++) {
//        t += h;  
//        h /= 2;               
//        if (i < 10) {
//            t += h;  
//        }
//    }
//
//    printf("经过10次，小球共：%.6f 米\n", t);
//    printf("第10次反弹，它跳到：%.6f 米的高度\n", h);
//
//    return 0;
//

int g = 9;







//#include <stdio.h>
//
//int main() {
//    int big, mid, small;
//
//    printf("可能的驮货方案：\n");
//    for (big = 0; big <= 33; big++) {         
//        for (mid = 0; mid <= 50; mid++) {      
//            small = 100 - big - mid;           
//            if (small >= 0 && small % 2 == 0) { 
//                if (3 * big + 2 * mid + small / 2 == 100) {
//                    printf("大马%d匹 + 中马%d匹 + 小马%d匹\n",
//                        big, mid, small);
//                }
//            }
//        }
//    }
//
//    return 0;
//}










//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int choice;
//    char cont;
//    double num1, num2;
//
//    do {
//        system("cls");
//        printf("******欢迎使用简易运算系统******\n");
//        printf("1.加法\n");
//        printf("2.减法\n");
//        printf("3.乘法\n");
//        printf("4.除法\n");
//        printf("0.退出\n");
//        printf("********************************\n");
//        printf("请输入运行代码：");
//        scanf("%d", &choice);
//
//        if (choice == 0) {
//            break;
//        }
//
//        if (choice < 1 || choice > 4) {
//            printf("输入错误\n");
//        }
//        else {
//            printf("请输入两个数：");
//            scanf("%lf %lf", &num1, &num2);
//
//            switch (choice) {
//            case 1:
//                printf("结果：%.2lf\n", num1 + num2);
//                break;
//            case 2:
//                printf("结果：%.2lf\n", num1 - num2);
//                break;
//            case 3:
//                printf("结果：%.2lf\n", num1 * num2);
//                break;
//            case 4:
//                if (num2 != 0) {
//                    printf("结果：%.2lf\n", num1 / num2);
//                }
//                else {
//                    printf("错误：除数不能为0\n");
//                }
//                break;
//            }
//        }
//
//        printf("是否继续(Y/N)? ");
//        scanf(" %c", &cont);
//
//    } while (cont == 'Y' || cont == 'y');
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int i, a[10];
//    float average = 0;
//
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//
//    for (i = 0; i < 10; i++) {
//        printf("%d ", a[i]);
//        if ((i + 1) % 3 == 0)
//            printf("\n");
//    }
//
//    for (i = 0; i < 10; i++)
//        average += a[i];
//
//    printf("average=%.2f\n", average / 10);
//    return 0;
//}

//#include <stdio.h>
//
//
//int main() {
//    int a[SIZE], i, j, t;
//
//    for (i = 0; i < SIZE; i++)
//        scanf("%d", &a[i]);  
//
//    i = 0; j = SIZE - 1;
//    while (i < j) {
//        t = a[i];
//        a[i] = a[j];  
//        a[j] = t;     
//        i++;
//        j--;          
//    }
//
//    for (i = 0; i < SIZE; i++)
//        printf("%3d", a[i]);
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j, m, n, x[3][4] = { 10,20,30,40,1,2,3,4,33,83,73,13 };
//	m = n = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			if (x[m][n] < x[i][j])
//			{
//				m = i; n = j;
//			}
//	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a[10], i, j, t;
//
//    printf("输入10个整数：");
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//
//    for (i = 0; i < 9; i++) {
//        for (j = 0; j < 9 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//
//    printf("排序结果：");
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//
//    return 0;
//}



//int main() {
//    int a[3][3], i, j, sum = 0;
//
//    printf("输入3×3矩阵元素：\n");
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf("%d", &a[i][j]);
//
//    for (i = 0; i < 3; i++)
//        sum += a[i][i];  // 主对角线
//
//    printf("对角线元素之和：%d\n", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char str[100], result[100];
//    int i = 0, j = 0;
//
//    printf("输入字符串：");
//    gets(str);
//
//    while (str[i] != '\0') {
//        if (str[i] != 'a' && str[i] != 'A') {
//            result[j] = str[i];
//            j++;
//        }
//        i++;
//    }
//    result[j] = '\0';
//
//    printf("删除字母a后：%s\n", result);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a[4][4] = {
//        {0, 0, 0, 10},
//        {0, 0, 9, 8},
//        {0, 7, 6, 5},
//        {4, 3, 2, 1}
//    };
//    int i, j;
//
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++)
//            printf("%2d ", a[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}



//int main() {
//    char str[100], result[100];
//    int i = 0, j = 0;
//
//    printf("输入字符串：");
//    fgets(str, sizeof(str), stdin);
//
//    while (str[i] != '\0') {
//        if (str[i] != 'a' && str[i] != 'A') {
//            result[j] = str[i];
//            j++;
//        }
//        i++;
//    }
//    result[j] = '\0';
//
//    printf("删除字母a后：%s\n", result);
//    return 0;
//}


#include <stdio.h>

//int main() {
//    char text[3][81];
//    int i, j;
//    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
//
//    printf("输入3行文字（每行最多80个字符）：\n");
//    for (i = 0; i < 3; i++) {
//        fgets(text[i], sizeof(text[i]), stdin);
//    }
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; text[i][j] != '\0'; j++) {
//            char ch = text[i][j];
//
//            if (ch >= 'A' && ch <= 'Z') {
//                upper++;
//            }
//            else if (ch >= 'a' && ch <= 'z') {
//                lower++;
//            }
//            else if (ch >= '0' && ch <= '9') {
//                digit++;
//            }
//            else if (ch == ' ' || ch == '\t') {
//                space++;
//            }
//            else if (ch != '\n' && ch != '\r') {  // 排除换行符
//                other++;
//            }
//        }
//    }
//
//    printf("大写字母：%d\n", upper);
//    printf("小写字母：%d\n", lower);
//    printf("数字：%d\n", digit);
//    printf("空格：%d\n", space);
//    printf("其他字符：%d\n", other);
//
//    return 0;
//}

//void 类型返回 表明函数不会返回任何值
