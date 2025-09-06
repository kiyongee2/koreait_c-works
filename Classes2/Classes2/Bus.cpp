#include <iostream>
#include "Bus.h"
using namespace std;

/*
    생성자 초기화 목록 형태
	- 생성자(변수1, 변수2) : 변수1(변수1), 변수2(변수2) {}
	- 블럭안에는 비워둠
*/

//생성자 구현(생성자 초기화 목록)
Bus::Bus(int busNumber, int FEE) : busNumber(busNumber),
	passenger(0), money(0), FEE(FEE) {}
	
//승객 태우기
void Bus::take() {
	//수입 증가, 승객수 증가
	money += FEE;
	passenger++;
}

//요금 반환(가져오기)
int Bus::getFEE() { return FEE; }

//버스 정보 출력
void Bus::displayInfo() {
	cout << busNumber << "번 버스: 수입 " << money
		<< "원, 승객수: " << passenger << "명\n";
}
