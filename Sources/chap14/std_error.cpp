#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		int* p = new int[100000];
		delete p;
	}
	catch (exception& e) {
		cout << "ǥ�� ���ܰ� �߻��߽��ϴ�. " << e.what() << endl;
	}
	return 0;
}