// 날짜판별.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "월을 입력하세요.";
	cin >> month;
	switch (month)
		{
		case 2: 
			cout << "28일 까지입니다."; break;
		case 4: case 6: case 9: case 11:
			cout << "30일 까지입니다."; break;
		default:
			cout << "31일 까지입니다."; break;
		}
}

