#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int buffer[5];
	ifstream is{ "test.dat", ifstream::binary };
	if (!is)
	{
		cout << "test.txt ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	is.read((char *)&buffer, sizeof(buffer));
	for(auto& e: buffer)
		cout << e << " ";
	return 0;
}