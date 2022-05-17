#define _CRT_SECURE_NO_WARNINGS 
#include"Stack.h"
#include"Queue.h"
//void StackTest1()
//{
//	ST st = { 0 };
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPrint(&st);
//	StackPush(&st, 4);
//	StackPush(&st, 5);
//	StackPrint(&st);
//
//}


void QueueTest1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	printf("\n");
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	int ret = QueueSize(&q);
	printf("%d\n", ret);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
}

int main()
{
	//StackTest1();
	QueueTest1();
	return 0;
}