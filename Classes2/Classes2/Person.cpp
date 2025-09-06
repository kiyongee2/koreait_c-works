#include "Person.h"

//생성자 초기화 목록
Person::Person(string name, int money) : 
	name(name), money(money) {}

//버스를 타다
void Person::takeBus(Bus& bus) {
	//버스 요금 차감
	if (money < bus.getFEE()) {
		cout << "잔액이 부족합니다.\n";
	}
	else { //money >= bus.getFEE()
		bus.take();
		money -= bus.getFEE();
	}
}

//사람의 정보 출력
void Person::displayInfo() {
	cout << name << "님 보유한 돈: " << money << "원\n";
}