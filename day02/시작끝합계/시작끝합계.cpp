#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "시작값과 끝값을 입력해주세요.: ";
	int start, end;
	cin >> start >> end;

	int sum = 0;
	for (int i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	cout << "총 합은 " << sum;
}