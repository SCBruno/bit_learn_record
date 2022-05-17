#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int SLDataType;

struct SListNode
{
	SLDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;

//打印链表
void SListPrint(SLTNode* phead);

//尾插
void SListPushBack(SLTNode** pphead,SLDataType x);

//头插
void SListPushFront(SLTNode** pphead, SLDataType x);

//尾删
void SListPopBack(SLTNode** pphead);

//头删
void SListPopFront(SLTNode** pphead);

//查找
SLTNode* SListFind(SLTNode* pphead, SLDataType x);

//在pos前插入
void SListInsert(SLTNode** pphead,SLTNode* pos ,SLDataType x);

//删除指定pos结点
void SListErase(SLTNode** pphead, SLTNode* pos);