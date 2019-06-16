#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14;
	int r, width, height;
	double round; //원의 면적
	int rectangle; //사각형의 면적

	cout << "원의 반지름 입력: ";
	cin >> r;
	round = PI * r * r; 

	cout << "사각형의 가로 입력: ";
	cin >> width;
	cout << "사각형의 세로 입력: ";
	cin >> height;
	rectangle = width * height;

	cout << "----------------------" << endl;
	cout << "반지름이 " << r << "인 원의 면적은 " << round << endl;
	cout << "가로가 " << width << ", 세로가 " << height << "인 사각형의 면적은 " << rectangle << endl;
	cout << boolalpha;
	cout << "가로 세로가 같은가요: " << (width == height) << endl;
	cout << "반지름이 10보다 큰가요: " << (r > 10) << endl;

}


