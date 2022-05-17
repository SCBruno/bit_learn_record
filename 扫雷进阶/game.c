#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void BoardInit(char board[ROWS][COLS], int rows, int cols, char set)
//�βηֱ�Ϊ��ά���飬�У��У���ʼ����Ҫ���õ��ַ�
{
	int i = 0;//��
	int j = 0;//��
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
	printf("----------ɨ����Ϸ-----------\n");

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
		printf("\n");//ÿ��һ�оͻ���
	}
	printf("----------ɨ����Ϸ-----------\n");
}

void BoardSet(char mine[ROWS][COLS], int row, int col)//ֻ��Ҫ���״����������ܿ�����9*9�����б��
{
	int cout = EAZY_COUT;
	while (cout)
	{

		int x = rand() % row + 1;//ը������� 1 -> 9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')//��������ͬ����������
		{
			mine[x][y] = '1';//��1��ʾը��
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
		printf("1.ɨ��\n");
		printf("2.���\n");
		printf("3.ȡ�����\n");
		printf("0.�ж���Ӯ\n");
		printf("��ѡ��:>\n");
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
				printf("��ı�Ǵ���������\n");
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
				printf("��δ���й����\n");
			}
		}
		case 0:
		{
			if (cout != 0)
			{
				printf("�㻹�б��δʹ��\n");
				option = 1;
			}
			else
			{
				ret = is_win(win_cout);
			}
			break;
		}
		default:
			printf("ѡ����Ч,����������\n");
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
		printf("���ź��㱻ը����\n");
		BoardPrint(mine, ROW, COL);

	}
	if (cout == 0)
	{
		if (ret)
		{
			printf("��ϲ��ɨ�׳ɹ�\n");
			BoardPrint(mine, ROW, COL);

		}
		else
		{
			printf("���ź�ɨ��ʧ��\n");
			BoardPrint(mine, ROW, COL);
		}
	}
}



int BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS])//���׹���
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������Ҫ���׵�����\n");
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

int ShowThunder(char mine[ROWS][COLS], int x, int y)//���˷����׵ĸ���
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
				sum += mine[x + i][y + j];//����ԭ��������İ˸�������ַ���Ӧ��ASCII�������
			}
		}
	}
	return sum - 8 * '0';//'1' - '0' == 1,����8�����򷵻�8;���ش��ڵ��׵ĸ���
}

void BoardFind_Open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 0 && x <= ROWS && y >= 0 && y <= COLS)
	{
		int n = ShowThunder(mine, x, y) + '0';//������˷����׵ĸ���
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
			printf("��������Ҫ��ǵ�����\n");
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
					printf("�������ѱ����\n");
				}
				else
				{
					printf("�������޷����\n");
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
			printf("��������Ҫȡ����ǵ�����\n");
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
				printf("������δ���й����\n");
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