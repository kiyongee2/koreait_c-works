#include <iostream>
using namespace std;

/*
    for(�ʱⰪ; ���ᰪ; ������){} �ݺ���
*/

int main() {

	//1~20 ��� - 3�� ����� ����, �հ�
	int count = 0;  //����
	int sum = 0;    //�հ�
	for (int i = 1; i <= 20; i++) {
		if (i % 3 == 0) {
			cout << i << " ";  //3, 6, 9, 12, 15, 18
			count++;  //count = count + 1;
			sum += i; //sum = sum + i;
		}
	}
	cout << endl;  
	cout << "3�� ����� ����: " << count << endl; //6
	cout << "3�� ����� ����: " << sum << endl; //63

	//������ ����ϱ�
	int dan = 6;

	for (int i = 1; i <= 9; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}

	//������ ��ü - ��øfor
	cout << "=== ������ ��ü ��� ===\n";
	for (int i = 2; i <= 9; i++) {
		cout << "[" << i << "] ��\n";
		for (int j = 1; j <= 9; j++) {
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << "\n";
	}

	return 0;
}