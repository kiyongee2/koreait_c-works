//Main ����
#include "Student.h"

int main() {

	//Student ������ ȣ�� - st1(�ν��Ͻ�)
	Student st1(1001, "�輱ȭ");
	Student st2(1002, "���");

	//���� �Է�
	st1.setKoreanSubject("����", 90);
	st1.setMathSubject("����", 80);
	st2.setKoreanSubject("����", 85);
	st2.setMathSubject("����", 75);

	//�л� ���� ���
	st1.showInfo();
	st2.showInfo();

	return 0;
}