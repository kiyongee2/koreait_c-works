#include <iostream>
using namespace std;

/*
    this 예약어 사용
	- this는 객체 자신의 메모리상의 주소를 나타내는 포인터이다.
*/

class BirthDay {
private:
	int year;
	int month;
	int day;

public:
	//기본 생성자
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

	//인스턴스 bDay의 주소
	cout << &bDay << endl; //00000046B1EFFC58

	//this 출력함수 호출,
	bDay.printThis();  //00000046B1EFFC58

	//인스턴스와 this의 주소가 일치함

	return 0;
}