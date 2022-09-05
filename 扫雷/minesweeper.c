#define _CRT_SECURE_NO_WARNINGS

#define line 10

#define colu 10

#define win (5 - 1)

#include<time.h>

#include<stdio.h>

#include<stdlib.h>

#include <stdlib.h>

#define max 3

int counter = 0;

int coun = 0;

int str[120] = { 0 };

char arr[line][colu] = { " " };

#define ROW 9;

#define LOR 9

char arrr[11][11];

char tmp11[11][11];

char arr1[100] = { 0 };

char arr2[100] = { 0 };

int aaa = 0;

int bb = 0;

int cc = 0;

int tmp = 0;

int tmp1 = 1;

int tmp2 = 1;

int aa = 0;

char tmppp[11][11] = { 0 };



void recursion(int i, int j) {

	for (int rr = 0; rr <= 100; rr++) {

		if (arr1[rr] == i && arr2[rr] == j) {

			return;

		}

	}

	arr1[aa++] = i;

	arr2[bb++] = j;

	if (arr[i - 1][j - 1] != 'X' &&

		arr[i - 1][j] != 'X' &&

		arr[i - 1][j + 1] != 'X' &&

		arr[i][j - 1] != 'X' &&

		arr[i][j + 1] != 'X' &&

		arr[i + 1][j - 1] != 'X' &&

		arr[i + 1][j] != 'X' &&

		arr[i + 1][j + 1] != 'X' && i >= 1 && i <= 9 && j >= 1 && j <= 9) {

		arr[i - 1][j - 1] = ' ';

		arr[i - 1][j] = ' ';

		arr[i - 1][j + 1] = ' ';

		arr[i][j - 1] = ' ';

		arr[i][j + 1] = ' ';

		arr[i + 1][j - 1] = ' ';

		arr[i + 1][j] = ' ';

		arr[i + 1][j + 1] = ' ';





	}

	else {

		return;

	}

	recursion(i - 1, j - 1);

	recursion(i - 1, j);

	recursion(i - 1, j + 1);

	recursion(i, j + 1);

	recursion(i + 1, j + 1);

	recursion(i + 1, j);

	recursion(i + 1, j - 1);

	recursion(i, j - 1);



}





int main()

{

	srand((unsigned)time(NULL));

	for (int i = 0; i < 11; i++) {

		for (int j = 0; j < 11; j++) {

			arr[i][j] = '*';

		}

	}

	int counter = 10; // 埋雷的数量

	while (counter) {

		int x = rand() % 9 + 1;

		int y = rand() % 9 + 1;



		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)

		{

			if (arr[x][y] == '*')

			{

				arr[x][y] = 'X';

				counter--;

			}

		}

	}

	for (int i = 1; i <= 9; i++) {

		for (int j = 1; j <= 9; j++) {

			tmppp[i][j] = ((arr[i - 1][j - 1] +

				arr[i - 1][j] +

				arr[i - 1][j + 1] +

				arr[i][j - 1] +

				arr[i][j + 1] +

				arr[i + 1][j - 1] +

				arr[i + 1][j] +

				arr[i + 1][j + 1] - (8 * 42)) / 46) + 48;

		}

	}

	while (1) {

		int a = 0;

		system("cls");

		printf("\n");

		printf("------扫雷游戏------\n");

		while (a <= 9)

		{

			printf("%d ", a);

			a++;

		}

		printf("\n");



		for (int i = 1; i <= 9; i++) {

			for (int j = 1; j <= 9; j++) {

				if (arr[i][j] != ' ')

				{

					tmp11[i][j] = '*';

				}

				else

				{

					tmp11[i][j] = tmppp[i][j];

				}

			}

		}



		for (int i = 1; i <= 9; i++) {

			printf("%d ", i);

			for (int j = 1; j <= 9; j++) {

				printf("%c ", tmp11[i][j]);

			}

			printf("\n");

		}



		printf("\n输入 -1.-1 返回\n");

		printf("\n请输入坐标->:");



		int i = 0;

		int j = 0;

		scanf("%d.%d", &i, &j);

		if (i == -1, j == -1)

		{

			break;

		}

		if (arr[i][j] == '*')

		{

			arr[i][j] = ' ';

			recursion(i, j);

		}

		else if (arr[i][j] == ' ') {

			printf("\n该坐标非法,请重新输入坐标\n");

			printf("\n任意键继续游戏\n");

			scanf("%d", &tmp);

			continue;

		}

		else {

			system("cls");



			int a = 0;

			printf("------扫雷游戏------\n");

			while (a <= 9)

			{

				printf("%d ", a);

				a++;

			}

			printf("\n");

			for (int i = 1; i <= 9; i++) {

				printf("%d ", i);

				for (int j = 1; j <= 9; j++) {

					printf("%c ", arr[i][j]);

				}

				printf("\n");

			}

			tmp = 0;

			printf("\n");

			printf("很遗憾,由于您输入坐标为 %d.%d 该位置是雷区,您已被炸死!\n", i, j);

			printf("数字 ' X ' 表示雷的位置哦!\n");

			printf("\n任意键继续游戏\n");

			scanf("%d", &tmp);

			break;

		}

	}





	return 0;

}