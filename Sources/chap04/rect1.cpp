#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	int calcArea() {
		return width*height;
	}
};

int main()
{
	Rectangle obj;

	obj.width = 3;
	obj.height = 4;
	int area = obj.calcArea();
	cout << "�簢���� ����: " << area<<endl;
	return 0;
}