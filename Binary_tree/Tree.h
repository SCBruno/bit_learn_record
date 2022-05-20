#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"
typedef char BTDataType;

typedef struct binary_Tree
{
	BTDataType data;
	struct binary_Tree* pRight;
	struct binary_Tree* pLeft;
}BT;


//ǰ��
void B_order(BT* boot);

//����
void Seq_order(BT* boot);

//����
void Af_order(BT* boot);

//����������Ľڵ���
int binary_tree_size(BT* boot);

//�����������Ҷ������
int binary_tree_leave(BT* boot);

//�������Ĺ�ȱ���
void LeaveOrder(BT* boot);
