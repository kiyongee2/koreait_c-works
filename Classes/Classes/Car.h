//Car.h - �������(Ŭ���� ����, ������ �Լ��� ����)
//���Ǻ� ������ ��� - Ŭ�����̸� �ߺ� ��� ����
#ifndef CAR_H
#define CAR_H  //��ũ�� �̸� ����

#include <iostream>
using namespace std;

class Car {
private:
	string model;  //�𵨸�
	int year;      //����

public:
	//������ - ����
	Car(string model, int year);

	//�Լ� - ����
	void carInfo();
	void drive();
};

#endif 
