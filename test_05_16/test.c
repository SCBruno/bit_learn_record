#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ģ��ʵ��strlen

//����һ - ������
//int my_strlen(char* ch)
//{
//	int cout = 0;
//	while (*ch++ != '\0')
//	{
//		cout++;
//	}
//	return cout;
//}


//������ - �ݹ�
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


//������ - ָ���ָ��
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
////ģ��ʵ��strcpy
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




//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//int main()
//{
//	//˫ָ�����
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




//��ӡ����
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	//��ӡ�ϰ��
	int up = n / 2 + 1;
	for (i = 0; i < up; i++)
	{
		//�ȴ�ӡ�ո�
		for(j=0;j<up-i-1;j++)
		{
			printf("  ");
		}
		//�ٴ�ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");

	}
	//printf("\n");
	//��ӡ�°��
	int down = n / 2;
	for (i = 0; i < down; i++)
	{
		//�ȴ�ӡ�ո�
		for (j = 0; j < i + 1; j++)
		{
			printf("  ");
		}
		//�ڴ�ӡ*
		for (j = 0; j < n - 2 * (i + 1); j++)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}

	return 0;
}