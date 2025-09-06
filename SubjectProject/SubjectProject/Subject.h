#ifndef SUBJECT_H  //조건부 컴파일 블럭 시작
#define SUBJECT_H

#include <iostream>
using namespace std;

class Subject {
private:
	string subjectName;  //과목명
	int scorePoint;      //점수
public:
	//기본 생성자
	//Subject();

	//멤버 함수
	void setSubjectName(string subjectName);
	string getSubjectName();

	void setScorePoint(int scorePoint);
	int getScorePoint();

};
#endif  //조건부 컴파일 블럭 끝

