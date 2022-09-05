#define _CRT_SECURE_NO_WARNINGS

#define line 10

#define colu 10

#include<time.h>

#include<stdio.h>

#include<stdlib.h>

#include <windows.h>

#include <stdlib.h>

#define max 3

int coun = 0;

int str[120] = { 0 };

char arr[line][colu] = { " " };



void menu()

{

	printf("****************************\n");

	printf("***   0.退出游戏   ***\n");

	printf("***   1.开始游戏   ***\n");

	printf("***   2.载入存档   ***\n");

	printf("***   3.保存游戏   ***\n");

	printf("***   4.游戏教程   ***\n");

	printf("***   5.刷新棋盘   ***\n");

	printf("****************************\n");

}



void initchessboard()

{

	for (int i = 0; i < line; i++)

	{

		for (int j = 0; j < colu; j++)

		{

			arr[i][j] = ' ';

		}

	}

}



void print_board()

{

	int i = 0;

	printf("\n\n");

	for (i = 0; i < line; i++)

	{

		for (int j = 0; j < colu; j++)

		{

			if (j < colu - 1)

			{

				printf(" %c |", arr[i][j]);

			}

			else {

				printf(" %c\n", arr[i][j]);

			}

		}

		if (i < line - 1)

		{

			for (int i = 0; i < colu; i++)

			{

				printf("---");

				if (i < colu - 1)

				{

					printf("|");

				}

			}

			printf("\n");

		}

	}

	printf("\n");

}



int menu1()

{

	system("cls");

	printf("****************************\n");

	printf("***   0.返回     ***\n");

	printf("***   1.您优先    ***\n");

	printf("***   2.电脑优先   ***\n");

	printf("***   3.载入存档   ***\n");

	printf("***   4.保存游戏   ***\n");

	printf("****************************\n");



	printf("\n您的选择->:");

	int tmp = 0;

	scanf("%d", &tmp);

	return tmp;

}



void menu2()

{

	system("cls");

	printf("您真的要退出吗?\n");

	Sleep(1500);

	system("cls");



	printf("****************************\n");

	printf("***   0.挽留     ***\n");

	printf("***   1.在玩会儿   ***\n");

	printf("***   2.不用了,谢谢. ***\n");

	printf("***   3.狠心离开   ***\n");

	printf("****************************\n");

}



void menu3()

{

	printf("\n您的选择->:");

	int tmp = 0;

	scanf("%d", &tmp);

	if (tmp == 3)

	{

		system("cls");

		printf("*************************************************\n");

		printf("***  亲!请留下您的宝贵意见,我们会努力改进的 ***\n");

		printf("***                      ***\n");

		printf("***   0.选择完成              ***\n");

		printf("***   1.不好玩               ***\n");

		printf("***   2.体验差               ***\n");

		printf("***   3.口碑差               ***\n");

		printf("***   4.不会玩               ***\n");

		printf("***   5.玩法单一              ***\n");

		printf("***   6.有更好玩的游戏           ***\n");

		printf("***   7.服务器不稳定            ***\n");

		printf("***   8.电脑太弱智             ***\n");

		printf("***   9.电脑太强              ***\n");

		printf("***   10.玩腻了              ***\n");

		printf("***   11.好玩,通关了            ***\n");

		printf("***   12.太肝了              ***\n");

		printf("***   13.坚持退出             ***\n");

		printf("***   14.不喜欢这个界面          ***\n");

		printf("***   15.我要继续玩            ***\n");

		printf("***   16.游戏卡住了            ***\n");

		printf("***   17.bug多               ***\n");

		printf("***   18.后悔了 我要继续玩         ***\n");

		printf("***   19.点错 我要保存游戏         ***\n");

		printf("***   20.广告多              ***\n");

		printf("***                      ***\n");

		printf("*************************************************\n");

		int i = 0;

		while (tmp || i < 100)

		{

			printf("\n您的选择(多选)->:");

			scanf("%d", &tmp);

			if (tmp == 0)

			{

				printf("\n选择已完成");

				break;

			}

			if (0 < tmp && tmp <= 20)

			{

				str[i] = tmp;

			}

			else

			{

				printf("\n非法取值范围!!!\n");

				printf("\n亲!请输入 0 ~ 20 之间的数字哦,[0,20]\n");

			}

		}

		return;

	}

	printf("\n感谢您的支持 我们会持续优化程序的.");

}



int menu4()

{

	for (int i = 0; i < max; i++)

	{

		if (str[i] == 13)

		{

			printf("\n以退出游戏");

			return 0;

		}

	}

	printf("\n我们以成功收到您的宝贵建议,再次感谢您对我们的支持\n\n");

	printf("\n任意键继续游戏\n");

	int a = 0;

	scanf("%d", &a);

}



int gamer()

{

	int x = 0;

	int y = 0;

	int cou = 1;

	while (cou)

	{

		printf("\n请输入 棋盘的坐标(取值范围在%d~%d,[%d,%d])->:", line, colu, line, colu);

		scanf("%d.%d", &x, &y);

		if (x == -1 && y == -1)

		{

			return 0;

		}

		if ((0 < x && x <= line) && (0 < y && y <= colu))

		{

			if (arr[x - 1][y - 1] == ' ')

			{

				arr[x - 1][y - 1] = 'O';

				return 1;

			}

			else

			{

				printf("该位置已经被下过棋子啦!");

				printf("\n任意键继续游戏\n");

				cou = 0;

				int a = 0;

				scanf("%d", &a);

				return -1;

			}

		}

		else

		{

			printf("坐标非法!");

			printf("\n任意键继续游戏\n");

			cou = 0;

			int a = 0;

			scanf("%d", &a);

			return -1;

		}

	}

	return 1;

}



