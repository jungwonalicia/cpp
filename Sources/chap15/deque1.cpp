#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	deque<string> dq = { "naver", "daum", "cnn", "yahoo", "google" };

	dq.push_front("infinity");		// �տ��� ����
	dq.pop_back();				// ������ �߰�
	for (auto& e : dq)
		cout << e << " ";
	cout << endl;

	return 0;
}
