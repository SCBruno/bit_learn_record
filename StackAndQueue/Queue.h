#pragma once
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QUDataType;

typedef struct QNode
{
	QUDataType data;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;//��ͷ
	QNode* tail;//��β
}Queue;


//��ʼ��
void QueueInit(Queue* q);

//���
void QueuePush(Queue* q,QUDataType x);

//����
void QueuePop(Queue* q);

//�п�
bool QueueEmpty(Queue* q);

//ͷԪ��
QUDataType QueueFront(Queue* q);

//����Ԫ�ظ���
int QueueSize(Queue* q);

//�ͷ�����
void QueueDestory(Queue* q);