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
//	//����1 -- 100 ���ж��ٸ�9
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
//	//�������
//	int i = 1;
//	int j = 2;
//	float sum = 0.0f;
//	float sub = 0.0f;
//
//	//�ӵ�1λ��ʼ����ÿ��1λ�ĺ�
//	while (i <= 99)
//	{
//		sum += 1.0 / i;
//		i += 2;
//	}
//	//�ӵ�2λ��ʼ����ÿ��1λ�Ĳ�
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
//	//��10�������е����ֵ
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
//	//ʵ�ֲ�������Ϸ(��0 - 100���ڵ���)
//	srand((unsigned)time(NULL));
//	int num = rand() % 100 + 1;
//	int i = 0;
//
//	while (1)
//	{
//		scanf("%d", &i);
//		if (i == num)
//		{
//			printf("�¶���\n");
//			break;
//		}
//		if (i < num)
//		{
//			printf("̫С��\n");
//		}
//		if (i > num)
//		{
//			printf("̫����\n");
//		}
//	}
//	return 0;
//}



int main()
{
	//ʵ�ֶ��ֲ���
	int k = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("����Ҫ���ҵ���\n");
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
			printf("�ҵ���,�±�Ϊ%d\n", mid);
			break;
		}
	}

	return 0;
}