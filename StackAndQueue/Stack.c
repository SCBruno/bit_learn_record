#define _CRT_SECURE_NO_WARNINGS 
#include"Stack.h"


//初始化
void StackInit(ST* st)
{
	st->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	st->top = 0;//栈顶指向下一个元素
	st->capacity = 4;
}


//销毁
void StackDestory(ST* st)
{
	free(st->a);
	st->a = NULL;
	st->top = 0;
	st->capacity = 0;
}


//压栈
void StackPush(ST* st, STDataType x)
{
	assert(st);
	if (st->capacity == st->top)
	{
		STDataType* tmp = (STDataType*)realloc(st->a, sizeof(STDataType) * 2 * st->capacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			st->a = tmp;
			st->capacity *= 2;
		}
	}
	st->a[st->top] = x;
	st->top++;
}


//出栈
void StackPop(ST* st)
{
	assert(st);
	assert(st->top > 0);
	st->top--;
}


//寻找栈顶
STDataType StackTop(ST* st)
{
	assert(st->top > 0);
	assert(st);
	return st->a[st->top-1];
}

//判断栈是否为空
bool StackEmpty(ST* st)
{
	return st->top == 0;//如果栈为空，返回true;如果栈不为空，返回flase;
}


//栈的元素个数
int StackCout(ST* st)
{
	return st->top;
}


//打印
void StackPrint(ST* st)
{
	assert(st);
	while (!StackEmpty(st))
	{
		printf("%d ", StackTop(st));
		StackPop(st);
	}
	printf("\n");
}