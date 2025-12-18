 #include<stdio.h>
 #include <string.h>

// int main()
// {
//     FILE*fp=fopen("C_code/test_12_18/test.txt","w+");
//     if(fp==NULL)
//     {
//         perror("fopen\n");
//     }
//     char ch=0;
//     for(ch='a';ch<='z';ch++)
//     {
//         fputc(ch,fp);//一个一个的输入
//     }
// //重置文件指针到开头
//         fseek(fp, 0, SEEK_SET);

//     int i,c;
//     for(i=0;i<26;i++)
//     {
//         c=fgetc(fp);//如果移动到末尾后了 fget停止后会返回EOF
//         fputc(c,stdout);
//     }
//     // while ((c = fgetc(fp)) != EOF)
//     //     { // 只要没有到达 EOF，就继续读取
//     //          fputc(c, stdout);
//     //     }//更适合动态监测文件是否到达末尾


//     if(c==EOF)//判断 读写是否错误或者fgetc是否超出读写
//     {
//         if (feof(fp))//末尾会返回一个标定值供feof函数检查 超出规定有效范围后返回EOF
//                 printf("遇到⽂件末尾了\n");
//                 else if(ferrof(fp))
//                 printf("文件出错了\n");
//     }

//     fclose(fp);
//     fp=NULL;
//     return 0;
// }






#include<stdio.h>

int main()
{

    // 打开
    FILE*fp=fopen("C_code/test_12_18/test.txt","w+");
    if(fp==NULL)
    {
        perror("fopen\n");
       return 1; // 直接退出程序
    }

    // 输出字符串
    char ch[16]={0};
    printf("请输入字符串：");
    fgets(ch, sizeof(ch), stdin); // 使用 fgets 读取整行输入
    //scanf("%9s",ch);// 限制输入长度为 9，留一个位置给 '\0'
    // int sz=sizeof(ch)/sizeof(ch[0]);

    // 写入文件
    fputs(ch,fp);
    int i;

    // 重置文件指针至开头
        fseek(fp, 0, SEEK_SET);

    // for(i=0;i<sz;i++)//sz 是数组的大小（10） 不是字符串的大小
    // {
    //     int c = fgetc(fp);//fgetc会自动往前走
    //     fputc(c,stdout);//输出会错误

    // }

    // 读取 储存至数组 输出
    char c[17] = {0};
   if((fgets(c,17,fp))!=NULL)//读取并且储存到ch数组中
   fputs(c,stdout);//将ch中的字符串输出
   else
   printf("超出长度了 stop");


   // 检查文件是否到达末尾或发生错误
    if (feof(fp))
    {
        printf("\n遇到文件末尾了\n");//检查fgets呢
    }
    else if (ferror(fp))
    {
        printf("\n读取文件时发生错误\n");
    }

    // 关闭文件
    if (fclose(fp) != 0)//检查关闭成功没
    {
    perror("fclose");
    }
    fp=NULL;
    return 0;
}

