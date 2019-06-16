#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int month;
    cout << "월을 입력하세요."; 
	cin >> month;
	if (3 <= month && month <= 5)
	{
		cout << "봄입니다.";
	}
	else if (6 <= month && month <= 8)
	{
		cout << "여름입니다.";
	}
	else if (9 <= month && month  <= 11)
	{
		cout << "가을입니다.";
	}
	else
	{
		cout << "겨울입니다.";
	}

	//switch (month)
	//{
	//case 3: case 4: case 5: 
	//	cout << "봄입니다."; break;
	//case 6: case 7: case 8: 
	//	cout << "여름입니다."; break;
	//case 9: case 10: case 11:
	//	cout << "가을입니다."; break;
	//default:
	//	cout << "겨울입니다."; break;
	//}
}

