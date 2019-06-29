#include <iostream>
using namespace std;

class Time {
public:
	int hour;		// 0-23
	int minute;		// 0-59

	Time(int h, int m) {
		hour = h;
		minute = m;
	}
	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	//Time a; 				// �� �����̴�! a�� �ʱ�ȭ���� �ʾҴ�. 
	Time b(10, 25);	 		// �� OK ������ ������ ����̴�. 
	Time c{ 10, 25 };	 		// �� OK �ֽ��� ����̴�. 
	Time d = { 10, 25 }; 		// �� OK �ణ�� �������� �ʴ�.

	b.print();
	c.print();
	d.print();

	return 0;
}