#include <iostream>
using namespace std;

/*
    ������
	- ������ �ڷ����� ����(alias)�� ���̴� ���
	- �ϳ��� ������ ���� ���� �̸��� ���̴� ��
	- ����: �ڷ���& ����������(& - ����������)
*/

int main() {

	int n = 1;

	int& x = n; //n�̶�� ������ x��� �̸�(����)�� ����
	int& y = n;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	x = 3;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "n = " << n << endl;

	return 0;
}