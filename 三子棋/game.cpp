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

	printf("***   0.�˳���Ϸ   ***\n");

	printf("***   1.��ʼ��Ϸ   ***\n");

	printf("***   2.����浵   ***\n");

	printf("***   3.������Ϸ   ***\n");

	printf("***   4.��Ϸ�̳�   ***\n");

	printf("***   5.ˢ������   ***\n");

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

	printf("***   0.����     ***\n");

	printf("***   1.������    ***\n");

	printf("***   2.��������   ***\n");

	printf("***   3.����浵   ***\n");

	printf("***   4.������Ϸ   ***\n");

	printf("****************************\n");



	printf("\n����ѡ��->:");

	int tmp = 0;

	scanf("%d", &tmp);

	return tmp;

}



void menu2()

{

	system("cls");

	printf("�����Ҫ�˳���?\n");

	Sleep(1500);

	system("cls");



	printf("****************************\n");

	printf("***   0.����     ***\n");

	printf("***   1.������   ***\n");

	printf("***   2.������,лл. ***\n");

	printf("***   3.�����뿪   ***\n");

	printf("****************************\n");

}



void menu3()

{

	printf("\n����ѡ��->:");

	int tmp = 0;

	scanf("%d", &tmp);

	if (tmp == 3)

	{

		system("cls");

		printf("*************************************************\n");

		printf("***  ��!���������ı������,���ǻ�Ŭ���Ľ��� ***\n");

		printf("***                      ***\n");

		printf("***   0.ѡ�����              ***\n");

		printf("***   1.������               ***\n");

		printf("***   2.�����               ***\n");

		printf("***   3.�ڱ���               ***\n");

		printf("***   4.������               ***\n");

		printf("***   5.�淨��һ              ***\n");

		printf("***   6.�и��������Ϸ           ***\n");

		printf("***   7.���������ȶ�            ***\n");

		printf("***   8.����̫����             ***\n");

		printf("***   9.����̫ǿ              ***\n");

		printf("***   10.������              ***\n");

		printf("***   11.����,ͨ����            ***\n");

		printf("***   12.̫����              ***\n");

		printf("***   13.����˳�             ***\n");

		printf("***   14.��ϲ���������          ***\n");

		printf("***   15.��Ҫ������            ***\n");

		printf("***   16.��Ϸ��ס��            ***\n");

		printf("***   17.bug��               ***\n");

		printf("***   18.����� ��Ҫ������         ***\n");

		printf("***   19.��� ��Ҫ������Ϸ         ***\n");

		printf("***   20.����              ***\n");

		printf("***                      ***\n");

		printf("*************************************************\n");

		int i = 0;

		while (tmp || i < 100)

		{

			printf("\n����ѡ��(��ѡ)->:");

			scanf("%d", &tmp);

			if (tmp == 0)

			{

				printf("\nѡ�������");

				break;

			}

			if (0 < tmp && tmp <= 20)

			{

				str[i] = tmp;

			}

			else

			{

				printf("\n�Ƿ�ȡֵ��Χ!!!\n");

				printf("\n��!������ 0 ~ 20 ֮�������Ŷ,[0,20]\n");

			}

		}

		return;

	}

	printf("\n��л����֧�� ���ǻ�����Ż������.");

}



int menu4()

{

	for (int i = 0; i < max; i++)

	{

		if (str[i] == 13)

		{

			printf("\n���˳���Ϸ");

			return 0;

		}

	}

	printf("\n�����Գɹ��յ����ı�����,�ٴθ�л�������ǵ�֧��\n\n");

	printf("\n�����������Ϸ\n");

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

		printf("\n������ ���̵�����(ȡֵ��Χ��%d~%d,[%d,%d])->:", line, colu, line, colu);

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

				printf("��λ���Ѿ����¹�������!");

				printf("\n�����������Ϸ\n");

				cou = 0;

				int a = 0;

				scanf("%d", &a);

				return -1;

			}

		}

		else

		{

			printf("����Ƿ�!");

			printf("\n�����������Ϸ\n");

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

	printf("***  ���� -1.-1 ����  ***\n");

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

		printf("\n���ź�,����Ӯ��,ϣ�����ٽ�����!\n");

		printf("\n�����������Ϸ\n");

		initchessboard();

		int a = 0;

		scanf("%d", &a);

	}

	else if (judgment() == 2)

	{

		print_board();

		printf("\n��ϲ��,��Ӯ��,��ʹ�ǰ�������Ҳ���������Ķ���!\n");

		printf("\n�����������Ϸ\n");

		initchessboard();

		int a = 0;

		scanf("%d", &a);

	}

	else if (judgment() == 1)

	{

		print_board();

		printf("\nƽ����! �ǳ����ʵĶԾ�\n");

		printf("\n�����������Ϸ\n");

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

	printf("***   ���������->:                                       ***\n");

	printf("***   �������Ǻڰ����һ�֡���������һ����䴫ͳ��Ϸ��                      ***\n");

	printf("***   ������ �ֽоŹ��塢ȦȦ��桢һ������ ������ȡ�                      ***\n");

	printf("***   �������ζԽ���������������������ΰ�������˫�����ӣ�                    ***\n");

	printf("***  ֻҪ���Լ������������߳�һ���ߣ��Է��������ˡ�                       ***\n");

	printf("***   ���ǣ��кܶ�ʱ�����ֺ�������                              ***\n");

	printf("***                                                 ***\n");

	printf("***   �淨����->:                                        ***\n");

	printf("***   ����Ҫ����λ�õ�����,�����һ��,��һ�е������� 1,1 ��ô����Ҫ����             ***\n");

	printf("***   1,1���ܽ������䵽1,1��λ��(�����Ͻ�Ϊ��׼,���Ͻ�Ϊ��һ��,Ҳ�ǵ�һ��)            ***\n");

	printf("***                                                 ***\n");

	printf("*******************************************************************************************************\n");



	printf("��ʾ����:\n");

	printf("������ǵ�һ��,��һ�п�,����λ����1.1->:__|___|__\n");

	printf("                    __|___|__\n");

	printf("                     |  | \n");



	printf("\n�����������Ϸ\n");

	int a = 0;

	scanf("%d", &a);

}



void Save()

{

	FILE* fp1 = fopen("input.txt", "w");

	if (fp1 == NULL || fp1 == NULL) {

		puts("���ļ�ʧ�ܣ�");

		printf("\n�����������Ϸ\n");

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

	printf("\n����ɹ�\n");

	printf("\n�����������Ϸ\n");

	int a = 0;

	scanf("%d", &a);

	return;

}



void Onboarding()

{

	FILE* fp1 = fopen("input.txt", "rb");

	if (fp1 == NULL || fp1 == NULL) {

		puts("���ļ�ʧ�ܣ�");

		printf("\n�����������Ϸ\n");

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

	printf("\n����浵�ɹ�\n");

	printf("\n�����������Ϸ\n");

	int a = 0;

	scanf("%d", &a);

	return;

}



void AIprecedence()

{



}