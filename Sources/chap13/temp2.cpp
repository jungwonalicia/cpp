#include <iostream>
#include <fstream>		// ���� ������� �Ϸ��� ��� ������ �����Ͽ��� �Ѵ�. 
#include <vector>
using namespace std;

class TempData {   
public:
	int hour;          
	double temperature; 
};

int main()
{
	ifstream is{ "temp.txt" };
	if (!is) {		// ! ������ �����ε�
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}
	vector<TempData> temps;            

	int hour;
	double temperature;
	while (is >> hour >> temperature) {
		temps.push_back(TempData{ hour, temperature });
	}
	for ( TempData t : temps) {
		cout << t.hour << "��: �µ� " << t.temperature << endl;
	}
	return 0;
}