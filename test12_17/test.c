// 3.函数findbook的功能是：在有M个元素的结构体数组中查找名为name的书。若找到，函数返回数组下标，否则，函数返回一1。
// 要求：在main函数中输入book数组的信息和要查找的书名，如果找到，则输出该书的相关信息（id,name,price）；如果没有找到，则输出“no find”，请完成main函数的编写。
#include<stdio.h>
#include<string.h>
// typedef struct
// {
//     // char name = '0';//结构体定义中不能直接初始化
//     int id;
//     char name[50];
//     float price;

// }Book;

// int findbook(Book*p,int n,char*f)
// {
//     int i;
//     for(i=0;i<n;i++)
//     {
//         if(strcmp((p+i)->name,f)==0)
//         {
//            return i;//返回下标以供输出使用
//         }
//     }
//     return -1;

// }

// int main()
// {
//     //创建结构体数组
//     Book book[100];
//     int i,j=0;
//     char find[100]={0}; //存储查找的“一个”字符串
//     //自定义书籍数
//     printf("请输入要储存多少本书：");
//     scanf("%d",&j); 
//     //输入书籍的相关信息
//     for(i=0;i<j;i++)
//     {
//         printf("请输入第%d本书籍的信息(依次为id 书名 价格):",i+1);
//         scanf("%d %s %f",&book[i].id,book[i].name,&(book+i)->price);//&book[i].name 最好不加&  book[i].name本身就是数组名
//     }
//     printf("\n");
//     for(i=0;i<j;i++)
//     {
//         printf("这是你输入的书籍信息：");
//         printf("%d %s %.2f\n",book[i].id,book[i].name,(book+i)->price);
//     }
//     printf("请输入要查询的书籍名：");
//     scanf("%s",find);
//     int number = findbook(book,j,find);
//     if(number!=-1)
//     {
//         printf("%d %s %.2f\n",book[number].id,book[number].name,(book+number)->price);
//     }
//     else
//     printf("抱歉没有查找到");


//     return 0;
// }

// 4.编写程序，定义一个复数的结构体类型，定义两个结构体的变量分别表示两个复数，从键盘输入复数的实部和虚部，输出这两个复数的和。



// typedef struct
//     {
//         float real;
//         float fake;
//     }complex;

//     complex Complex_number_add(complex n1,complex n2)
//     {

//         complex num;
//         num.fake = n1.fake+n2.fake;
//         num.real = n1.real+n2.real;
//          return num;


//     }

// int main()
// {
//     complex number1;
//     complex number2;
//     printf("please input number1:");
//     scanf("%f %f",&number1.real,&number1.fake);
//     printf("please input number2:");
//     scanf("%f %f",&number2.real,&number2.fake);
//     complex n = Complex_number_add(number1,number2);
//     printf("output %.1f+%.1fi",n.real,n.fake);




//     return 0;
// }

// 四、附加题
// 1.有5个学生，每个学生的数据包括学号、姓名、3门课的成绩。从键盘输入5个学生数据，要求输出每位学生3门课的平均成绩（包括学号、姓名、3门课程的成绩，平均分数），以及最高分的学生的数据（包括学号、姓名、3门课程的成绩，平均分数）。
// 要求：
// （1）编写input函数输入学生数据。
// （2）编写average函数求平均分。
// （3）编写max函数找出最高分学生数据。
// （4）平均分和最高分的学生的数据都在主函数中输出。


//丐版
// void st_verge(int arr1[],int arr2[],int arr3[],int n)
// {

//     int i=0;
//     int j=0;
//     for(i=0;i<5;i++)
//     {
//         int sum1=0;
//         sum1=(arr1[i]+arr2[i]+arr3[i])/3;
//         printf("学生%d的成绩为:%d\n",i+1,sum1);
//     }
//     for(i=0;i<3;i++)
//     {
//         int sum = 0;
//         for(j=0;j<5;j++)
//         {
//             if(i==0) sum += arr1[j];
//         else if(i==1) sum += arr2[j];
//         else sum += arr3[j];//这里的if用法很妙
//         }
//         printf("课程%d的平均分为:%d\n",i+1,sum/5);
//     }



// }


// int main()
// {
//     int arr1[5]={0};
//     int arr2[5]={0};
//     int arr3[5]={0};
//     int i=0;
//     int j=0;
//     for(i=0;i<5;i++)
//     {
        
