#include <iostream>
using namespace std;

int main() {

	//별 찍기
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//직각 삼각형
	for (int i = 1; i <= 5; i++) { //행
		for (int j = 1; j <= i; j++) { //열
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//직각 삼각형
	for (int i = 1; i <= 5; i++) { //행
		for (int j = 1; j <= 6 - i; j++) { //열
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//숫자를 순차적으로 증가하기
	//17까지만 출력
	for (int i = 0; i < 4; i++) { //행
		for (int j = 1; j <= 5; j++) { //열
			int num = 5 * i + j;
			if (num > 17) 
				break;
			cout << num << " ";
		}
		cout << "\n";
	}
	cout << "\n";


	return 0;
}