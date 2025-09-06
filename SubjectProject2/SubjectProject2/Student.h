#ifndef STUDENT_H
#define STUDENT_H
#include "Subject.h"

class Student {
private:
	int studentId;         //�й�
	string studentName;    //�л� �̸�
	Subject subjects[10];  //���� Ŭ���� ����(�迭)
	int subjectCount = 0;  //�����(����)

public:
	//������
	Student(int studentId, string studentName);

	//���� �߰� �Լ� ����
	void addSubject(string name, int score);
	void showInfo();  //�л��� ���� ���
}; 
#endif