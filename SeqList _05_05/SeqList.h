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

void SeqListInit(SL* sl);//初始化

void SeqListPushBack(SL* sl, SQDataType x);//尾插

void SeqListPrint(SL sl);//打印

void SeqListPushFront(SL* sl, SQDataType x);//头插

void SeqListCheckCapacity(SL* sl);//判断是否扩容

void SeqListPopBack(SL* sl);//尾删

void SeqListPopFront(SL* sl);//头删

void SeqListInsert(SL* sl, int pos, SQDataType x);//在指定下标插入数据

void SeqListErase(SL* sl, int pos);//在指定下标删除数据