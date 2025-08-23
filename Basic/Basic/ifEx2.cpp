#include <iostream>
using namespace std;
/*
   점수에 따른 학점 계산하기
   90 ~ 100 : 'A'
   80 ~ 89 : 'B'
   70 ~ 79 : 'C'
   70미만 : 'D'
*/

int main(){

	int score;   //점수
	char grade;  //학점

	cout << "점수 입력(1 ~ 100): ";
	cin >> score;

	if (score >= 90 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else {
		grade = 'D';
	}

	cout << "학점: " << grade << endl;

	return 0;
}
