#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 10;

int main()
{
	int data;
	// ���� ������ ���� ���� ����.
	ofstream os{ "test.dat", ofstream::binary };
	if (os.fail()) {
		cout << "test.dat ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	for (int i = 0; i < SIZE; i++) {
		data = rand();
		cout << data << " ";
		os.write((char *)&data, sizeof(data));
	}
	os.close();

	// ���� ������ �б� ���� ����.
	ifstream is{ "test.dat", ofstream::binary };
	if (is.fail()) {
		cout << "test.dat ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	// ���� ũ�⸦ �˾Ƴ���. 
	is.seekg(0, ios::end);
	long size = is.tellg();
	cout << endl << "���� ũ��� " << size << endl;

	// ������ �߾����� ��ġ ǥ���ڸ� �̵���Ų��. 
	is.seekg(size/2, ios::beg);
	is.read((char *)&data, sizeof(int));
	cout << "�߾���ġ�� ���� " << data << endl;
	return 0;
}