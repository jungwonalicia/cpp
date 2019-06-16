#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int id = 1000; //회원가입시 id
	int pw = 2000;
	int inputId, inputPw; //입력한 id

	cout << "ID입력: ";
	cin >> inputId;
	cout << "PW입력: ";
	cin >> inputPw;

	if ((id == inputId)&&(pw == inputPw)) {
		cout << "로그인 OK";
	}
	else {
		cout << "로그인 NOT";
	}
}


