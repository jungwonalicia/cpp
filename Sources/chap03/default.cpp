#include <iostream>
using namespace std;

// ���� c�� n�� �ݺ��Ͽ� ȭ�鿡 ����Ѵ�.
void display(char c = '*', int n = 10)
{
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main()
{
	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ���:\n";
	display();

	cout << "\nù ��° �μ��� ���޵Ǵ� ���:\n";
	display('#');

	cout << "\n��� �μ��� ���޵Ǵ� ���:\n";
	display('#', 5);

	return 0;
}