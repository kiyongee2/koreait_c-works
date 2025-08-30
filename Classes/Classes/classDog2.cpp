#include <iostream>
using namespace std;
/*
    * Ŭ������ ���� ��� - ��� ����, ������, ��� �Լ�
	* ������(Constructor)
	  - �⺻ ������: ���� ����
	  - �Ű�����(����)�� �ִ� ������
	* �Ҹ���
	  - �����ص� �ڵ����� ����
	  - ������ �̸��տ� '~'�� ���δ�
*/

class Dog {
public:
	string type;
	int age;

	Dog() { //�⺻ ������
		cout << "������ �Դϴ�\n";
	}  

	~Dog() {
		cout << "�Ҹ��� �Դϴ�\n";
	}

	//�Ű� ������ �ִ� ������
	Dog(string _type, int _age) {
		type = _type;
		age = _age;
	}

	void dogInfo() {
		cout << "������ ����: " << type << endl;
		cout << "������ ����: " << age << endl;
	}
};

int main() {

	//�⺻ �����ڷ� �ν��Ͻ� ����
	Dog dog1;
	dog1.type = "��Ƽ��";
	dog1.age = 2;
	dog1.dogInfo();

	//�ܺο��� �Է��ؼ� �ν��Ͻ� ����
	Dog dog2("������", 3);

	dog2.dogInfo();
	return 0;
}
