#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int> p(new int);

	*p = 99;		// p�� ����Ѵ�. 

	// ���⼭ ���� ������ p�� �����Ǹ鼭 �Ҹ��ڰ� ȣ��ǰ� �Ҹ��ڿ��� 
	// ���� �޸𸮵� �Բ� �����ϱ� ������ �޸� ������ �߻����� �ʴ´�. 
}