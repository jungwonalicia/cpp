

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int number = 0; //시작값
	while (number < 10) { //조건
		cout << number << ": ★" << endl;
		number++; //증감값
		//number = number + 1;
	}
}

