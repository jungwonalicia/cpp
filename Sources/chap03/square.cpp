#include <iostream>
using namespace std;

int square(int n)
{
	return(n*n);
}

int main()
{
	int n;
	cout << "������ ������ �Է��Ͻÿ�: ";
	cin >> n;

	cout << square(n) << endl;

	return 0;
}