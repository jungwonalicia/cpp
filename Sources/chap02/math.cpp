#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int i, ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true) {
		int x = rand() % 100;
		int y = rand() % 100;
		cout << x << "+" << y << "=";
		cin >> ans;
		if (x + y == ans) {
			cout << "�¾ҽ��ϴ�." << endl;
			break;
		}
		else
			cout << "Ʋ�Ƚ��ϴ�." << endl;
	}
	return 0;
}