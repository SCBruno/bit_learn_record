#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//
//int main()
//{
	//打印100-200之间的素数
	//int i = 0;
	//int count = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	int j = 0;
	//	int flag = 1;
	//	for (j = 2; j <= i - 1; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = 0;
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");
	//printf("%d\n", count);


	//优化
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//
//	return 0;
//}


//以函数形式完成打印100-200之间的素数

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//
//		}
//	}
//
//}
//
//
//void Test()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;
//		is_prime(i);
//	}
//
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}
//#include<stdbool.h>
//int main()
//{
//	printf("%d", sizeof(bool));
//
//	return 0;
//}
//#include<math.h>
//int is_prime(int n)//判断函数
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//void Test()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		 }
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//}
//
//
//int main()
//{
//	//用函数判断素数---打印100-200以内的素数
//	Test();
//
//	return 0;
//}

//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//
//void Test()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//}
//
//
//
//int main()
//{
//	Test();
//
//	return 0;
//}


//int binary_search(int* arr, int k, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//用函数实现二分查找
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组长度
//	int k = 12;//查找的数
//	int ret = binary_search(arr, k, sz);
//	if (ret != -1)
//	{
//		printf("找到了,下标为:%d\n",ret);
//	}
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int hour = 0;
//	int min = 0;
//	int k = 0;
//	scanf("%d:%d %d", &hour, &min, &k);
//	int out_hour = min / 60;
//	int out_min = min % 60;
//	printf("%02d:%02d", hour + out_hour, out_min);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int divisor = 1;
//    int i = 0;
//    int max = m > n ? m : n;
//    int min = m > n ? n : m;
//    for (i = 1; i <= min; i++)
//    {
//        if (n % i == 0 && m % i == 0)
//        {
//            divisor = i;
//        }
//    }
//    int LCM = 0;
//    for (i = max; i > 0; i++)
//    {
//        if (i % m == 0 && i % n == 0)
//        {
//            LCM = i;
//            break;
//        }
//    }
//    printf("%d\n", LCM + divisor);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	long long m = 0;
//	long long n = 0;
//	scanf("%lld %lld",&m, &n);
//	long long a = n;
//	long long b = m;
//	long long tmp = 0;
//	while (tmp = a % b)
//	{
//		a = b;
//		b = tmp;
//	}
//	long long divisor = b;
//	long long LCM = m * n / divisor;
//	printf("%lld\n", LCM + divisor);
//
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = { 0 };
	scanf("%s", arr);
	int len = strlen(arr);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = '0';
		}
		else
		{
			arr[i] = '1';
		}
	}
	printf("%s", arr);
	return 0;
}