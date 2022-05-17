#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>



#define ROW 9//实际显示的行数
#define COL 9//实际显示的列数
#define ROWS ROW+2
#define COLS COL+2
//四面多展开2行2列，方便数据判断

#define EAZY_COUT 1

//接口函数
void BoardInit(char board[ROWS][COLS], int rows, int cols, char set);//初始化

void BoardPrint(char board[ROWS][COLS], int row, int col);//打印

void BoardSet(char mine[ROWS][COLS], int row, int col);//只需要将雷存放在玩家所能看到的9*9棋盘中便可

int ShowThunder(char mine[ROWS][COLS], int x, int y);//检测八方的雷的个数

int BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS]);//排雷过程

void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS]);//实现扫雷功能汇总

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//展开

int BoardMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//标记

int BoardUnMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//取消标记

int is_win(int cout);//判断输赢


