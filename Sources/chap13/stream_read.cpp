#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream is{ "numbers.txt" };
	if (!is) {
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}
	int number;
	while (is) {
		is >> number;
		cout << number << " ";
	}
	cout << endl;
	return 0;

 // ��ü is�� ������ ����� ifstream �Ҹ��ڰ� ������ �ݴ´�. 
}