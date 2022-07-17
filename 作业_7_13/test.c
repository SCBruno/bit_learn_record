#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

int* Get_Dog(int arr[],int sz)
{
	int* parr = (int*)malloc(sizeof(int) * 2);
	if (parr == NULL)
		return NULL;

	int ret = 0;
	int ans1 = 0;//����
	int ans2 = 0;
	//�ҳ������������ֵ
	for (int i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//���ҳ����λΪ1�Ķ�����λ
	int flag = ret & -ret;

	//����
	for (int i = 0; i < sz; i++)
	{
		if ((arr[i] & flag) == flag)
			ans1 ^= arr[i];
		else
			ans2 ^= arr[i];
	}
	parr[0] = ans1;
	parr[1] = ans2;
	return parr;
}

//int main()
//{
//	int arr[] = { 2,3,4,1,5,2,4,3 };//1��5�ǵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* ret = Get_Dog(arr,sz);
//	printf("%d %d", ret[0], ret[1]);
//	free(ret);
//	ret = NULL;
//	return 0;
//}


//ģ��ʵ��strncpy
char* my_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	while (*src && num)
	{
		*dest++ = *src++;
		num--;
	}
	
	while (num--)
		*dest++ = '\0';

	return ret;
}


char* my_strncat(char* dest, const char* src, size_t num)
{
	assert(dest && src);
	char* ret = dest;
	
	while (*dest)
	{
		dest++;
	}

	while (*src && num--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return ret;
}


//ģ��ʵ��atoi
//���str�еĵ�һ���ǿհ��ַ����в���һ����Ч������
//������ΪstrΪ�ջ�ֻ�����հ��ַ������������������У���ִ��ת��������0��
int my_atoi(char* str)
{
	if (str == NULL)
		return 0;

	char flag = *str;
	char us = 0;
	//�ҵ���һ���ǿհ��ַ�
	while ((flag == ' ' || flag == '\t' || flag == '\v' || flag == '\r' || flag == '\f' || flag == '\n') && str++)
	{
		flag = *str;
	}


	//�жϵ�һ���ǿհ��ַ��Ƿ�Ϊ��Ч����
	if (!(flag >= '0' && flag <= '9') && flag != '-' && flag != '+')
	{
		return 0;
	}

	if (flag == '-')
	{
		us = -1;
		str++;
	}
	if (flag == '+')
	{
		str++;
	}

	//�Ѿ��ҵ���һ����Ч���ֻ����λ
	//���ж�λ��

	const char* start = str;
	if (*start != '0')
		start = str;
	else
	{
		while (*str == '0')
		{
			str++;
		}
		start = str;
	}
	while (*str >= '0' && *str <= '9')
	{
		str++;
	}

	str--;
	//�Ѿ������λ��

	//�Ӹ�λ���μӵ����λ
	long long sum = 0;
	long long i = 0;
	while (str >= start && *start != '0')
	{
		long long ret = (*str) - 48;
		sum += ret * (long long)pow(10, i);

		if (i >= 10 || sum > INT_MAX)
		{
			if (us != -1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		i++;
		str--;
	}
	if (us == -1)
		sum = -sum;

	return sum;
}


int main()
{
	char arr[] = "2147483648";
	int ret = my_atoi(arr);
	printf("%d\n", ret);
	return 0;
}
enum Con1
{
	Mon,
	Tue
};


enum Con
{
	EXIT,
	ADD = Tue,
	DEL,
	SHOW,
	SEARCH,
	MODIFY,
	SORT
};

//int main()
//{
//	enum Con c = ADD;
//	switch (c)
//	{
//	case 1:
//		printf("hello\n");
//	}
//	
//	return 0;
//}