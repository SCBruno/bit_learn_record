#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char board[ROW][COL];
	Init(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;

	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//ret = is_Win(board, ROW, COL);
		if (is_Win(board, ROW, COL) != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//ret = is_Win(board, ROW, COL);
		if (is_Win(board, ROW, COL) != 'C')
		{
			break;
		}
	}
	if (is_Win(board, ROW, COL) == '*')
	{
		printf("���Ӯ\n");
	}
	else if (is_Win(board, ROW, COL) == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void menu()
{
	printf("**************************\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����,������ѡ��\n");
		}
	} while (input);



	return 0;
}