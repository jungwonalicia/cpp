#include <iostream>
#include <string>
using namespace std;

class Shape {
	int x, y;
public:
	Shape() {
		cout << "Shape ������() " << endl;
	}
	Shape(int xloc, int yloc) : x{xloc}, y{yloc} {
		cout << "Shape ������(xloc, yloc) " << endl;
	}
	~Shape() {
		cout << "Shape �Ҹ���() " << endl;
	}
};

class Rectangle : public Shape {
	int width, height;
public:
	Rectangle::Rectangle(int x, int y, int w, int h) : Shape(x, y) {
		width = w;
		height = h;
		cout << "Rectangle ������(x, y, w, h)" << endl;
	}
	~Rectangle() {
		cout << "Rectangle �Ҹ���()" << endl;
	}
};

int main()
{
	Rectangle r(0, 0, 100, 100);
	return 0;
}