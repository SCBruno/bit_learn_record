#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

//��ʼ��
void StackInit(ST* st);

//����
void StackDestory(ST* st);

//ѹջ
void StackPush(ST* st, STDataType x);

//��ջ
void StackPop(ST* st);

//Ѱ��ջ��Ԫ��
STDataType StackTop(ST* st);

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* st);

//ջ��Ԫ�ظ���
int StackCout(ST* st);

//��ӡ
void StackPrint(ST* st);