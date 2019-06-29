class Time {
private:			// ���Ŀ� ����Ǵ� ����� ��� ���� ����� �ȴ�. 
	int hour;		// 0-23
	int minute;		// 0-59

public:
	Time(int h, int m);
	void inc_hour();
	void print();
};

Time::Time(int h, int m) {
	hour = h;
	minute = m;
}

void Time::inc_hour() {
	++hour;
	if (hour > 23)
		hour = 0;
}

void Time::print() {
	cout << hour << ":" << minute << endl;
}