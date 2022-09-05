#include"game.h"
int tmp = 0;
int tmp1 = 1;
int tmp2 = 1;
int main()
{
	initchessboard();
	do {
		int tmp1 = 1;
		system("cls");
		menu();
		printf("\n您的选择->:");
		scanf("%d", &tmp);
		switch (tmp)
		{
		case 0:

			tmp = 1;

			menu2();

			menu3();

			tmp = menu4();

			break;



		case 1:

			while (tmp1)

			{

				tmp2 = 1;

				if (!(tmp1 = menu1()))

				{

					break;

				}

				if (tmp1 == 1) {

					while (tmp2)

					{

						meun5();

						print_board();

						tmp2 = gamer();

						if (judgment())

						{

							Who_wins();

							break;

						}

						if (tmp2 != -0)

						{

							ai();

						}

						if (judgment())

						{

							Who_wins();

							break;

						}

					}

				}

				if (tmp1 == 2)

				{

					AIprecedence();

				}

				if (tmp1 == 3)

				{

					Onboarding();

				}

				if (tmp1 == 4)

				{

					Save();

				}

			}

			break;



		case 2:

			Onboarding();

			break;



		case 3:

			Save();

			break;



		case 4:

			meun6();

			break;



		case 5:

			initchessboard();

			printf("\n刷新成功,任意键继续游戏\n");

			int a = 0;

			scanf("%d", &a);

			break;

		}

	} while (tmp);



	return 0;

}