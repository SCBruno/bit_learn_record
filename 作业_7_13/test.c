#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<math.h>
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

int* Get_Dog(int arr[],int sz)
{
	int* parr = (int*)malloc(sizeof(int) * 2);
	if (parr == NULL)
		return NULL;

	int ret = 0;
	int ans1 = 0;//分组
	int ans2 = 0;
	//找出两个数的异或值
	for (int i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//先找出最低位为1的二进制位
	int flag = ret & -ret;

	//分组
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
//	int arr[] = { 2,3,4,1,5,2,4,3 };//1和5是单身狗
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* ret = Get_Dog(arr,sz);
//	printf("%d %d", ret[0], ret[1]);
//	free(ret);
//	ret = NULL;
//	return 0;
//}


//模拟实现strncpy
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


//模拟实现atoi
//如果str中的第一个非空白字符序列不是一个有效的整数
//或者因为str为空或只包含空白字符而不存在这样的序列，则不执行转换并返回0。
int my_atoi(char* str)
{
	if (str == NULL)
		return 0;

	char flag = *str;
	char us = 0;
	//找到第一个非空白字符
	while ((flag == ' ' || flag == '\t' || flag == '\v' || flag == '\r' || flag == '\f' || flag == '\n') && str++)
	{
		flag = *str;
	}


	//判断第一个非空白字符是否为有效整数
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

	//已经找到第一个有效数字或符号位
	//先判断位数

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
	//已经到达个位数

	//从个位依次加到最高位
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