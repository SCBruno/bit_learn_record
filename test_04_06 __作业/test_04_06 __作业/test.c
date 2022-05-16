#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//写一个函数求两个整数的较大值
//如：
//输入：10 20
//输出较大值：20
int Compare(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}

int main()
{
	int n1 = 0;
	int n2 = 0;
	printf("请输入要比较的两个值\n");
	scanf("%d %d", &n1, &n2);
	int max = Compare(n1, n2);
	printf("%d\n", max);

	return 0;
}