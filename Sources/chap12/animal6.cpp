class Animal  {
	virtual void move() = 0;
	virtual void eat() = 0;
	virtual void speak() = 0;
};
class Lion : public Animal  {
	void move(){
		cout << "������ move() << endl;
	}
	void eat(){
		cout << "������ eat() << endl;
	}
	void speak(){
		cout << "������ speak() << endl;
	}
};