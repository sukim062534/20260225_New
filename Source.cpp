#include <iostream>

using namespace std;

int main() // 메모리에 저장된건 다 숫자이다.
{
	char Temp = 65;// 아스키코드 65를 넣어도 A 출력 
	cout << Temp;

	char Temp = 'A'; //  A 출력 
	cout << Temp;

	char Temp = 65 + 1; //B 출력
	cout << Temp;

	char Temp = 'A' + 1; //B 출력
	cout << Temp;

	return 0;
}