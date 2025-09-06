#ifndef STUDENT_H
#define STUDENT_H
#include "Subject.h"

class Student {
private:
	int studentId;         //학번
	string studentName;    //학생 이름
	Subject subjects[10];  //과목 클래스 참조(배열)
	int subjectCount = 0;  //과목수(현재)

public:
	//생성자
	Student(int studentId, string studentName);

	//과목 추가 함수 선언
	void addSubject(string name, int score);
	void showInfo();  //학생의 정보 출력
}; 
#endif