

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//복사 컨트롤+d
	//이동 알트+화살표
	int x, y;
    cout << "X값을 입력하세요.: "; 
	cin >> x; 
	cout << "Y값을 입력하세요.: "; 
	cin >> y;

	//한줄 삭제 컨트롤+L
	if (x > y) {
		cout << "더 큰 수는 " << x;
	}
	else {
		cout << "더 큰 수는 " << y;
	}
}
