#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//дһ�����������������Ľϴ�ֵ
//�磺
//���룺10 20
//����ϴ�ֵ��20
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
	printf("������Ҫ�Ƚϵ�����ֵ\n");
	scanf("%d %d", &n1, &n2);
	int max = Compare(n1, n2);
	printf("%d\n", max);

	return 0;
}