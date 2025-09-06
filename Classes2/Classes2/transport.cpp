#include "Bus.h"
#include "Person.h"

int main(){

	Person woo("우영우", 10000);  //Person 생성자 호출
	Person han("한강", 2000);
	Bus bus200(200); //Bus 생성자 호출

	//버스에 탑승
	woo.takeBus(bus200);
	han.takeBus(bus200);
	han.takeBus(bus200);  //잔액 부족

	//출력
	woo.displayInfo();
	han.displayInfo();
	bus200.displayInfo();

	return 0;
}