#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
	map<string, string> myMap;

	myMap.insert(make_pair("��ö��", "010-123-5678"));
	myMap.insert(make_pair("ȫ�浿", "010-123-5679"));

	myMap["���ڿ�"] = "010-123-5680";

	// ��� ��� ���
	for(auto& it : myMap){
		cout << it.first << " :: " << it.second << endl;
	}
	if (myMap.find("�迵��") == myMap.end())
		cout << "�ܾ� '�迵��'�� �߰ߵ��� �ʾҽ��ϴ�. " << endl;
	return 0;
}