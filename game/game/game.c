#define _CRT_SECURE_NO_WARNINGS
//此文件用来实现游戏的功能 即游戏的功能模块
#include "game.h"


void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;//***
    int j = 0;
	for (i = 0; i < rows; i++)
	{
	    
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set; 
		}
	}

}