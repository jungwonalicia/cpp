#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int buffer[] = { 10, 20, 30, 40, 50 };
	ofstream os{ "test.dat",ofstream::binary };
	if (!os)
	{
		cout << "test.txt ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	os.write((char *)&buffer, sizeof(buffer));
	return 0;
}