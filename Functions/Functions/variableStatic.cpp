#include <iostream>
using namespace std;
/*
	������ ��ȿ����
	- ��������: �̸� �տ� static�� �پ��ִ� ����
			   �޸��� ���� ����(����, ����), ���α׷��� ����Ǹ� �Ҹ�
	- ��������: �Լ��� ��� �ȿ��� �����ǰ�, ȣ��Ǹ� ���� ��ȯ�� �Ҹ�
*/

void click();  //�Լ��� ����
int main()
{

	click();
	click();
	click();

	return 0;
}

void click() {
	static int x = 10; //����(����) ����(���������� ��������ȭ ��)
	int y = 10;  //���� ����

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}