//         printf("请输入学生%d的成绩\n",i+1);
//             scanf("%d %d %d",&arr1[i],&arr2[i],&arr3[i]);
            
//     }
//    st_verge(arr1,arr2,arr3,5);





//     return 0;
// }

// 四、附加题
// 1.有5个学生，每个学生的数据包括学号、姓名、3门课的成绩。从键盘输入5个学生数据，要求输出每位学生3门课的平均成绩（包括学号、姓名、3门课程的成绩，平均分数），以及最高分的学生的数据（包括学号、姓名、3门课程的成绩，平均分数）。
// 要求：
// （1）编写input函数输入学生数据。
// （2）编写average函数求平均分。
// （3）编写max函数找出最高分学生数据。
// （4）平均分和最高分的学生的数据都在主函数中输出。
//我要用结构体写
// typedef struct
// {
//     float grade_1;
//     float grade_2;
//     float grade_3;

// }Grade;

// typedef struct 
// {
//     int id;
//     char name[10];
//     Grade i;
// }student;

// void Input(student *p,int n)
// {
//     int i;
//     for(i=0;i<n;i++)//输入
//     {
//         printf("请输入第%d名学生的数据(依次为id 姓名 成绩1 成绩2 成绩3)\n",i+1);
//         scanf("%d %s %f %f %f",&(p+i)->id,(p+i)->name,&(p+i)->i.grade_1,&(p+i)->i.grade_2,&(p+i)->i.grade_3);
//     }
// }

// void Calculate(student*q,int m,float*k)
// {
//     int i;
//     for(i=0;i<m;i++)
//     {
//         *(k+i)=((q+i)->i.grade_1+(q+i)->i.grade_2+(q+i)->i.grade_3)/3.0;
//     }
// }
// //单科最高分的计算
// int Max(student*u,int v)//线性查找max
// {
//     int max=u->i.grade_1;
//     int i;
//     int j=0;
//     for(i=0;i<v;i++)
//     {
//         if((u+i)->i.grade_1>max)
//         {
//             max=(u+i)->i.grade_1;
//             j=i;
//         }
//         if((u+i)->i.grade_2>max)
//         {
//             max=(u+i)->i.grade_2;
//             j=i;
//         }
//         if((u+i)->i.grade_3>max)
//         {
//             max=(u+i)->i.grade_3;
//             j=i;//获取数组下标
//         }
//     }
//     return j;
// }

// //传入平均分数组 平均分的最大值计算
// int max(student*u, float*avg, int v)
// {
//     int maxIndex = 0;
//     float maxAvg = avg[0];
    
//     for(int i = 1; i < v; i++)
//     {
//         if(avg[i] > maxAvg)  // 比较平均分
//         {
//             maxAvg = avg[i];
//             maxIndex = i;
//         }
//     }
//     return maxIndex;
// }


// int main()
// {
//     float average[10]={0};
//     student S[10];
//     student *p=S;// S 是 int[10] 类型，但会退化为 int*
//     int n=0;
//     int i;
//     printf("请输入需要录入几名学生信息:");
//     scanf("%d",&n);
//     Input(S,n);
//     Calculate(S,n,average);
//     int number = Max(S,n);
//     int number1 = max(S,average,n);
//     for(i=0;i<n;i++)
//     {
//         printf("序号%d 学生%s的平均分为:%.1f,grade1:%.1f,grade2:%.1f,grade3:%.1f\n",(p+i)->id,(p+i)->name,average[i],(p+i)->i.grade_1,(p+i)->i.grade_2,(p+i)->i.grade_3);
//         printf("\n");

//     }
//     //两个版本
//     printf("其中单科最高分的学生的数据如下:\n");
//     printf("\n");
//     printf("序号%d 学生%s的平均分为:%.1f,grade1:%.1f,grade2:%.1f,grade3:%.1f",(p+number)->id,(p+number)->name,average[number],(p+number)->i.grade_1,(p+number)->i.grade_2,(p+number)->i.grade_3);

//      printf("\n其中平均分最高的学生的数据如下:\n");
//      printf("\n");
//     printf("序号%d 学生%s的平均分为:%.1f,grade1:%.1f,grade2:%.1f,grade3:%.1f\n",
//            S[number1].id, S[number1].name, average[number1],
//            S[number1].i.grade_1, S[number1].i.grade_2, S[number1].i.grade_3);
//     return 0;
// }
// //int arr[10]={0};
// //int i = arr;

















