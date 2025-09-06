#include <iostream>
#include "Bus.h"
using namespace std;

/*
    ������ �ʱ�ȭ ��� ����
	- ������(����1, ����2) : ����1(����1), ����2(����2) {}
	- ���ȿ��� �����
*/

//������ ����(������ �ʱ�ȭ ���)
Bus::Bus(int busNumber, int FEE) : busNumber(busNumber),
	passenger(0), money(0), FEE(FEE) {}
	
//�°� �¿��
void Bus::take() {
	//���� ����, �°��� ����
	money += FEE;
	passenger++;
}

//��� ��ȯ(��������)
int Bus::getFEE() { return FEE; }

//���� ���� ���
void Bus::displayInfo() {
	cout << busNumber << "�� ����: ���� " << money
		<< "��, �°���: " << passenger << "��\n";
}
