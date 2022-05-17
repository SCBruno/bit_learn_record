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

//初始化
void StackInit(ST* st);

//销毁
void StackDestory(ST* st);

//压栈
void StackPush(ST* st, STDataType x);

//出栈
void StackPop(ST* st);

//寻找栈顶元素
STDataType StackTop(ST* st);

//判断栈是否为空
bool StackEmpty(ST* st);

//栈的元素个数
int StackCout(ST* st);

//打印
void StackPrint(ST* st);