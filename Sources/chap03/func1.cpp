#include <iostream>
using namespace std;

// �Լ� ����
int max(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}

int main()
{
	int n;
	n = max(2, 3);	// �Լ� ȣ��
	cout << "���� ��� = " << n << endl;
	return 0;
}