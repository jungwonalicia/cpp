//?�ݺ��� �̿��� ���� ���α׷�
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() %100;	// ����
	int guess;
	int tries = 0;
	// �ݺ� ����
	do {
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (guess >answer)	// ����ڰ� �Է��� ������ ���亸�� ������
			cout << "������ ������ �����ϴ�.\n";
		if (guess <answer)	// ����ڰ� �Է��� ������ ���亸�� ������ 
			cout << "������ ������ �����ϴ�.\n";
	} while (guess != answer);

	cout << "�����մϴ�. �õ� Ƚ��=" << tries << endl;

	return 0;
}