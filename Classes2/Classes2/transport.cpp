#include "Bus.h"
#include "Person.h"

int main(){

	Person woo("�쿵��", 10000);  //Person ������ ȣ��
	Person han("�Ѱ�", 2000);
	Bus bus200(200); //Bus ������ ȣ��

	//������ ž��
	woo.takeBus(bus200);
	han.takeBus(bus200);
	han.takeBus(bus200);  //�ܾ� ����

	//���
	woo.displayInfo();
	han.displayInfo();
	bus200.displayInfo();

	return 0;
}