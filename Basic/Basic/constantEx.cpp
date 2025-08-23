#include <iostream>
using namespace std;

/*
   상수(constant)
   - 한 번 설정해 두면 그 프로그램이 종료될때까지 변경할 수 없는 값이다.
   - 상수를 숫자로 직접 표기하는 것보다 이름을 붙여 사용(대문자 관례)
   - 방법
     1. 매크로 상수 - #define 상수이름 상수값
	 2. const 자료형 상수이름
*/
//#define PI 3.1415  //매크로 상수

int main()
{
	//원의 넓이 계산 : 원주율 x 반지름 x 반지름
	int radius = 6;
	double area;
	const double PI = 3.1415;  //const 상수 선언

	area = PI * radius * radius;

	//소수 자리수 설정
	cout << fixed;
	cout.precision(1); //소수 첫째
	cout << "원의 넓이: " << area << endl;


	return 0;
}