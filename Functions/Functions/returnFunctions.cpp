#include <iostream>
using namespace std;

/*
    return이 있는 함수
	- 반환값이 있음
*/

int myAbs(int x); //함수의 원형
string getMessage();

int main() {

	int value;
	value = myAbs(-4);

	cout << "절대값: " << value << endl;
	cout << "-----------------------\n";

	string msg;
	msg = getMessage();

	cout << "메시지: " << msg << endl;
	return 0;
}

//절대값 계산 함수
int myAbs(int x) { //int x = -4
	if (x < 0)
		return -x;
	else
		return x;
}

//메시지를 가져오는 함수
string getMessage() {
	return "행운을 빌어요!";
}