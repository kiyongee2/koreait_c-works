//Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
using namespace std;

//���� Ŭ���� ����
class Subject {
private:
	string subjectName;  //���� �̸�
	int scorePoint;      //����

public:
	//setter(������) �Լ�
	void setSubjectName(string subjectName);
	void setScorePoint(int scorePoint);

	//getter(������) �Լ�
	string getSubjectName();
	int getScorePoint();
};

#endif 
