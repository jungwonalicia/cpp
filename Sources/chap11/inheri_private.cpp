#include <iostream>
using namespace std;

class Base
{
	public: int x;
	protected: int y;
	private: int z;
};

class Derived : private Base
{
	// x�� �ڽ� Ŭ�������� ��밡�������� private�� �����ȴ�. 
	// y�� �ڽ� Ŭ�������� ��밡�������� private�� �����ȴ�. 
	// z�� �ڽ� Ŭ���������� ����� �� ����. 
};


int main()
{
	Derived obj;
	cout << obj.x;		
}