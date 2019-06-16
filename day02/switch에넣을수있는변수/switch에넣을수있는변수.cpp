#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int input1 = 0;
	char input2 = 'a';
	string input3 = "ok";
	float input4 = 11.11;

	switch (input1)
	{
	case 0: cout << "0이 들어 있어요.\n"; break;
	default: cout << "0이외의 값이 들어 있어요.\n"; break;
	}

	switch (input2)
	{
	case 'a': cout << "a가 들어 있어요.\n"; break;
	default: cout << "a 이외의 값이 들어 있어요.\n"; break;
	}

	switch (input1 + 1)
	{
	case 1: cout << "연산결과가 1이군요\n"; break;
	default: cout << "연산결과가 1이 아니군요\n"; break;
	}

	//switch (input3) //string x
	//{
	//case "ok": cout << "ok가 들어 있어요."; break;
	//default: cout << "ok이외의 값이 들어 있어요."; break;
	//}

	//switch (input4) //실수 x
	//{
	//case 11.11: cout << "11.11이 들어 있어요."; break;
	//default: cout << "11.11이외의 값이 들어 있어요."; break;
	//}
}