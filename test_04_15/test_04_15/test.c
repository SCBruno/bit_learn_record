#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret = ret * j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//
//	return 0;
//}

//int main()
//{
//	//计算1 -- 100 共有多少个9
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//int main()
//{
//	//分数求和
//	int i = 1;
//	int j = 2;
//	float sum = 0.0f;
//	float sub = 0.0f;
//
//	//从第1位开始计算每隔1位的和
//	while (i <= 99)
//	{
//		sum += 1.0 / i;
//		i += 2;
//	}
//	//从第2位开始计算每隔1位的差
//	while (j <= 100)
//	{
//		sub += 1.0 / j;
//		j += 2;
//	}
//	printf("%f", sum - sub);
//
//
//
//	return 0;
//}


//int main()
//{
//	//求10个整数中的最大值
//	int arr[10] = { 0 };
//	int n = 0;
//	while (n < 10)
//	{
//		scanf("%d", &arr[n]);
//		n++;
//	}
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d\t ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include<time.h>
//int main()
//{
//	//实现猜数字游戏(求0 - 100以内的数)
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int i = 0;
//
//	while (1)
//	{
//		scanf("%d", &i);
//		if (i == num)
//		{
//			printf("猜对了\n");
//			break;
//		}
//		if (i < num)
//		{
//			printf("太小了\n");
//		}
//		if (i > num)
//		{
//			printf("太大了\n");
//		}
//	}
//	return 0;
//}



int main()
{
	//实现二分查找
	int k = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("输入要查找的数\n");
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k <arr[mid])
		{
			right = mid - 1;
		}
		else if (k >arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标为%d\n", mid);
			break;
		}
	}

	return 0;
}