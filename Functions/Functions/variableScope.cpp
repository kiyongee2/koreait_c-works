#include <iostream>
using namespace std;
/*
    ������ ��ȿ����
	- ��������: main() ���� ���������� ����, ���α׷��� ����Ǹ� �Ҹ���
	           �޸��� ���� ����(����, ����)
	- ��������
*/

int x = 10;  //���� ����

void click();  //�Լ��� ����
int main()
{

	click();
	click();
	click();

	return 0;
}

void click() {
	int y = 10;  //���� ����

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}