void meun5()

{

	system("cls");

	printf("****************************\n");

	printf("***  输入 -1.-1 返回  ***\n");

	printf("****************************\n");

}



void ai()

{

	while (1)

	{

		srand((unsigned int)time(NULL));

		int row = rand() % line;

		int col = rand() % colu;

		if (arr[row][col] != ' ')

		{

			continue;

		}

		arr[row][col] = 'X';

		break;

	}

}



int judgment()

{

	coun = 0;

	for (int i = 0; i < line; i++)

	{

		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][2] != ' '))

		{

			if (arr[i][0] == 'X')

			{

				return 3;

			}

			if (arr[i][0] == 'O')

			{

				return 2;

			}

		}

	}

	for (int j = 0; j < colu; j++)

	{

		if ((arr[0][j] == arr[1][j]) && (arr[1][j] == arr[2][j]) && (arr[2][j] != ' '))

		{

			if (arr[0][j] == 'X')

			{

				return 3;

			}

			if (arr[0][j] == 'O')

			{

				return 2;

			}

		}

	}

	if ((arr[0][0] == arr[1][1]) && (arr[2][2] == arr[1][1]) && (arr[1][1] != ' '))

	{

		if (arr[0][0] == 'X')

		{

			return 3;

		}

		if (arr[0][0] == 'O')

		{

			return 2;

		}

	}

	if ((arr[0][2] == arr[1][1]) && (arr[2][0] == arr[1][1]) && (arr[1][1] != ' '))

	{

		if (arr[1][1] == 'X')

		{

			return 3;

		}

		if (arr[1][1] == 'O')

		{

			return 2;

		}

	}

	for (int i = 0; i < line; i++)

	{

		for (int j = 0; j < colu; j++)

		{

			if (arr[i][j] == ' ')

			{

				coun++;

			}

		}

	}

	if (coun == 0)

	{

		return 1;

	}

	return 0;

}



void Who_wins()

{

	if (judgment() == 3)

	{

		print_board();

		printf("\n很遗憾,电脑赢了,希望您再接再厉!\n");

		printf("\n任意键继续游戏\n");

		initchessboard();

		int a = 0;

		scanf("%d", &a);

	}

	else if (judgment() == 2)

	{

		print_board();

		printf("\n恭喜您,您赢了,即使是阿尔法狗也不会是您的对手!\n");

		printf("\n任意键继续游戏\n");

		initchessboard();

		int a = 0;

		scanf("%d", &a);

	}

	else if (judgment() == 1)

	{

		print_board();

		printf("\n平局啦! 非常精彩的对局\n");

		printf("\n任意键继续游戏\n");

		initchessboard();

		int a = 0;

		scanf("%d", &a);

	}

}



void meun6()

{

	system("cls");

	printf("*******************************************************************************************************\n");

	printf("***                                                 ***\n");

	printf("***   三字棋介绍->:                                       ***\n");

	printf("***   三字棋是黑白棋的一种。三子棋是一种民间传统游戏，                      ***\n");

	printf("***   三字棋 又叫九宫棋、圈圈叉叉、一条龙、 井字棋等。                      ***\n");

	printf("***   将正方形对角线连起来，相对两边依次摆上三个双方棋子，                    ***\n");

	printf("***  只要将自己的三个棋子走成一条线，对方就算输了。                       ***\n");

	printf("***   但是，有很多时候会出现和棋的情况                              ***\n");

	printf("***                                                 ***\n");

	printf("***   玩法介绍->:                                        ***\n");

	printf("***   输入要落子位置的坐标,例如第一行,第一列的坐标是 1,1 那么就需要输入             ***\n");

	printf("***   1,1才能将棋子落到1,1的位置(以左上角为基准,左上角为第一行,也是第一列)            ***\n");

	printf("***                                                 ***\n");

	printf("*******************************************************************************************************\n");



	printf("演示如下:\n");

	printf("这里就是第一行,第一列咯,坐标位置是1.1->:__|___|__\n");

	printf("                    __|___|__\n");

	printf("                     |  | \n");



	printf("\n任意键继续游戏\n");

	int a = 0;

	scanf("%d", &a);

}



void Save()

{

	FILE* fp1 = fopen("input.txt", "w");

	if (fp1 == NULL || fp1 == NULL) {

		puts("打开文件失败！");

		printf("\n任意键继续游戏\n");

		int a = 0;

		scanf("%d", &a);

		return;

	}

	for (int i = 0; i < line; i++)

	{

		for (int j = 0; j < colu; j++) {

			fprintf(fp1, "%d", arr[i][j]);

		}

	}

	fclose(fp1);

	printf("\n保存成功\n");

	printf("\n任意键继续游戏\n");

	int a = 0;

	scanf("%d", &a);

	return;

}



void Onboarding()

{

	FILE* fp1 = fopen("input.txt", "rb");

	if (fp1 == NULL || fp1 == NULL) {

		puts("打开文件失败！");

		printf("\n任意键继续游戏\n");

		int a = 0;

		scanf("%d", &a);

		return;

	}

	char arrr[1000] = { 0 };

	fread(arrr, 1, (line * colu * 2), fp1);

	int k = 0;

	int c = 0;

	for (int i = 0; i < line; i++)

	{

		for (int j = 0; j < colu; j++)

		{

			int z = arrr[k];

			int x = arrr[k + 1];



			arr[i][j] = ((z - 48) * 10) + (x - 48);

			k += 2;

		}

	}

	fclose(fp1);

	printf("\n载入存档成功\n");

	printf("\n任意键继续游戏\n");

	int a = 0;

	scanf("%d", &a);

	return;

}



void AIprecedence()

{



}