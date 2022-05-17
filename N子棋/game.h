#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5

void Init(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char board[ROW][COL], int row, int col);//玩家落子
void ComputerMove(char board[ROW][COL], int row, int col);//电脑落子
char is_Win(char board[ROW][COL], int row, int col);//判断输赢
int is_Full(char board[ROW][COL], int row, int col);//判断棋盘是否满了