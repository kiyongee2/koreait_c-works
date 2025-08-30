#include <iostream>
using namespace std;

/*
   기본 매개변수(default parameter)
   - 기본값이 제공된 함수의 매개 변수이다.
   - 호출시 생략하면 기본값이 전달된다.
*/

//버스를 타는 함수 정의
void take(int busNumber, int fee = 1500) {
	cout << busNumber << "번 버스, 요금 " << fee << "원\n";
}

int main() {

	take(101, 1500); //함수 호출
	take(220);

	return 0;
}
