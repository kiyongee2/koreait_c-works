//Car.cpp - ������Ͽ��� ����� �����ڳ� �Լ��� �����ϴ� ����
//���� ���� ��� ������ �ֵ���ǥ�� ����� ��

#include "Car.h"

//������ ����
Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

//�Լ� ����
void Car::carInfo() {
	cout << "�𵨸�: " << model
		<< ", ����: " << year << endl;
}

void Car::drive() {
	cout << model << "�� �޸��ϴ�.\n";
}