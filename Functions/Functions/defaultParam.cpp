#include <iostream>
using namespace std;

/*
   �⺻ �Ű�����(default parameter)
   - �⺻���� ������ �Լ��� �Ű� �����̴�.
   - ȣ��� �����ϸ� �⺻���� ���޵ȴ�.
*/

//������ Ÿ�� �Լ� ����
void take(int busNumber, int fee = 1500) {
	cout << busNumber << "�� ����, ��� " << fee << "��\n";
}

int main() {

	take(101, 1500); //�Լ� ȣ��
	take(220);

	return 0;
}
