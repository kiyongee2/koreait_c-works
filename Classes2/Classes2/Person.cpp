#include "Person.h"

//������ �ʱ�ȭ ���
Person::Person(string name, int money) : 
	name(name), money(money) {}

//������ Ÿ��
void Person::takeBus(Bus& bus) {
	//���� ��� ����
	if (money < bus.getFEE()) {
		cout << "�ܾ��� �����մϴ�.\n";
	}
	else { //money >= bus.getFEE()
		bus.take();
		money -= bus.getFEE();
	}
}

//����� ���� ���
void Person::displayInfo() {
	cout << name << "�� ������ ��: " << money << "��\n";
}