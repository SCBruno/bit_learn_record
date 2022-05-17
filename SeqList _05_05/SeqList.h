#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


typedef int SQDataType;
typedef struct SeqList
{
	SQDataType* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* sl);//��ʼ��

void SeqListPushBack(SL* sl, SQDataType x);//β��

void SeqListPrint(SL sl);//��ӡ

void SeqListPushFront(SL* sl, SQDataType x);//ͷ��

void SeqListCheckCapacity(SL* sl);//�ж��Ƿ�����

void SeqListPopBack(SL* sl);//βɾ

void SeqListPopFront(SL* sl);//ͷɾ

void SeqListInsert(SL* sl, int pos, SQDataType x);//��ָ���±��������

void SeqListErase(SL* sl, int pos);//��ָ���±�ɾ������