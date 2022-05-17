#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//模拟实现strlen

//方法一 - 计数器
//int my_strlen(char* ch)
//{
//	int cout = 0;
//	while (*ch++ != '\0')
//	{
//		cout++;
//	}
//	return cout;
//}


//方法二 - 递归
//int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//	{
//		return 1 + my_strlen(ch + 1);
//	}
//	else
//	{
//		return;
//	}
//}


//方法三 - 指针减指针
//int my_strlen(char* ch)
//{
//	char* tail = ch;
//	while(*tail != '\0')
//	{
//		tail++;
//	}
//	return tail - ch;
//}
//
//
//
//int main()
//{
//	char ch[] = "abcdef";
//	int cout = my_strlen(ch);
//	printf("%d\n", cout);
//
//
//	return 0;
//}



//#include<assert.h>
////模拟实现strcpy
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest);
//	assert(src);
//	
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char ch1[20] = "XXXXXXXXXXXXXXX";
//	char ch2[] = "hello world !";
//	my_strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//
//	return 0;
//}




//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//int main()
//{
//	//双指针完成
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int even = 0;
//	int odd = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[even] % 2 != 0)
//		{
//			int tmp = arr[odd];
//			arr[odd] = arr[even];
//			arr[even] = tmp;
//
//			even++;
//			odd++;
//		}
//		else
//		{
//			even++;
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//打印棱形
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	//打印上半段
	int up = n / 2 + 1;
	for (i = 0; i < up; i++)
	{
		//先打印空格
		for(j=0;j<up-i-1;j++)
		{
			printf("  ");
		}
		//再打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");

	}
	//printf("\n");
	//打印下半段
	int down = n / 2;
	for (i = 0; i < down; i++)
	{
		//先打印空格
		for (j = 0; j < i + 1; j++)
		{
			printf("  ");
		}
		//在打印*
		for (j = 0; j < n - 2 * (i + 1); j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}