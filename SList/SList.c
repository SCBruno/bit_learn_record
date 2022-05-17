#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"


void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


SLTNode* BuySListNode(int x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SLTNode** pphead, SLDataType x)
{
	SLTNode* newnode = BuySListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}

}


void SListPushFront(SLTNode** pphead, SLDataType x)
{
	SLTNode* newnode = BuySListNode(x);
		newnode->next = *pphead;
		*pphead = newnode;
}


void SListPopBack(SLTNode** pphead)
{
	SLTNode* prev = NULL;
	SLTNode* tail = *pphead;
	
	//当头指针为空时（没有节点），无法删除
	//当结点只有一个时，prev->next 为NULL->NULL(非法)
	//当节点有两个或两个以上的时候，不会有越界操作
	if(*pphead == NULL)
	{ 
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		//循环找到末尾第二个的位置
		//删除
		prev->next = NULL;
		free(tail);
	}
}



void SListPopFront(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
}


SLTNode* SListFind(SLTNode* pphead, SLDataType x)
{
	SLTNode* tail = pphead;
	while (tail != NULL)
	{
		if (tail->data == x)
		{
			return tail;
		}
		tail = tail->next;
	}
	return NULL;
}



void SListInsert(SLTNode** pphead,SLTNode* pos ,SLDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	SLTNode* prev = *pphead;
	if (pos == *pphead)
	{
		SListPushFront(&(*pphead), x);
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}


void SListErase(SLTNode** pphead, SLTNode* pos)
{
	SLTNode* prev = *pphead;
	//当pos指向第一个节点的时候需要单独判断
	if (pos == *pphead)
	{
		SListPopFront(&(*pphead));
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
	}
}