#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	using namespace std;

	fstream iofile("words.txt", ios::in | ios::out);
	if (!iofile) {
		cout << "words.txt ������ �� �� �����ϴ�." << endl;
		exit(1);
	}

	char ch; 
	while (iofile.get(ch)) {
		switch (ch)	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			// �� ���� ������ ����.
			iofile.seekg(-1, ios::cur);

			// ���� ���� �ٲپ ���� ��ġ�� ��*���� ����. 
			iofile << '*';

			// �ٽ� �б� ���� �ٲ۴�.
			iofile.seekg(iofile.tellg(), ios::beg);
			break;
		}
	}
	return 0;
}
