#ifndef SUBJECT_H  //���Ǻ� ������ �� ����
#define SUBJECT_H

#include <iostream>
using namespace std;

class Subject {
private:
	string subjectName;  //�����
	int scorePoint;      //����
public:
	//�⺻ ������
	//Subject();

	//��� �Լ�
	void setSubjectName(string subjectName);
	string getSubjectName();

	void setScorePoint(int scorePoint);
	int getScorePoint();

};
#endif  //���Ǻ� ������ �� ��

