#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//
//
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	//������
//	char password[20] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef")== 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			if(i < 2)
//			printf("�����������������\n");
//		}
//	}
//	if(i == 3)
//	printf("�˺�������\n");
//
//	return 0;
//}


//
//void Swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ: a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������: a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//void Mult_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	//��ӡ�˷��ھ��������Զ�
//	int n = 0;
//	printf("������Ҫ��ӡ�ھ��������\n");
//	scanf("%d", &n);
//	Mult_table(n);
//
//	return 0;
//}


#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("**************************\n");
	printf("******  1.play      ******\n");
	printf("******  0.exit      ******\n");
	printf("**************************\n");


}

void game()
{
	int ret = rand()%100 + 1;
	int guess = 0;
	printf("���1-100�ڲ�����\n");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}

}


//int main()
//{
//	srand((unsigned int)time(NULL));
//	int n = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>(1/0)\n");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������������������\n");
//		}
//	} while (n);
//
//
//	return 0;
//}


int main()
{
	int a;
	float b;
	scanf("%d %f", &a, &b);
	printf("%f", a + b);


	return 0;
}