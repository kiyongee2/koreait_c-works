#include <iostream>
using namespace std;

/*
    return�� �ִ� �Լ�
	- ��ȯ���� ����
*/

int myAbs(int x); //�Լ��� ����
string getMessage();

int main() {

	int value;
	value = myAbs(-4);

	cout << "���밪: " << value << endl;
	cout << "-----------------------\n";

	string msg;
	msg = getMessage();

	cout << "�޽���: " << msg << endl;
	return 0;
}

//���밪 ��� �Լ�
int myAbs(int x) { //int x = -4
	if (x < 0)
		return -x;
	else
		return x;
}

//�޽����� �������� �Լ�
string getMessage() {
	return "����� �����!";
}