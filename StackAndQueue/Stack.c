#define _CRT_SECURE_NO_WARNINGS 
#include"Stack.h"


//��ʼ��
void StackInit(ST* st)
{
	st->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	st->top = 0;//ջ��ָ����һ��Ԫ��
	st->capacity = 4;
}


//����
void StackDestory(ST* st)
{
	free(st->a);
	st->a = NULL;
	st->top = 0;
	st->capacity = 0;
}


//ѹջ
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


//��ջ
void StackPop(ST* st)
{
	assert(st);
	assert(st->top > 0);
	st->top--;
}


//Ѱ��ջ��
STDataType StackTop(ST* st)
{
	assert(st->top > 0);
	assert(st);
	return st->a[st->top-1];
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(ST* st)
{
	return st->top == 0;//���ջΪ�գ�����true;���ջ��Ϊ�գ�����flase;
}


//ջ��Ԫ�ظ���
int StackCout(ST* st)
{
	return st->top;
}


//��ӡ
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