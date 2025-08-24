#include <iostream>
using namespace std;

/*
    for(초기값; 종료값; 증감값){} 반복문
*/

int main() {

	//1~20 출력 - 3의 배수의 개수, 합계
	int count = 0;  //개수
	int sum = 0;    //합계
	for (int i = 1; i <= 20; i++) {
		if (i % 3 == 0) {
			cout << i << " ";  //3, 6, 9, 12, 15, 18
			count++;  //count = count + 1;
			sum += i; //sum = sum + i;
		}
	}
	cout << endl;  
	cout << "3의 배수의 개수: " << count << endl; //6
	cout << "3의 배수의 총합: " << sum << endl; //63

	//구구단 출력하기
	int dan = 6;

	for (int i = 1; i <= 9; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}

	//구구단 전체 - 중첩for
	cout << "=== 구구단 전체 출력 ===\n";
	for (int i = 2; i <= 9; i++) {
		cout << "[" << i << "] 단\n";
		for (int j = 1; j <= 9; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << "\n";
	}

	return 0;
}