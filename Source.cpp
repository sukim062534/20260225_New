#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//2차원 맵
	int Map[10][10]{

		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

	};

	int PlayerX = 1;
	int PlayerY = 1;

	for (;;) //Frame, GameLoop
	{
		for (int Y = 0; Y < 10; ++Y) //Render
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y) // && - 앞에 조건과 뒤에 조건이 모두 참일때 사용
				{
					cout << "%";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}

			
			}

			cout << endl;
		}

		int Input;//input
		Input = _getch(); //'w', 'a', 's','d'
		//Process
		if (Input == 'w')
		{
			PlayerY--;
			
		}
		
		if (Input == 's')
		{
			PlayerY++;
		}
		if (Input == 'a')
		{
			PlayerX--;
		}
		if (Input == 'd')
		{
			PlayerX++;
		}
		

		system("cls");//실행된 화면 사라짐	

	}
	return 0;
}