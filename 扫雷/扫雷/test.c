#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void menu()
{
	printf("***************************\n");
	printf("*****     1.play      *****\n");
	printf("*****     0.exit      *****\n");
	printf("***************************\n");



}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	BoardInit(mine, ROWS, COLS, '0');
	BoardInit(show, ROWS, COLS, '*');
	BoardSet(mine, ROW, COL);
	BoardPrint(show, ROW, COL);
	//BoardPrint(mine, ROW, COL);

	BoardFunction(mine, show, ROW,COL);


}

int main()
{
	srand((unsigned int)time(NULL));
	int option = 0;
	
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����Ч��������ѡ��\n");
			break;
		}
	} while (option);



	return 0;
}