#include <vector>  
#include <iostream>  
using namespace std;

int main(void)
{
	vector<int> v;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}

	cout << "������  v =  ";
	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << "���� ��� =  ";
	// ���Ͱ� ������ �� ������ pop_back() ȣ�� 
	while (v.empty() != true) {
		cout << v.back() << " ";
		v.pop_back();
	}
	cout << endl;
}