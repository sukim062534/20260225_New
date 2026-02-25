#include <iostream>
using namespace std;

int main()
{
	int number1 = 0;
	int number2 = 0;

	std:: cout << "숫자1 입력" << endl;
	std:: cin >> number1;
	std:: cout << "숫자2 입력" << endl;
	std:: cin >> number2;

	// \n 한줄띄기  \t Tap만큼 옆으로 '\b' 한칸 옆으로 \\역슬레쉬 하나 나옴
	std::cout << number1 + number2 << '\n';
	std:: cout << number1 - number2 << '\t';
	std:: cout << number1 * number2 << '\b';
	std:: cout << number1 / number2 << '\\';
	std:: cout << number1 % number2 << endl;
	return 0;
}