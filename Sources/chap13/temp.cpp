#include <iostream>
#include <fstream>		// ���� ������� �Ϸ��� ��� ������ �����Ͽ��� �Ѵ�. 
using namespace std;

int main()
{
	ifstream is{ "temp.txt" };
	if (!is) {		// ! ������ �����ε�
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}

	int hour;
	double temperature;

	while (is >> hour >> temperature) {
		cout << hour << "��: �µ� "<< temperature << endl;
	}
	return 0;
}	