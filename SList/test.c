#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);

	SListPrint(plist);

}

void TestList2()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 4);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void TestList3()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 1);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}

void TestList4()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 1);
	SLTNode* ret = SListFind(plist, 1);
	SListInsert(&plist, ret, 30);
	SListPrint(plist);

	ret = SListFind(plist, 2);
	SListErase(&plist, ret);
	SListPrint(plist);

	ret = SListFind(plist, 30);
	SListErase(&plist, ret);
	SListPrint(plist);

}



int main()
{
	TestList4();

	return 0;
}