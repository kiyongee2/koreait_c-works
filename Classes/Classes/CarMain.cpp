//Car.Main - ���� ����

#include "Car.h"

int main() {

	//������ ȣ��
	Car car1("�ҳ�Ÿ", 2021);
	Car car2("EV6", 2025);

	car1.carInfo();
	car1.drive();

	car2.carInfo();
	car2.drive();

	return 0;
}