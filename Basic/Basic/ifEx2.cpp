#include <iostream>
using namespace std;
/*
   ������ ���� ���� ����ϱ�
   90 ~ 100 : 'A'
   80 ~ 89 : 'B'
   70 ~ 79 : 'C'
   70�̸� : 'D'
*/

int main(){

	int score;   //����
	char grade;  //����

	cout << "���� �Է�(1 ~ 100): ";
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

	cout << "����: " << grade << endl;

	return 0;
}
