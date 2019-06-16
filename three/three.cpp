// three.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age = 0; //선언=> 메모리확보
    cout << "나이를 입력하세요: ";
	cin >> age;
	cout << "당신의 나이는 " << age;

	cout << endl;

	string name = "";
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "당신의 이름은 " << name;

}
