#include <iostream>
using namespace std;

class Parent
{
public:
	~Parent() { cout << "Parent �Ҹ���" << endl; }
};

class Child : public Parent
{
public:
	~Child() { cout << "Child �Ҹ���" << endl; }
};

int main()
{
	Parent* p = new Child();     // ���� ����ȯ
	delete p;
}