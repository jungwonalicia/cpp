#include <iostream>
using namespace std;

int main()
{
	int choice, area, length, width;
	cout << "������ �����Ͻÿ�(1, 2, 3): ";
	cin >> choice;
	if (choice == 1) { // �簢�� 
		cout << "����: ";
		cin >> length;
		cout << "����: ";
		cin >> width;
		area = length*width;
		cout << "����: " << area << endl;
	}
	else if (choice == 2) { // �ﰢ�� 
	}
	else if (choice == 2) {	// �� 
	}
	else {
		cout << "�ùٸ��� ���� �����Դϴ�." << endl;
	}
	return 0;
}