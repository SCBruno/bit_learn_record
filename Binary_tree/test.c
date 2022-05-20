#define _CRT_SECURE_NO_WARNINGS 1
#include"Tree.h"

//     A
//   B     C
// D  E
void TreeTest1()
{
	BT* A = (BT*)malloc(sizeof(BT));
	A->data = 'A';

	BT* B = (BT*)malloc(sizeof(BT));
	B->data = 'B';
	BT* C = (BT*)malloc(sizeof(BT));
	C->data = 'C';

	A->pLeft = B;
	A->pRight = C;

	C->pLeft = NULL;
	C->pRight = NULL;
	
	BT* D = (BT*)malloc(sizeof(BT));
	D->data = 'D';
	D->pLeft = NULL;
	D->pRight = NULL;
	BT* E = (BT*)malloc(sizeof(BT));
	E->data = 'E';
	E->pLeft = NULL;
	E->pRight = NULL;

	B->pRight = E;
	B->pLeft = D;

	B_order(A);
	printf("\n");
	Seq_order(A);
	printf("\n");
	Af_order(A);
	printf("\n");
	int size = binary_tree_size(A);
	printf("%d\n",size);
	int leave_size = binary_tree_leave(A);
	printf("%d\n", leave_size);
	LeaveOrder(A);
}

int main()
{
	TreeTest1();

	return 0;
}