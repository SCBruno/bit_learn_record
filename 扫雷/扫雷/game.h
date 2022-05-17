#pragma once
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

#define EAZY_COUT 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2


void BoardInit(char board[ROWS][COLS], int rows, int cols,char set);//初始化

void BoardPrint(char board[ROWS][COLS], int row, int col);//打印

void BoardSet(char board[ROWS][COLS], int row, int col);//设置雷

int BoardFind(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);//排雷

int ShowSet(char mine[ROWS][COLS],int x,int y);//显示周围有几颗雷

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//展开

int BoardMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//标记

void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//扫雷功能

int BoardUnmark(char mine[ROWS][COLS], char show[ROWS][COLS]);//取消标记
