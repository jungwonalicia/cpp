#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector<string> vec { "���", "�丶��", "��", "����", "Ű��" };

	auto it = find(vec.begin(), vec.end(), "����");
	if (it != vec.end())
		cout << "������ " << distance(vec.begin(), it) << "�� �ֽ��ϴ�." << endl;
	return 0;
}