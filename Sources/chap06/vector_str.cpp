#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	vector<string> vec;		// ���͸� �����Ѵ�. 

	vec.push_back("MILK");		// ������ ���� �ڷḦ �����Ѵ�.
	vec.push_back("BREAD");
	vec.push_back("BUTTER");
	for (auto e : vec) {
		cout << " " << e;
	}
	cout << endl;
	return 0;
}