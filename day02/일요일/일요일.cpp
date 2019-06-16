#include "pch.h"
#include <iostream>
#include <string>

//자동완성: 컨트롤+스페이스바
//주석
using namespace std;

int main()
{
	int temp;
    cout << "오늘은 몇도: "; 
	cin >> temp;
	cout << "오늘의 온도는 " << temp << "이군요" << endl;

	if (temp > 20) {
		cout << "아주 더운 날씨이군요!" << endl;
	}
	else {
		cout << "아주 더운 날씨는 아니군요!" << endl;;
	}

	string today;
	cout << "오늘의 날씨는: ";
	cin >> today;
	cout << "오늘은 날씨는 " << today << "이군요" << endl;
}
