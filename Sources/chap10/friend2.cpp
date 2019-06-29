#include <iostream>
#include <string>
using namespace std;

class A {
public:
	friend class B;	// B�� A�� �����尡 �ȴ�. 

	A(string s = "") : secret{s} {  }
private:
	string secret;	// B�� ���⿡ ������ �� �ִ�. 
};

class B {

public:
	B() {    }
	void print(A obj) {
		cout << obj.secret << endl;
	}
};

int main()
{
	A a("�̰��� ��� �����Դϴ�.");
	B b;
	b.print(a);

	return 0;
}
