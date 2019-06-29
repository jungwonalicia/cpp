#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());

	// ���� ������ ���� ���� ����.
	ifstream is{ "d:\\lena(256x256).raw", ifstream::binary };
	if (is.fail())
	{
		cout << "d:\\lena(256x256).raw ������ �� �� �����ϴ�." << endl;
		exit(1);
	}
	int size = 256 * 256;
	char * memblock = new char[size];
	is.read(memblock, size);
	is.close();

	int r, c;
	for (r = 0; r < 256; r++) {
		for (c = 0; c < 256; c++) {
			int red, green, blue;
			red = green = blue = memblock[r * 256 + c];
			SetPixel(hdc, c, r, RGB(red, green, blue));
		}
	}
	delete memblock;
	return 0;
}