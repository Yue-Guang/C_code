#pragma once

//构建一个方法 使棋盘大小可改变
//#define 定义符号
#define ROW 9//这是棋盘一
#define COL 9//这是棋盘一
//后面不用加分号
#define ROWS ROW+2
#define COLS COL+2


//声明函数
//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int rows, int cols,char set);
