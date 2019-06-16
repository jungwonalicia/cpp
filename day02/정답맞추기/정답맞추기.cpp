#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	 //int target = 55; //맞추어야 하는 값
	srand(time(NULL));
	int target = rand() % 100;

	int input; //입력받아 넣을 변수
	int count = 0; 
	 //변수에 처음값을 넣어주는 것: 초기화
	 //main함수 내에서 초기화를 시켜주지 않으면 쓰레기값이 들어있음.(연산사용 불가)
	 //변수에 들어갈 수 있는 값 3가지: 쓰레기값, 초기값, 대입값
	do {
		count++;
		cout << "생각한 숫자 입력: ";
		cin >> input;
		if (input > target) {
			cout << "숫자가 너무 커요.\n";
		}
		if (input < target) {
			cout << "숫자가 너무 작아요.\n";
		}

	} while (input != target);
	
	cout << "축하합니다. 정답입니다." << endl;
	cout << "당신의 시도 횟수는 " << count <<"회" << endl;
}