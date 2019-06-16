#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int choice;
	srand(time(NULL));

	cout << "1) 문제 출제, 2) 종료: ";
	cin >> choice;
	if (choice == 1)
	{
		int num1 = rand() % 100;
		int num2 = rand() % 100;
		int sum = num1 + num2;
		cout << num1 << " + " << num2 << ": 두 수의 합은 " << sum;
	}
	else {
		cout << "프로그램을 종료합니다.";
	}
}