#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int list[SIZE];
	int max, person;

	for (int& elem : list)
	{
		cout << "��ħ�� �Դ� ����� ����: ";
		cin >> elem;
	}
	cout << endl;
	max = list[0];
	person = 0;
	for (int i = 1; i < SIZE; i++)
	{
		if (list[i] > max) {
			max = list[i];
			person = i;
		}
	}
	cout << "���� ���� ����� ���� �����ȣ=" << person << endl;
	return 0;
}