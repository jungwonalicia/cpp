#include <iostream>
using namespace std;

void print(int i) {
	cout << "���� ���: " << i << endl;
}
void print(double f) {
	cout << "�Ǽ� ���: " << f << endl;
}
void print(char c) {
	cout << "���� ���: " << c << endl;
}

int main()
{
	print(100);	// ������ ����ϱ� ���Ͽ� ȣ���Ѵ�. 
	print(3.14);	// ������ ����ϱ� ���Ͽ� ȣ���Ѵ�. 
	print('C');	// ���ڸ� ����ϱ� ���Ͽ� ȣ���Ѵ�. 
	return 0;
}