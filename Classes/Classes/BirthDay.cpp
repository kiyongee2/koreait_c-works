#include <iostream>
using namespace std;

/*
    this ����� ���
	- this�� ��ü �ڽ��� �޸𸮻��� �ּҸ� ��Ÿ���� �������̴�.
*/

class BirthDay {
private:
	int year;
	int month;
	int day;

public:
	//�⺻ ������
	BirthDay(){}

	void setYear(int year) {
		this->year = year;
	}

	void printThis() {
		cout << this << endl;
	}
};

int main() {

	BirthDay bDay;

	bDay.setYear(2025);

	//�ν��Ͻ� bDay�� �ּ�
	cout << &bDay << endl; //00000046B1EFFC58

	//this ����Լ� ȣ��,
	bDay.printThis();  //00000046B1EFFC58

	//�ν��Ͻ��� this�� �ּҰ� ��ġ��

	return 0;
}