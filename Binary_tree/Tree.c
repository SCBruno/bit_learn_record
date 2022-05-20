#define _CRT_SECURE_NO_WARNINGS 1
#include"Tree.h"
//      a
//  b       c
//        d   e
//a b c d e 

void B_order(BT* boot)
{
	//根->左子树->右子树
	if (boot == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		printf("%c ", boot->data);
		B_order(boot->pLeft);
		B_order(boot->pRight);
	}
}

void Seq_order(BT* boot)
{
	//中序
	//左子树->根->右子树
	if (boot == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		Seq_order(boot->pLeft);
		printf("%c ", boot->data);
		Seq_order(boot->pRight);
	}
}

void Af_order(BT* boot)
{
	//后序
	//左子树->右子树->根
	if (boot == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		Af_order(boot->pLeft);
		Af_order(boot->pRight);
		printf("%c ",boot->data);
	}
}


int binary_tree_size(BT* boot)
{
	if (boot == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + binary_tree_size(boot->pLeft) + binary_tree_size(boot->pRight);
	}
}


int binary_tree_leave(BT* boot)
{
	if (boot == NULL)
	{
		return 0;
	}
	else
	{
		if (boot->pLeft == NULL && boot->pRight == NULL)
		{
			return 1;
		}
		return binary_tree_leave(boot->pLeft) + binary_tree_leave(boot->pRight);
	}	
}


void LeaveOrder(BT* boot)
{
	Queue q;
	QueueInit(&q);
	if (boot)
	{
		QueuePush(&q, boot);
		while (!QueueEmpty(&q))
		{
			BT* front = QueueFront(&q);
			QueuePop(&q);
			printf("%c ", front->data);

			if (front->pLeft)
			{
				QueuePush(&q, front->pLeft);
			}
			if (front->pRight)
			{
				QueuePush(&q, front->pRight);
			}
		}
	}
	printf("\n");
	QueueDestory(&q);
}