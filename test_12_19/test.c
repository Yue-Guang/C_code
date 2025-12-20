#include<stdio.h>

// typedef struct
// {
//     float number1;//课程1
//     float number2;//课程2
//     float number3;//课程3
// }Score;

// typedef struct
// {
//     char name[10];//姓名
//     int grade;//年级
//     int id;//学号
//     Score score; 
// }Student;



// int main()
// {
//     FILE *fp=fopen("C_code\\test_12_19\\test.txt","r+");//打开并定义变量
//     //判断是否打开成功
//     if(fp==NULL)//失败返回空指针
//     {
//         perror("fopen\n");
//         return 1;
//     }
    
//     Student s[10];
//     Student * p=s;
//     int n = 0;
//     int i;
//     printf("需要录入的学生个数:\n");
//     scanf("%d",&n);
//     // for(i=0;i<n;i++)
//     // {
//     //     printf("请输入第%d名学生的成绩(依次为 姓名 年级 学号 第一门成绩 第二门成绩 第三门成绩):\n",i+1);
//     //     scanf("%s %d %d %f %f %f",
//     //         (p+i)->name,
//     //         &(p+i)->grade,
//     //         &(p+i)->id,
//     //         &(p+i)->score.number1,
//     //         &(p+i)->score.number2,
//     //         &(p+i)->score.number3);
//     //}

//     for(i=0;i<n;i++)
//     {
//         // fprintf(fp,"%s %d %d %f %f %f",
//         // (p+i)->name,
//         // (p+i)->grade,
//         // (p+i)->id,
//         // (p+i)->score.number1,
//         // (p+i)->score.number2,
//         // (p+i)->score.number3);
//         // }//写入到文件中 没有换行就一直在同一行输入
//         // printf("\n");

        


//         fscanf(fp,"%s %d %d %f %f %f",(p+i)->name,
//         &(p+i)->grade,
//         &(p+i)->id,
//         &(p+i)->score.number1,
//         &(p+i)->score.number2,
//         &(p+i)->score.number3);


//         fprintf(stdout,"%s %d %d %f %f %f",
//         (p+i)->name,
//         (p+i)->grade,
//         (p+i)->id,
//         (p+i)->score.number1,
//         (p+i)->score.number2,
//         (p+i)->score.number3);//强大的printf
       
//         }//写入到标准输入流 即打印
//         //  printf("\n");     fscanf 从文件读取数据  printf 输出到屏幕（stdout）两者操作的是不同的流，互不干扰
//     return 0;
//     }



int main()
{
    int data[]={1,2,3,4,5};
    FILE *fp=fopen("C_code\\test_12_19\\data.bin","wb");
    if(fp==NULL)
    {
        perror("fopen\n");
        return 1;
    }
    if(fwrite(data,sizeof(int),5,fp)!=5)
    {
        perror("fwrite");
        fclose(fp);
        return 1;
    }
    fclose(fp);
    fp=NULL;

    return 0;
}







