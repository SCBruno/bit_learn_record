#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SL* sl)
{
	sl->a = NULL;
	sl->size = 0;
	sl->capacity = 0;
}


void SeqListPushBack(SL* sl,SQDataType x)
{
	SeqListCheckCapacity(sl);
	sl->a[sl->size] = x;
	sl->size++;
}


void SeqListPrint(SL sl)
{
	int i = 0;
	for (i = 0; i < sl.size; i++)
	{
		printf("%d ", sl.a[i]);
	}
	printf("\n");
}


void SeqListPushFront(SL* sl, SQDataType x)
{
	SeqListCheckCapacity(sl);
	int end = sl->size - 1;
	while (end >= 0)
	{
		sl->a[end + 1] = sl->a[end];
		end--;
	}
	sl->a[0] = x;
	sl->size++;
}


void SeqListCheckCapacity(SL* sl)
{
	if (sl->size == sl->capacity)
	{
		int NewCapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
		SQDataType* tmp = (SQDataType*)realloc(sl->a, sizeof(SQDataType) * NewCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			sl->a = tmp;
			sl->capacity *= 2;
		}
	}
}

void SeqListPopBack(SL* sl)
{
	assert(sl->size);
	sl->size--;
}

void SeqListPopFront(SL* sl)
{
	assert(sl->size);
	int start = 1;
	while (start < sl->size)
	{
		sl->a[start - 1] = sl->a[start];
		start++;
	}
	sl->size--;
}

void SeqListInsert(SL* sl, int pos, SQDataType x)
{
	assert(sl->size >= pos);
	SeqListCheckCapacity(sl);
	int end = sl->size - 1;
	while (end >= pos)
	{
		sl->a[end + 1] = sl->a[end];
		end--;
	}
	sl->a[pos] = x;
	sl->size++;
}

void SeqListErase(SL* sl, int pos)
{
	assert(sl->size > pos);
	assert(sl->size);
	int start = pos + 1;
	while (start < sl->size)
	{
		sl->a[start - 1] = sl->a[start];
		start++;
	}
	sl->size--;
}