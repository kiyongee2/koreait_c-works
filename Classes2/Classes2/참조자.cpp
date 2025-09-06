#include <iostream>
using namespace std;

/*
    참조자
	- 변수의 자료형에 별명(alias)을 붙이는 방법
	- 하나의 변수에 여러 개의 이름을 붙이는 것
	- 사용법: 자료형& 참조변수명(& - 참조연산자)
*/

int main() {

	int n = 1;

	int& x = n; //n이라는 변수에 x라는 이름(별명)을 붙임
	int& y = n;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	x = 3;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "n = " << n << endl;

	return 0;
}