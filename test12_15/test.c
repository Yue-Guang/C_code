#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//冒泡排序
// // 写一函数，对输入的一组整数按由小到大的顺序排序，在main主函数调用该函数实现排序

// void sort(int arr[],int n)
// {
//     int i,j,temp;
//     for(i=0;i<n-1;i++)//进行几趟
//     {
//         for(j=0;j<n-1-i;j++)//进行几次
//         {
//             if(arr[j]>arr[j+1])
//             { 
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }

//         }
        


//     }
//         printf("输出结果:");
//         for(i=0;i<n;i++)
//                 {
//                     printf("%d\n",arr[i]);
//                 }

// }



 
// int main()
// {
 

// int arr[100];
// int n=0;
// printf("请输入整数的个数啊:");
// scanf("%d",&n);
// int i;
// printf("请输入整数:");

// for(i=0;i<n;i++)
// {
// scanf("%d",&arr[i]);
// }
// sort(arr,n);

//     return 0;
// }

// .编写一个函数，将一个字符串中的元音字母复制到另
// 一个字符串，然后在主函数中输出


// void find(char arr1[],char arr2[],int n)
// {
//     int i=0;
//     int j=0;
//     for(i=0;i<n;i++)
//     {   if(arr1[i]=='\0')
//         break;
//         if(arr1[i]=='a'||arr1[i]=='e'||arr1[i]=='i'||arr1[i]=='o'||arr1[i]=='u')
//         {
//         arr2[j]=arr1[i];
//         j++;
//         }

//     }
// }


// int main()
// {
//     char arr1[100]={0};
//     char arr2[100]={0};
//     int i=0;
//     int j=0;
//     scanf("%s",arr1);
//     find(arr1,arr2,100);
//     for(i=0;i<100;i++)
//         {
//             if(arr2[i]=='\0')
//                 break;
//             printf("%c",arr2[i]);
//         }
//     return 0;
// }

// 1.输入5个学生3门课程的成绩，分别用函数实现以下功能:
// （1）计算每个学生的平均分。
// （2）计算每门课程的平均分。
// （3）求出15个成绩中最高的分数和所对应的学生和课程。

void st_verge(int arr1[],int arr2[],int arr3[],int n)
{

    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        int sum1=0;
        sum1=(arr1[i]+arr2[i]+arr3[i])/3;
        printf("学生%d的成绩为:%d\n",i+1,sum1);
    }
    for(i=0;i<3;i++)
    {
        int sum = 0;
        for(j=0;j<5;j++)
        {
            if(i==0) sum += arr1[j];
        else if(i==1) sum += arr2[j];
        else sum += arr3[j];//这里的if用法很妙
        }
        printf("课程%d的平均分为:%d\n",i+1,sum/5);
    }



}


int main()
{
    int arr1[5]={0};
    int arr2[5]={0};
    int arr3[5]={0};
    int i=0;
    int j=0;
    for(i=0;i<5;i++)
    {
        
        printf("请输入学生%d的成绩\n",i+1);
            scanf("%d %d %d",&arr1[i],&arr2[i],&arr3[i]);
            
    }
   st_verge(arr1,arr2,arr3,5);





    return 0;
}



