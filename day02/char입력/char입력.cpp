#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	char ch;
	//std::cout << "맞으면 o, 틀리면 x를 입력하세요. ";
	//std::cin >> ch;

	std::string s = "ok";

	ch = s.at(0);
	if (ch == 'o') {
		std::cout << "맞습니다.";
	}
	else {
		std::cout << "틀립니다.";
	}
}
