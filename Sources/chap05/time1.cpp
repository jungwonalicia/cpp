#include <iostream>
using namespace std;

class Time {
public:
	int hour;		// �ø� ��Ÿ����. 0-23�� �����ϴ�.
	int minute;		// ���� ��Ÿ����. 0-59�� �����ϴ�. 

	void print() {
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	Time a;			// a�� Time �ڷ����� �����̴�. 

	init_time(a, 10, 25); // a�� 10�� 25������ �����ȴ�. 
	a.print();			// ��10:25���� ��µȴ�. 

	Time b;			// b�� Time �ڷ����� �����̴�. 
	b.print();			// init_time()�� ȣ������ �ʾƼ� �߸��� ���� ����ִ�. 
					// ������ ���� ��µȴ�. 
	return 0;
}