#include <iostream>
#include <fstream>

int main()
{
	using namespace std;

	ofstream os("sample.txt", ios::app);
	if (!os)
	{
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}

	os << "�߰��Ǵ� �� #1" << endl;
	os << "�߰��Ǵ� �� #2" << endl;

	return 0;
}