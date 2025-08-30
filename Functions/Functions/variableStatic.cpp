#include <iostream>
using namespace std;
/*
	변수의 유효범위
	- 정적변수: 이름 앞에 static이 붙어있는 변수
			   메모리의 값을 유지(공유, 누적), 프로그램이 종료되면 소멸
	- 지역변수: 함수나 제어문 안에서 생성되고, 호출되면 값을 반환후 소멸
*/

void click();  //함수의 원형
int main()
{

	click();
	click();
	click();

	return 0;
}

void click() {
	static int x = 10; //정적(고정) 변수(지역변수가 전역변수화 함)
	int y = 10;  //지역 변수

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}