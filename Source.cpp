#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	bool Result1 = true;
	bool REsult2 = false;
	bool REsult3 = false;

	//연산자 우선 순위 ,산술, 논리, 비교
	//() 안에 들어있는게 가장 먼저
	// cout << ((Result1 || REsult2) && REsult3)<< endl; 를 풀어쓴게 위에것

	bool Temp(Result1 || REsult2);
	Temp = Temp && REsult3 && (10 > 3);

	cout << Temp << endl;
//
	if (Result1 && REsult2) //두 조건 모두 참
	{
		cout << "안녕" << endl;
	}

	if (Result1 || REsult2)//둘중 하나만 참 
	{
		cout << "안녕2" << endl;
	}
	if (!REsult2) //! = not
	{
		cout << "안녕3" << endl;
	}

	return 0;
}