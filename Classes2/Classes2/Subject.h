//Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
using namespace std;

//과목 클래스 정의
class Subject {
private:
	string subjectName;  //과목 이름
	int scorePoint;      //점수

public:
	//setter(설정자) 함수
	void setSubjectName(string subjectName);
	void setScorePoint(int scorePoint);

	//getter(접근자) 함수
	string getSubjectName();
	int getScorePoint();
};

#endif 
