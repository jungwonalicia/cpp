class RemoteControl {
	// ���� ���� �Լ� ����
	virtual void turnON() = 0;	// ���� ��ǰ�� �Ҵ�.
	virtual void turnOFF() = 0;	// ���� ��ǰ�� ����.
}
class Television : public RemoteControl {
	void turnON() 
	{
		// ������ TV�� ������ �ѱ� ���� �ڵ尡 ��� ����.
	}
	void turnOFF()
	{
		// ������ TV�� ������ ���� ���� �ڵ尡 ��� ����.
	}
}