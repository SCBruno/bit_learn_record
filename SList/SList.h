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

//��ӡ����
void SListPrint(SLTNode* phead);

//β��
void SListPushBack(SLTNode** pphead,SLDataType x);

//ͷ��
void SListPushFront(SLTNode** pphead, SLDataType x);

//βɾ
void SListPopBack(SLTNode** pphead);

//ͷɾ
void SListPopFront(SLTNode** pphead);

//����
SLTNode* SListFind(SLTNode* pphead, SLDataType x);

//��posǰ����
void SListInsert(SLTNode** pphead,SLTNode* pos ,SLDataType x);

//ɾ��ָ��pos���
void SListErase(SLTNode** pphead, SLTNode* pos);