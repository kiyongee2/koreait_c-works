#include <iostream>
using namespace std;

/*
   �迭(Array)
   - ���� ���� �������� ���� �����ϴ� �ڷ� �����̴�.
   - �迭�� []�ȿ� ���� �����Ͽ� �޸𸮸� �Ҵ�
   - �迭�� ���� ��ȣ�� 0�� ���� ������
*/

int main() {
	//���ڿ� �迭 ����
	//�迭�� ����� ���ÿ� �ʱ�ȭ(����)
	//string carts[3] = {"���", "�ް�", "ȭ����"};
	string carts[3]; //ũ�Ⱑ 3�� ���ڿ� �迭 ����

	//��� ����
	carts[0] = "���";
	carts[1] = "�ް�";
	carts[2] = "ȭ����";

	//Ư�� ��� �˻�(��ȸ)
	cout << carts[0] << endl;  //���
	cout << carts[1] << endl;  //�ް�
	cout << carts[2] << endl;  //ȭ����

	//�迭�� ����(ũ��) - size()
	cout << size(carts) << endl;

	//1�� ��ġ�� ���� "���ݷ�"�� ����
	carts[1] = "���ݷ�";

	//��ü ��� - for��
	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << endl;
	}

	return 0;
}