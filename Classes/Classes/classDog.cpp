#include <iostream>
using namespace std;
/*
   Ŭ����(class)
   - �繰(��ü)�� �߻�ȭ�Ͽ� �ڵ�� ������ �ڷ���(Data Type)�̴�.
   - �Ӽ�(��� ����)�� ���(�Լ�)�� �����ϰ� �ִ�.
   - ���(�йи�) ������ �⺻������ ���� ������(���� ���� - private)
   - ù���ڴ� �빮�ڷ� ������

*/

class Dog {
public:
	string type;  //������ ����
	int age;      //������ ����

	Dog() {};  //������(������)

	//�������� ����
	void dogInfo() {
		cout << "������ ����: " << type << endl;
		cout << "������ ����: " << age << endl;
	}
};

int main() {

	//Ŭ������ ����Ϸ��� �ν��Ͻ��� �����ؾ� ��
	Dog dog1;

	//������ ����(�Է�) - ��(.) ������ ���
	dog1.type = "��Ƽ��";
	dog1.age = 2;

	//������ ���
	dog1.dogInfo();


	return 0;
}
