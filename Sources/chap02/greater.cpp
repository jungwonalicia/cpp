#include <iostream>
using namespace std;

int main() {
	int x, y;

	cout << "x���� �Է��Ͻÿ�: "; // �Է� �ȳ� ���
	cin >> x;

	cout << "y���� �Է��Ͻÿ�: "; // �Է� �ȳ� ���
	cin >> y;

	if (x > y)
		cout << "x�� y���� Ů�ϴ�. " << endl;
	else
		cout << "y�� x���� Ů�ϴ�. " << endl;
	return 0;
}