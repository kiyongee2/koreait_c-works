#include <iostream>
using namespace std;
/*
   �Լ�(function)
   - Ư���� ����� �����ϴ� �ڵ� �̴�.(���� ���α׷�)
   - �Լ��� �̸��� �ְ�, ��ȯ �ڷ����� �Ű������� ����
*/

void printGugu(int dan); //�Լ��� ����(����)

int main() {

	//�Լ� ȣ��
	cout << "** ������ **\n";
	printGugu(7);

	return 0;
}

//void - ��ȯ �ڷ���(��)�� ����
void printGugu(int dan) { //int dan = 7
	for (int i = 1; i <= 9; i++) {
		cout << dan << " x " << i << " = " << dan * i << endl;
	}
}