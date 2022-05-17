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


void BoardInit(char board[ROWS][COLS], int rows, int cols,char set);//��ʼ��

void BoardPrint(char board[ROWS][COLS], int row, int col);//��ӡ

void BoardSet(char board[ROWS][COLS], int row, int col);//������

int BoardFind(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);//����

int ShowSet(char mine[ROWS][COLS],int x,int y);//��ʾ��Χ�м�����

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//չ��

int BoardMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//���

void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);//ɨ�׹���

int BoardUnmark(char mine[ROWS][COLS], char show[ROWS][COLS]);//ȡ�����
