#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	int price;
public:
	Book(string name, int price) : title{ name }, price{ price } { }
	void print() {
		cout << "����:" << title << ", 	����:" << price << endl;
	}

};

int main(void)
{
	Book books[2] = {
		Book("��� C++", 25000),
		Book("��� C  ", 22000)
	};

	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "======================" << endl;
	for (Book& b : books)
		b.print();
	cout << "======================" << endl;
	return 0;
}