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


//前序
void B_order(BT* boot);

//中序
void Seq_order(BT* boot);

//后序
void Af_order(BT* boot);

//计算二叉树的节点数
int binary_tree_size(BT* boot);

//计算二叉树的叶的数量
int binary_tree_leave(BT* boot);

//二叉树的广度遍历
void LeaveOrder(BT* boot);
