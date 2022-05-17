#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
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

//��ӡ����
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


//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;//��
	int y = 0;//��
	printf("�������;>\n");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("�������ѱ�ռ��\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����������Ч,����������\n");
		}
	}
}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	while (1)
	{
		x = rand() % row;//�� 0-2
		y = rand() % col;//�� 0-2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж���Ӯ
//1.���Ӯ����'*'    2.����Ӯ����'#'    3.ƽ�ַ��� 'Q'   4.�������� 'C'
char is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0;//��
	int j = 0;//��
	int cout = 0;

	//�ж���
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


	//�ж���
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

	
	//�ж϶Խ���

	//1.���ϵ�����
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

	//2.���ϵ�����
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


	//�ж��Ƿ�ƽ��
	if (is_Full(board, row, col))
	{
		return 'Q';
	}

	//����
	return 'C';
}


//�ж������Ƿ����ˣ����˷���1����������0
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