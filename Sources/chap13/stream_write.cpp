#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream os{ "numbers.txt" };
	if (!os) {
		cerr << "���� ���¿� �����Ͽ����ϴ�" << endl;
		exit(1);
	}
	for(int i=0;i<100; i++)
		os << i <<" ";
	return 0;

 // ��ü os�� ������ ����� ofstream �Ҹ��ڰ� ������ �ݴ´�. 
}