#include <iostream>
#include <fstream>		// ���� ������� �Ϸ��� ��� ������ �����Ͽ��� �Ѵ�. 
using namespace std;

int main()
{
	ifstream is{ "scores.txt" };
	if (!is) {		// ! ������ �����ε�
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}
	char c;
	is.get(c);		// �ϳ��� ���ڸ� �д´�.
	while (!is.eof())	// ������ ���� �ƴϸ�
	{
		cout << c;
		is.get(c);
	}
	cout << endl;
	return 0;
}