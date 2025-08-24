#include <iostream>
using namespace std;
/*
   함수(function)
   - 특정한 기능을 수행하는 코드 이다.(작은 프로그램)
   - 함수는 이름이 있고, 반환 자료형과 매개변수가 있음
*/

void printGugu(int dan); //함수의 원형(선언)

int main() {

	//함수 호출
	cout << "** 구구단 **\n";
	printGugu(7);

	return 0;
}

//void - 반환 자료형(값)이 없음
void printGugu(int dan) { //int dan = 7
	for (int i = 1; i <= 9; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}
}