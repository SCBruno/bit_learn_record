#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };//用来存放雷的 --> 0表示无雷，雷用1表示
	char show[ROWS][COLS] = { 0 };//显示给玩家看的

	BoardInit(mine, ROWS, COLS, '0');//全部初始化为0，表示无雷
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
	int input = 0;//选择
	do
	{
		menu();
		printf("请选择>\n");//提示玩家选择
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//实现扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择有误,请重新选择\n");
			break;
		}
	} while (input);

}

int main()
{
	srand((unsigned int)time(NULL));
	Test();//三子棋游戏测试

	return 0;
}