#include <iostream>
using namespace std;
/*
    �޸� ���� �Ҵ� - ��(heap) ���� ���
	������ - �޸� �ּҸ� �����ϴ� �ڷ���
*/

int main() {

	int* ptr;
	ptr = new int; //���� ���� �Ҵ�(ptr ����)
	if (ptr == nullptr) {
		cout << "�޸� �Ҵ� ����!\n";
		return -1; //������ ����
	}

	*ptr = 5;
	//cout << *ptr << endl;  //5

	//�迭 - ���� �Ҵ�
	int* pa;
	pa = new int[10];

	//�� ����
	/*pa[0] = 10;
	pa[1] = 20;
	pa[2] = 30;*/

	//�� ���
	//cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;
	//cout << *pa << " " << *(pa + 1) << " " << *(pa + 2) << endl;

	//1���� 10���� ����
	for (int i = 0; i < 10; i++) {
		pa[i] = i + 1;
	}

	//���
	for (int i = 0; i < 10; i++) {
		//cout << pa[i] << " ";
		cout << *(pa + i) << " ";
	}

	//�޸� ����(�ݳ�)
	delete ptr;
	delete[] pa;

	/*
	* ���� �Ҵ� - �޸� ���� ���� ���
	//������ Ÿ��* ������;
	int* ptr;

	cout << &ptr << endl; //0000001B7716FA28

	//�ּ� �����ڸ� �̿��ؼ� �ٸ� ������ �ּҸ� �Ҵ�
	int num = 3;

	ptr = &num;;

	cout << num << endl;  //3
	cout << *ptr << endl; //3, �� ���� - ���� Ȯ��

	*ptr = *ptr + 10;
	cout << *ptr << endl;  //13
	cout << num << endl;   //13
	*/

	return 0;
}