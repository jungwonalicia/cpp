#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string ifile, ofile;
	cout << "���� ���� �̸�:";
	cin >> ifile;
	cout << "���� ���� �̸�:";
	cin >> ofile;
	ifstream source(ifile, ios::binary);
	ofstream dest(ofile, ios::binary);

#if 1
	dest << source.rdbuf();
#else
	if (source.is_open() && dest.is_open()) {
		while (!source.eof()) {
			dest.put(source.get());
		}
	}
#endif

	
	return 0;
}