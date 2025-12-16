#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 4.写一函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。
// 分别在程序中按以下两种情况处理：
// （1）函数形参用数组名。
// （2）函数形参用指针变量。
// 作分析比较，掌握其规律。

// int calculate(char arr1[],int n)//用数组名
// {
//     int i,j=0;
//     for(i=0;i<n;i++)
//     {
//         if(arr1[i]=='\0')//遇到\0停止
//         {
//             j=i;
//             break;
//         }

//     }
//     return j;


// }


// int calculate(char* p[],int n)//用数组指针变量接收数组地址 当数组作函数参数时 退化为指针（地址）-->即sizeof函数计算arr(数组名)时计算的是指针而不是数组大小
// {
//     int len=0;
//     while(*p!='\0')
//     {
//         len++;
//         p++;

//     }
//     return len;

// }

// int main()
// { 
//     char arr1[100]={0};
//     scanf("%s",arr1);
//     int len = calculate(arr1,100);
//     printf("这个字符串长度为：%d",len);
//     return 0;
// }

// 5.将一个5×5矩阵中最大的元素放在中心，最小的元素放在左上角，写一函数实现之。并用main函数调用。
// void sort(int(*p)[5],int n,int r)
// {
//     int i,j;
//     int max=*(*p);
//     int min=*(*p);
//     int a=0,b=0,c=0,d=0;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<r;j++)
//         {
//             if(*(*(p+i)+j)>max)
//             {
//                 max=*(*(p+i)+j);//更新
//                 a=i;
//                 b=j;
//             }
//             if(*(*(p+i)+j)<min)
//             {
//                 min=*(*(p+i)+j);//更新
//                 c=i;
//                 d=j;
//             }
//         }

//     }
//     int temp;
//     //最大值的交换
//     temp=*(*(p+2)+2);
//     *(*(p+2)+2)=*(*(p+a)+b);
//     *(*(p+a)+b)=temp;
//     //最小值的交换 必须加上一个边界检查
//     if(c==2&&d==2)
//     {
//         c=a;
//         d=b;
//     }
//     //最小值的交换
//     temp=*(*p);
//     *(*p)=*(*(p+c)+d);
//     *(*(p+c)+d)=temp;

//    for(i=0;i<5;i++)//输出
//     {
//         for(j=0;j<5;j++)
//         {
//             printf("%d ",*(*(p+i)+j));
//         }
//         printf("\n");
//     }


// }

// int main()
// {
//     int arr[5][5]={0};
//     int i,j;

//     for(i=0;i<5;i++)//外层循环
//     {
//         for(j=0;j<5;j++)
//         {
//             scanf("%d",&arr[i][j]);//输入
//         }
//     }
//     printf("\n");
//     sort(arr,5,5);

//     return 0;
// }
// 四、附加题
// 1.用指向指针的指针的方法对5个字符串排序并输出。2．编写函数，int  cat_string(char *dst,char *src)，它的功能是将src所指向的字符串连接到 dst 所指向的字符串的后面，返回从 src中连接到 dst 后面的字符的个数。主函数接收从键盘输入的两个字符串， 调用  cat_string 函数将后面的字符串连接到前面的字符串后面，将新字符串输出。
int cat_string(char *dst,char *src)
{
    char temp;
    int i=0;
    while(1)//使指针指向\0 注意指针的移动是个go不会自动back 位置会停留指向的位置
    {
        if(*(dst++)=='\0')//++先用在加 当判断为\0后dst又会+1往后移动一位
        {
            dst--;//让dst指向第一个\0
            break;
        }
    }//此刻指向\0
    for(i=0;;i++)
    {
        *(dst+i)=*(src+i);
        if(*(src+i)=='\0')//此刻src指向第i+1位
        {
            break;
        }
    }
    
    return i;

}
int main()
{
    // char*arr[5]={"wo","cao","ni","ma","de"};
    // char**p=arr;
    // int i;
    // for(i=0;i<5;i++)
    // {
    //     printf("%s\n",*(p+i));
    // }
    char dst[100]={0};
    char src[100]={0};
    scanf("%s %s",dst,src);//字符串的输出一般方法
    int len = cat_string(dst,src);
     printf("%s\n",dst);//在主函数输出：dst的位置还是初始位
    printf("%d",len);
   

}

