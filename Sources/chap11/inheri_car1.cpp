#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void speak()
	{
		cout << "������ �Ҹ��� ���� ����" << endl;
	}
};
class Dog : public Animal {
public:

	void speak()
	{
		cout << "�۸�!" << endl;
	}
};

int main()
{
	Dog obj;
	obj.speak();
	return 0;
}