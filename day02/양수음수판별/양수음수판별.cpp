

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//복사 컨트롤+d
	//이동 알트+화살표
	int x;
	cout << "값을 입력하세요.: ";
	cin >> x;


	//한줄 삭제 컨트롤+L
	if (x > 0) {
		cout << "x는 양수입니다. " << endl;
	}
	else if (x< 0){
		cout << "x는 음수입니다. " << endl;
	}
	else {
		cout << "x는 0입니다. " << endl;
	}
}
