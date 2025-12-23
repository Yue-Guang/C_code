#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;        // 工号
    char name[20]; // 姓名
    char sex[10];  // 性别
    int age;       // 年龄
    char edu[20];  // 学历
    float pay;     // 工资
    char addr[50]; // 住址
    char tel[15];  // 电话
} Staff;

Staff list[1000]; // 职工列表
int num = 0;      // 当前人数

// 函数声明
void menu();
void add();
void show();
void findByPay();
void findByEdu();
void del();
void change();
void save();
void load();

int main()
{
    int n;
    load();

    while (1)
    {
        menu();
        printf("请输入选项：");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            show();
            break;
        case 3:
            findByPay();
            break;
        case 4:
            findByEdu();
            break;
        case 5:
            del();
            break;
        case 6:
            change();
            break;
        case 7:
            save();
            break;
        case 0:
            save();
            printf("再见\n");
            return 0;
        default:
            printf("输入错误，重新选择\n");
        }
    }
    return 0;
}

void menu()
{
    printf("\n=================================\n");
    printf("      职工信息管理系统\n");
    printf("=================================\n");
    printf("  1. 录入职工信息\n");
    printf("  2. 浏览全部职工\n");
    printf("  3. 按工资查询\n");
    printf("  4. 按学历查询\n");
    printf("  5. 删除职工\n");
    printf("  6. 修改职工信息\n");
    printf("  7. 保存数据\n");
    printf("  0. 退出系统\n");
    printf("=================================\n");
}

void add()
{
    int i, newid;

    printf("\n--- 录入职工信息 ---\n");
    printf("工号：");
    scanf("%d", &newid);

    for (i = 0; i < num; i++)
    {
        if (list[i].id == newid)
        {
            printf("该工号已存在！\n");
            return;
        }
    }

    list[num].id = newid;
    printf("姓名：");
    scanf("%s", list[num].name);
    printf("性别：");
    scanf("%s", list[num].sex);
    printf("年龄：");
    scanf("%d", &list[num].age);
    printf("学历：");
    scanf("%s", list[num].edu);
    printf("工资：");
    scanf("%f", &list[num].pay);
    printf("住址：");
    scanf("%s", list[num].addr);
    printf("电话：");
    scanf("%s", list[num].tel);

    num++;
    printf("添加成功！当前共有%d名职工\n", num);
    save();
}

void show()
{
    int i;
    if (num == 0)
    {
        printf("暂无职工信息\n");
        return;
    }

    
    printf("\n工号\t姓名\t\t性别\t年龄\t学历\t\t工资\t\t住址\t\t\t电话\n");
    printf("========================================================================================================================\n");

    for (i = 0; i < num; i++)
    {
        printf("%d\t%s\t\t%s\t%d\t%s\t\t%.2f\t\t%s\t\t\t%s\n",
               list[i].id, list[i].name, list[i].sex,
               list[i].age, list[i].edu, list[i].pay,
               list[i].addr, list[i].tel);
    }
}

void findByPay()
{
    float min, max;
    int i, cnt = 0;

    printf("输入工资范围\n");
    printf("最低工资：");
    scanf("%f", &min);
    printf("最高工资：");
    scanf("%f", &max);

    printf("\n查询结果:\n");
    for (i = 0; i < num; i++)
    {
        if (list[i].pay >= min && list[i].pay <= max)
        {
            printf("工号:%d 姓名:%s 工资:%.2f\n",
                   list[i].id, list[i].name, list[i].pay);
            cnt++;
        }
    }

    if (cnt == 0)
        printf("没有符合条件的职工\n");
    else
        printf("共找到%d人\n", cnt);
}

void findByEdu()
{
    char str[20];
    int i, cnt = 0;

    printf("输入要查询的学历(如:本科、硕士、博士)：");
    scanf("%s", str);

    printf("\n查询结果:\n");
    for (i = 0; i < num; i++)
    {
        if (strcmp(list[i].edu, str) == 0)
        {
            printf("工号:%d 姓名:%s 学历:%s 工资:%.2f\n",
                   list[i].id, list[i].name, list[i].edu, list[i].pay);
            cnt++;
        }
    }

    if (cnt == 0)
        printf("没有该学历的职工\n");
    else
        printf("共找到%d人\n", cnt);
}

void del()
{
    int did, i, j, ok = 0;

    printf("输入要删除的职工工号：");
    scanf("%d", &did);

    for (i = 0; i < num; i++)
    {
        if (list[i].id == did)
        {
            for (j = i; j < num - 1; j++)
            {
                list[j] = list[j + 1];
            }
            num--;
            ok = 1;
            printf("删除成功\n");
            save();
            break;
        }
    }

    if (!ok)
        printf("未找到该工号\n");
}

void change()
{
    int mid, i, ok = 0;

    printf("输入要修改的职工工号：");
    scanf("%d", &mid);

    for (i = 0; i < num; i++)
    {
        if (list[i].id == mid)
        {
            ok = 1;
            printf("找到职工：%s\n", list[i].name);
            printf("重新输入信息（工号不可改）\n");

            printf("姓名：");
            scanf("%s", list[i].name);
            printf("性别：");
            scanf("%s", list[i].sex);
            printf("年龄：");
            scanf("%d", &list[i].age);
            printf("学历：");
            scanf("%s", list[i].edu);
            printf("工资：");
            scanf("%f", &list[i].pay);
            printf("住址：");
            scanf("%s", list[i].addr);
            printf("电话：");
            scanf("%s", list[i].tel);

            printf("修改成功\n");
            save();
            break;
        }
    }

    if (!ok)
        printf("未找到该工号\n");
}

void save()
{
    FILE *fp;
    int i;

    fp = fopen("D:\\code\\C_code\\课设\\employee.txt", "w");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return;
    }

    fprintf(fp, "%d\n", num);

    for (i = 0; i < num; i++)
    {
        fprintf(fp, "%d %s %s %d %s %.2f %s %s\n",
                list[i].id, list[i].name, list[i].sex,
                list[i].age, list[i].edu, list[i].pay,
                list[i].addr, list[i].tel);
    }

    fclose(fp);
    printf("保存成功，共%d条记录\n", num);
}

void load()
{
    FILE *fp;
    int i;
    fp = fopen("D:\\code\\C_code\\课设\\employee.txt", "r");
    if (fp == NULL)
    {
        num = 0;
        printf("暂无历史数据\n");
        return;
    }

    if (fscanf(fp, "%d", &num) != 1)
    {
        num = 0;
        fclose(fp);
        return;
    }

    for (i = 0; i < num; i++)
    {
        fscanf(fp, "%d %s %s %d %s %f %s %s",
               &list[i].id, list[i].name, list[i].sex,
               &list[i].age, list[i].edu, &list[i].pay,
               list[i].addr, list[i].tel);
    }

    fclose(fp);
    printf("已加载%d条记录\n", num);
}