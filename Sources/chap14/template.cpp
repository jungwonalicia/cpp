template <typename T>		// �Լ� ���ø����� ����
void print_array(T[] a, int n)
{
	for (int i = 0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
}

template <>		// ���ø� Ư��ȭ
void print_array(char[] a, int n)	// �Ű� ������ char�� ��쿡�� �� �Լ��� ȣ��ȴ�.
{
	cout << a << endl;
}