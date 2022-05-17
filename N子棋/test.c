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
		//玩家落子
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//ret = is_Win(board, ROW, COL);
		if (is_Win(board, ROW, COL) != 'C')
		{
			break;
		}
		
		//电脑落子
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
		printf("玩家赢\n");
	}
	else if (is_Win(board, ROW, COL) == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
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
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误,请重新选择\n");
		}
	} while (input);



	return 0;
}