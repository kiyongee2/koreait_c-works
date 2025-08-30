#include <iostream>
using namespace std;

/*
    * ���� ������ ���
	  - private: ��� ������ �⺻�� private �Ӽ���
	  - public: �����ڿ� �Լ��� public��

	* �����ڴ� Ŭ���� �̸��� �����ϴ�.

*/
class Dog {
private:
	string type;
	int age;

public:
	Dog() {}

	//setter �Լ� - set + �������()
	void setType(string _type) {
		type = _type; //�ܺο��� �Է��� �����͸� ��������� ����
	}

	void setAge(int _age) {
		age = _age;
	}

	//getter �Լ� - get + �������()
	string getType() { return type; }

	int getAge() { return age; }
};

int main() {

	Dog dog1;
	//dog1.type; //private �̹Ƿ� ���� �Ұ�

	//�Լ��� �Ű������� �Է�(����)
	dog1.setType("��Ƽ��");
	dog1.setAge(2);

	//���
	cout << "������ ����: " << dog1.getType() << endl;
	cout << "������ ����: " << dog1.getAge() << endl;

	return 0;
}
