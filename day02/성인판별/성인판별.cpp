
#include "pch.h"
#include <iostream>
using namespace std;

//18이상 성인
//14이상 청소년
//8이상 어린이
//그이하는 아동

int main()
{
	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;

	if (age >= 18) {
		cout << "성인입니다.";
	}
	else if (age >= 14) {
		cout << "청소년입니다.";

	}
	else if (age >= 8) {
		cout << "아동입니다.";

	}
	else {
		cout << "어린이입니다.";

	}

}

