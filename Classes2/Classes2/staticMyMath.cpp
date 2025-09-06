#include <iostream>
using namespace std;
/*
   static�� ���� �Լ� - ���� ��� �Լ�
   - ���� ����Լ��� �ν��Ͻ��� �������� �ʰ�, 
     Ŭ���� �̸����� ���� �����Ѵ�.
*/
class MyMath {
public:
	//���밪 ��� �Լ�
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//�� ���� ���� �� ã��
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}

	//�� ���� ū �� ã��
	static int max(int x, int y) {
		return (x > y) ? x : y;
	}
};


int main() {

	//�ν��Ͻ������� �����Ҽ� ������ ������� ����
	/*MyMath math1;
	cout << math1.abs(-10) << endl;*/

	int a = 4, b = 5;

	//Ŭ���� �̸����� ���� ����
	cout << "���밪 ���: " << MyMath::abs(-10) << endl;

	cout << "�� ���� ������: " << MyMath::min(a, b) << endl; //4
	cout << "�� ���� ū��: " << MyMath::max(a, b) << endl;   //5

	return 0;
}
