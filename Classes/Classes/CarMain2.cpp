
#include "Car.h"
/*
   ���� �Ҵ� - �ν��Ͻ� ��ü
*/
int main() {

	Car* car1 = new Car("EV6", 2024);
	Car* car2 = new Car("Sonata", 2021);

	car1->carInfo();
	car1->drive();

	car2->carInfo();
	car2->drive();


	delete car1; //�޸� �ݳ�
	delete car2;

	return 0;
}