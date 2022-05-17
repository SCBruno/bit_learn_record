#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"


void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void BoardPrint(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------扫雷游戏-------------------\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------------扫雷游戏-------------------\n");
}

void BoardSet(char board[ROWS][COLS],int row, int col)
{
	int cout = EAZY_COUT;
	while (cout)
	{
		int x = rand() % row + 1;//(0->8)+1 
		int y = rand() % col + 1;//(0->8)+1
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			cout--;
		}
	}
}

int BoardFind(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int cout = 0;
	while (1)
	{
		printf("请输入要排查的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				BoardPrint(mine, ROW, COL);
				return 1;
			}
			else
			{
				BoardFind_Open(mine, show, x, y);
				system("cls");
				BoardPrint(show, ROW, COL);
				return 0;
			}
		}
		else
		{
			printf("输入有误,请重新输入\n");
		}
	}
}



int ShowSet(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
			{
				continue;
			}
			else
			{
				sum += mine[x + i][y + j];
			}
		}
	}
	return sum - 8 * '0';
}


void BoardFind_Open(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	
	char n = ShowSet(mine, x, y)+ '0';
	if (x >= 0 && x <= 10 && y >= 0 && y <= 10)
	{
		if (n != '0')
		{
			show[x][y] = n;
		}
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			int j = 0;
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					if (j == 0 && i == 0)
					{
						continue;
					}
					else
					BoardFind_Open(mine, show, x + i, y + j);
				}
			}
		}
		else
		{
			return;
		}
	}
}


int BoardMark(char mine[ROWS][COLS],char show[ROWS][COLS], int cout)
{
	int x = 0;
	int y = 0;
	if (cout > 0)
	{
		while (1)
		{
			printf("请输入要进行标记的坐标\n");
			scanf("%d %d", &x, &y);
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				break;
			}
			else
			{
				printf("输入有误,请重新输入\n");
			}
		}
	}
	else
	{
		printf("标记次数已用完\n");
	}

	if (show[x][y] == '#' && mine[x][y] == '1')
	{
		return 1;
	}
	return 0;
}


void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int cout = EAZY_COUT;
	int win_sum = 0;
	int ret = 0;
	int option = 0;
	int n = 0;
	do
	{
		printf("1.扫雷\n");
		printf("2.标记\n");
		printf("3.取消标记\n");
		printf("0.判断成功与否\n");
		printf("请选择\n");
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			 n = BoardFind(mine, show, row, col);
			break;
		case 2:
		{
			win_sum += BoardMark(mine,show,cout);
			system("cls");
			BoardPrint(show, row, col);
			cout--;
			break;
		}
		case 3:
		{
			if (cout < EAZY_COUT)
			{
				win_sum -= BoardUnmark(mine,show);
				BoardPrint(show, row, col);
				cout++;
			}
			else
			{
				printf("您还未进行过标记\n");
			}
			break;
		}
		case 0:
		{
			if (cout)
			{
				printf("你还有标记次数没有使用\n");
				option = 1;
			}
			else
				ret = is_win(win_sum);
			break;
		}
		}
		if (n == 1)
		{
			break;
		}
	} while (option);

	if (ret == 1)
	{
		printf("恭喜你扫雷成功\n");
		BoardPrint(mine, ROW, COL);

	}
	else
	{
		printf("很遗憾,扫雷失败\n");
		BoardPrint(mine, ROW, COL);

	}


}



int BoardUnmark(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int x = 0;
	int y = 0;
	int ret = 0;
	while (1)
	{
		printf("请输入要撤回的标记的坐标\n");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '#')
		{
			if (show[x][y] == '#' && mine[x][y] == '1')
			{
				ret = 1;
			}
			show[x][y] = '*';
			break;
		}
		else
		{
			printf("该位置没被标记，请重新输入\n");
		}
	}
	return ret;
}

int is_win(int cout)
{
	if (cout == EAZY_COUT)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}