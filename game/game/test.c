#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"

//1.实现菜单功能
void nume()
{
	printf("*********************************\n");
	printf("*********************************\n");
	printf("**************1. play ***********\n");
	printf("**************0. exit ***********\n");
	printf("*********************************\n");
	printf("*********************************\n");
}

void game()
{
	//游戏的逻辑：两个数组作为棋盘
	char mine[ROWS][COLS] = { 0 };//放置雷信息的棋盘 最初得全部都是0 1代表雷 得多出来两排
	char show[ROWS][COLS] = { 0 };//显示扫雷时排查出雷的信息 最初得全部都是* 得多出来两排
	//初始化棋盘 一个全是由0 1字符构成的 一个全是由*构成的表面棋盘
	InitBoard(mine, ROWS, COLS,'0');//全部初始化成‘0’
	InitBoard(show, ROWS, COLS,'*');//全部初始化成‘*’      
	

}

int main()
{
	int input = 0;
	do
	{
		nume();
		printf("请输入:");
		scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
					break;
			case 0://此时跳出switch后 input仍为0 while循环停止
					break;
			default://default request ':'
						printf("输入错误，请重新输入1或0\n");
					break;
			}




	} while (input);


	return 0;
}