#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>



#define ROW 9//ʵ����ʾ������
#define COL 9//ʵ����ʾ������
#define ROWS ROW+2
#define COLS COL+2
//�����չ��2��2�У����������ж�

#define EAZY_COUT 1

//�ӿں���
void BoardInit(char board[ROWS][COLS], int rows, int cols, char set);//��ʼ��

void BoardPrint(char board[ROWS][COLS], int row, int col);//��ӡ

void BoardSet(char mine[ROWS][COLS], int row, int col);//ֻ��Ҫ���״����������ܿ�����9*9�����б��

int ShowThunder(char mine[ROWS][COLS], int x, int y);//���˷����׵ĸ���

int BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS]);//���׹���

void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS]);//ʵ��ɨ�׹��ܻ���

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);//չ��

int BoardMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//���

int BoardUnMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout);//ȡ�����

int is_win(int cout);//�ж���Ӯ


