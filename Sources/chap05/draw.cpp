#include "pch.h"
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
void draw(int x, int y) {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x, y, 300, 300);
}
int main()
{	
	draw(300, 300);
	draw(600, 600);
	system("pause");
}
