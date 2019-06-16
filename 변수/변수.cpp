#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int money = 1000;
	char cloth = 'M';
	double shoes = 195.5;
	int speed = 500;
	bool typing = true; 
	//true(참), false(거짓)
	cout << "나의 일주일 용돈은 " << money << "원입니다." << endl;
	cout << "영문을 아주 잘 치는 편인가요? " << typing << endl;

	string food = "자장면";
	string drink = "주스";
	string total = food + " " + drink;
	
	cout << "음식: " << food << endl;
	cout << "음료: " + drink << endl;
	cout << total;

	const int PRICE = 5000; //상수(값변경 불가)
	cout << food + "가격은: " + to_string(PRICE) << endl;
	//PRICE = 4000; //에러

	 











}


