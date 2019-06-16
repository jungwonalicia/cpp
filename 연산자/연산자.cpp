#include "pch.h"
#include <iostream>

using namespace std;
 
int main()
{
	/*int num1;
	int num2;

	cout << "숫자1 입력: ";
	cin >> num1;
	cout << "숫자2 입력: ";
	cin >> num2;

	cout << num1 + num2 << endl;
	cout << num1 - num2 << endl;
	cout << num1 * num2 << endl;
	cout << num1 / (double)num2 << endl;
	cout << num1 % num2 << endl;*/

	double 화씨온도;
	cout << "화씨온도 입력: ";
	cin >> 화씨온도;

	double 섭씨온도;

	섭씨온도 = (5.0 / 9.0) * (화씨온도 - 32);
	//cout << 섭씨온도;
	
	cout << "화씨온도 " << 화씨온도 << "도는 섭씨온도 " << 섭씨온도 << "입니다" << endl;
	cout << boolalpha;
	cout << (화씨온도 > 섭씨온도);
}


