#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5

void Init(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL], int row, int col);//��ӡ����
void PlayerMove(char board[ROW][COL], int row, int col);//�������
void ComputerMove(char board[ROW][COL], int row, int col);//��������
char is_Win(char board[ROW][COL], int row, int col);//�ж���Ӯ
int is_Full(char board[ROW][COL], int row, int col);//�ж������Ƿ�����