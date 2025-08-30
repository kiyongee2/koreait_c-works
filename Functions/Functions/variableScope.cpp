#include <iostream>
using namespace std;
/*
    변수의 유효범위
	- 전역변수: main() 위쪽 전역공간에 생성, 프로그램이 종료되면 소멸함
	           메모리의 값을 유지(공유, 누적)
	- 지역변수
*/

int x = 10;  //전역 변수

void click();  //함수의 원형
int main()
{

	click();
	click();
	click();

	return 0;
}

void click() {
	int y = 10;  //지역 변수

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}