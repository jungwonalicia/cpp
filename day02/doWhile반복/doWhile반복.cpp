#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string str;
	do {
		cout << "문자열을 입력: ";
		//getline(cin, str);
		cin >> str;
		cout << "당신의 입력값은 " << str << endl;
	} while (str != "종료");
}