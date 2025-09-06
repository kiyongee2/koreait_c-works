#include <iostream>
using namespace std;

/*
   참조자에 의한 호출
*/

void swapVal(int a, int b);
void swapRef(int& a, int& b);

int main() {

	int x = 10, y = 20;

	cout << "1. 값에 의한 호출\n";
	swapVal(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "2. 참조에 의한 호출\n";
	swapRef(x, y);
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}

void swapVal(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swapRef(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}