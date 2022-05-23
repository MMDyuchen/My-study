#define _CRT_SECURE_NO_WARMINGS 1
#include <stdio.h>
#include"game.h"
void menu()
{
	printf("********************\n");
	printf("*****  1.play   ****\n");
	printf("*****  0.exit   ****\n");
	printf("********************\n");
}

void game()
{
	//雷的信息储存
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(mine, ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
	FindMine(mine, show,ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("请重新选择");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
