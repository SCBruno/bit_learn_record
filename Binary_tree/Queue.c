#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"


//初始化
void QueueInit(Queue* q)
{
	q->head = q->tail = NULL;
}


//入队
void QueuePush(Queue* q,QUDataType x)
{
	assert(q);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	else
	{
		newnode->data = x;
		newnode->next = NULL;
		if (q->head == NULL)
		{
			q->head = q->tail = newnode;
		}
		else
		{
			q->tail->next = newnode;
			q->tail = newnode;
			q->tail->next = NULL;
		}
	}
}


//出队
void QueuePop(Queue* q)
{
	assert(q);
	assert(q->head);
	if (q->head->next == NULL)
	{
		free(q->head);
		q->head = q->tail = NULL;
	}
	else
	{
		QNode* next = q->head->next;
		free(q->head);
		q->head = next;
	}
}


//判空
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->tail == NULL;
}

//头元素
QUDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->head);
	
	return q->head->data;
}

//队列元素个数
int QueueSize(Queue* q)
{
	assert(q);
	int size = 0;
	QNode* cur = q->head;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return size;
}

//释放链表
void QueueDestory(Queue* q)
{
	assert(q);
	QNode* cur = q->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	q->head = q->tail = NULL;
}