#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string report1 = "This is a original report.";
	string report2 = "This is a copy report.";

	vector<string> v1;
	vector<string> v2;

	// ù ��° ����Ʈ�� �ܾ�� �и��ϴ� ����
	istringstream iss1(report1);
	for (string s; iss1 >> s; )
		v1.push_back(s);

	// �� ��° ����Ʈ�� �ܾ�� �и��ϴ� ����
	istringstream iss2(report2);
	for (string s; iss2 >> s; )
		v2.push_back(s);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	vector<string> common;
	set_intersection(v1.begin(), v1.end(),
		v2.begin(), v2.end(),
		back_inserter(common));

	cout << "report1=" << report1 << endl;
	cout << "report2=" << report2 << endl << endl;

	cout << "�������� �ܾ�: ";
	for (string e : common)
		cout << e << ' ';
	cout << endl;
	return 0;
}