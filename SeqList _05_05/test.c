#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListTest()
{
	SL s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	//SeqListPushBack(&s, 2);
	//SeqListPushBack(&s, 3);
	//SeqListPushBack(&s, 4);
	//SeqListPushBack(&s, 5);
	//SeqListPushBack(&s, 6);
	//SeqListPushBack(&s, 7);
	//SeqListPushFront(&s, 1);
	//SeqListPushFront(&s, 2);
	//SeqListPushFront(&s, 3);
	//SeqListPrint(s);
	//SeqListPopFront(&s);
	//SeqListPrint(s);
	//SeqListPopBack(&s);
	//SeqListPrint(s);
	//SeqListPopFront(&s);
	//SeqListInsert(&s, 1, 20);
	//SeqListPrint(s);
	//SeqListErase(&s, 1);
	//SeqListPrint(s);
	SeqListInsert(&s, 1, 20);
	SeqListPrint(s);


}

int main()
{
	SeqListTest();

	return 0;
}