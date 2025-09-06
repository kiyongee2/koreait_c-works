#ifndef BUS_H
#define BUS_H

class Bus {
private:
	int busNumber;  //���� ��ȣ
	int passenger;  //�°���
	int money;      //����
	const int FEE;  //���� ���(���)
public:
	//�⺻ �Ű������� ����ο��� �ۼ���
	Bus(int busNumber, int FEE = 1500); 

	void take();  //�°� �¿��
	int getFEE(); //��� ��ȯ
	void displayInfo();  //������ ���� ���
};
#endif // !1