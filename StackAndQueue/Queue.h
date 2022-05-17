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
	QNode* head;//队头
	QNode* tail;//队尾
}Queue;


//初始化
void QueueInit(Queue* q);

//入队
void QueuePush(Queue* q,QUDataType x);

//出队
void QueuePop(Queue* q);

//判空
bool QueueEmpty(Queue* q);

//头元素
QUDataType QueueFront(Queue* q);

//队列元素个数
int QueueSize(Queue* q);

//释放链表
void QueueDestory(Queue* q);