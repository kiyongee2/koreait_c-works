//Car.Main - 실행 파일

#include "Car.h"

int main() {

	//생성자 호출
	Car car1("소나타", 2021);
	Car car2("EV6", 2025);

	car1.carInfo();
	car1.drive();

	car2.carInfo();
	car2.drive();

	return 0;
}