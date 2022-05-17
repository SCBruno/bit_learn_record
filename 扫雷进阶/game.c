#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
//形参分别为二维数组，行，列，初始化需要设置的字符
{
	int i = 0;//行
	int j = 0;//列
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
	printf("----------扫雷游戏-----------\n");

	for (i = 0; i <= row; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c  ", board[i][j]);
		}
		printf("\n");//每隔一行就换行
	}
	printf("----------扫雷游戏-----------\n");
}

void BoardSet(char mine[ROWS][COLS], int row, int col)//只需要将雷存放在玩家所能看到的9*9棋盘中便可
{
	int cout = EAZY_COUT;
	while (cout)
	{

		int x = rand() % row + 1;//炸弹坐标从 1 -> 9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')//避免在相同坐标下设雷
		{
			mine[x][y] = '1';//用1表示炸弹
			cout--;
		}
	}
}

void BoardFunction(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int option = 0;;
	int cout = EAZY_COUT;
	int over = 0;
	int win_cout = 0;
	int ret = 0;
	do
	{
		printf("1.扫雷\n");
		printf("2.标记\n");
		printf("3.取消标记\n");
		printf("0.判断输赢\n");
		printf("请选择:>\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			over = BoardFind(mine, show);
			break;
		case 2:
		{
			if (cout != 0)
			{
				win_cout += BoardMark(mine, show, cout);
				cout--;
			}
			else
			{
				printf("你的标记次数已用完\n");
			}
			break;
		}
		case 3:
		{
			if (cout != EAZY_COUT)
			{
				win_cout += BoardUnMark(mine, show, cout);
				cout++;
				break;
			}
			else
			{
				printf("你未进行过标记\n");
			}
		}
		case 0:
		{
			if (cout != 0)
			{
				printf("你还有标记未使用\n");
				option = 1;
			}
			else
			{
				ret = is_win(win_cout);
			}
			break;
		}
		default:
			printf("选择无效,请重新输入\n");
			break;
		}
		if (over)
		{
			break;
		}
		system("cls");
		BoardPrint(mine, ROW, COL);
		BoardPrint(show, ROW, COL);
	} while (option);
	if (over)
	{
		printf("很遗憾你被炸死了\n");
		BoardPrint(mine, ROW, COL);

	}
	if (cout == 0)
	{
		if (ret)
		{
			printf("恭喜你扫雷成功\n");
			BoardPrint(mine, ROW, COL);

		}
		else
		{
			printf("很遗憾扫雷失败\n");
			BoardPrint(mine, ROW, COL);
		}
	}
}



int BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS])//排雷过程
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入要排雷的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				return 1;
			}
			else
			{
				BoardFind_Open(mine, show, x, y);
				BoardPrint(show, ROW, COL);
				return 0;

			}
		}
	}
}

int ShowThunder(char mine[ROWS][COLS], int x, int y)//检测八方的雷的个数
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (j == 0 && i == 0)
			{
				continue;
			}
			else
			{
				sum += mine[x + i][y + j];//将除原本坐标外的八个方向的字符对应的ASCII码加起来
			}
		}
	}
	return sum - 8 * '0';//'1' - '0' == 1,若有8个雷则返回8;返回存在的雷的个数
}

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 0 && x <= ROWS && y >= 0 && y <= COLS)
	{
		int n = ShowThunder(mine, x, y) + '0';//该坐标八方的雷的个数
		if (n != '0')
		{
			show[x][y] = n;
		}
		else if(show[x][y] != ' ')
		{
			int i = 0;
			int j = 0;
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
						show[x][y] = ' ';
						BoardFind_Open(mine, show, x + i, y+j);
					}
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
	
		while (1)
		{
			printf("请输入你要标记的坐标\n");
			scanf("%d %d", &x, &y);
			if (show[x][y] == '*')
			{
				show[x][y] = '#';
				if (mine[x][y] == '1')
				{
					return 1;
				}
				return 0;
			}
			else
			{
				if (show[x][y] == '#')
				{
					printf("该坐标已被标记\n");
				}
				else
				{
					printf("该坐标无法标记\n");
				}
			}
		}
}


int BoardUnMark(char mine[ROWS][COLS], char show[ROWS][COLS], int cout)
{
	int x = 0;
	int y = 0;

		while (1)
		{
			printf("请输入你要取消标记的坐标\n");
			scanf("%d %d", &x, &y);
			if (show[x][y] == '#')
			{
				show[x][y] = '*';
				if (mine[x][y] == '1')
				{
					return -1;
				}
				return 0;
			}
			else
			{
				printf("该坐标未进行过标记\n");
			}
		}
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