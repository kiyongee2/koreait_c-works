#include "Student.h"

int main() {

	//�迭�� �ν��Ͻ� ����(���� �Ҵ�)
	const int SIZE = 3;

	Student* students = new Student[SIZE]{
		Student(1001, "�ڻ���"),
		Student(1002, "������"),
		Student(1003, "������")
	};

	//���� �Է�
	students[0].addSubject("����", 90);
	students[0].addSubject("����", 80);
	students[1].addSubject("����", 80);
	students[1].addSubject("����", 75);
	students[2].addSubject("����", 85);
	students[2].addSubject("����", 95);

	//���
	for (int i = 0; i < SIZE; i++) {
		students[i].showInfo();
	}

	//�޸� ����
	delete[] students;

	/*//Student ������ ȣ��
	Student park(1001, "�ڻ���");

	//���� �Է�(����)
	park.addSubject("����", 90);
	park.addSubject("����", 80);
	park.addSubject("�̼�", 75);

	//���
	park.showInfo();*/

	return 0;
}