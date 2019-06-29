#include <iostream>
using namespace std;


class Counter
{
private:
	int value;

public:
	Counter() : value{0} { };
	~Counter() { }
	int getValue() const { return value; }
	void setValue(int x) { value = x; }

	Counter& operator++() 
	{
		++value;
		return *this;
	}

};

int main()
{
	Counter c;
	cout << "ī������ ��: " << c.getValue() << endl;
	++c;
	cout << "ī������ ��: " << c.getValue() << endl;

	return 0;
}
