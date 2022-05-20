#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"


//��ʼ��
void QueueInit(Queue* q)
{
	q->head = q->tail = NULL;
}


//���
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


//����
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


//�п�
bool QueueEmpty(Queue* q)
{
	assert(q);
	return q->tail == NULL;
}

//ͷԪ��
QUDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->head);
	
	return q->head->data;
}

//����Ԫ�ظ���
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

//�ͷ�����
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