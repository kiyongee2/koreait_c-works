#include <iostream>
using namespace std;

int main() {

	//�� ���
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//���� �ﰢ��
	for (int i = 1; i <= 5; i++) { //��
		for (int j = 1; j <= i; j++) { //��
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//���� �ﰢ��
	for (int i = 1; i <= 5; i++) { //��
		for (int j = 1; j <= 6 - i; j++) { //��
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";

	//���ڸ� ���������� �����ϱ�
	//17������ ���
	for (int i = 0; i < 4; i++) { //��
		for (int j = 1; j <= 5; j++) { //��
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