#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool comp(string s1, string s2) {
	return (s1 == s2);
}

int main(void) {
	vector<string> v = { "one", "two", "three" };
	bool result;

	result = binary_search(v.begin(), v.end(), "two", comp);
	if (result == true)
		cout << "���ڿ� \"two\" �� ���� �ȿ� ����." << endl;
	return 0;
}
