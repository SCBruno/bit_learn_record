#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘
void Init(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		if (i != row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j != col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}


//玩家落子
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;//行
	int y = 0;//列
	printf("玩家落子;>\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("该坐标已被占用\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标无效,请重新输入\n");
		}
	}
}

//电脑落子
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑落子\n");
	while (1)
	{
		x = rand() % row;//行 0-2
		y = rand() % col;//列 0-2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断输赢
//1.玩家赢返回'*'    2.电脑赢返回'#'    3.平局返回 'Q'   4.继续返回 'C'
char is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0;//行
	int j = 0;//列
	int cout = 0;

	//判断行
	for (i = 0; i < row; i++)
	{
		cout = 0;
		for (j = 0; j < col; j++)
		{
			if (j != col - 1)
			{
				if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
				{
					cout++;
				}
			}
			if (cout == col - 1)
			{
				return board[i][j];
			}
		}
	}


	//判断列
	cout = 0;
	for (j = 0; j < col; j++)
	{
		cout = 0;
		for (i = 0; i < row; i++)
		{
			if (i != row - 1)
			{
				if (board[i][j] == board[i + 1][j] && board[i][j] != ' ')
				{
					cout++;
				}
			}
			if (cout == row - 1)
			{
				return board[i][j];
			}
		}
	}

	
	//判断对角线

	//1.右上到左下
	cout = 0;
	for (i = 0, j = col - 1; i<row && j >= 0; i++, j--)
	{
		
		if (i < row - 1 && j >0)
		{
			if (board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
			{
				cout++;
			}
		}
		if (cout == row - 1)
		{
			return board[i][j];
		}
	}

	//2.左上到右下
	cout = 0;
	for (i = 0; i < row; i++)
	{
		if (i < row - 1)
		{
			if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ')
			{
				cout++;
			}
			if (cout == row - 1)
			{
				return board[i][i];
			}
		}
	}


	//判断是否平局
	if (is_Full(board, row, col))
	{
		return 'Q';
	}

	//继续
	return 'C';
}


//判断棋盘是否满了，满了返回1，不满返回0
int is_Full(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;

}