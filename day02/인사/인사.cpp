

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int hour;
    cout << "현재 시각을 입력: "; 
	cin >> hour;

	if (hour < 11) {
		cout << "굿모닝";
	}
	else if (hour < 17)
	{
		cout << "굿에프터 눈";
	}
	else if (hour < 20)
	{
		cout << "굿이브닝";
	}
	else {
		cout << "굿나잇";
	}
}

