#include <iostream>
#include <fstream>		// ���� ������� �Ϸ��� ��� ������ �����Ͽ��� �Ѵ�. 
using namespace std;

int main()
{
	ofstream os("test.txt");;
	char c;
	while (cin.get(c))
	{
		os.put(c);
	}
	return 0;
}