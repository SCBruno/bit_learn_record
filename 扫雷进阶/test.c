#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };//��������׵� --> 0��ʾ���ף�����1��ʾ
	char show[ROWS][COLS] = { 0 };//��ʾ����ҿ���

	BoardInit(mine, ROWS, COLS, '0');//ȫ����ʼ��Ϊ0����ʾ����
	BoardInit(show, ROWS, COLS, '*');
	BoardPrint(show, ROW, COL);
	BoardSet(mine, ROW, COL);
	BoardFunction(mine,show);
}


void menu()
{
	printf("**************************\n");
	printf("*******   1.play   *******\n");
	printf("*******   0.exit   *******\n");
	printf("**************************\n");
}

void Test()
{
	int input = 0;//ѡ��
	do
	{
		menu();
		printf("��ѡ��>\n");//��ʾ���ѡ��
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ʵ��ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ������,������ѡ��\n");
			break;
		}
	} while (input);

}

int main()
{
	srand((unsigned int)time(NULL));
	Test();//��������Ϸ����

	return 0;
}