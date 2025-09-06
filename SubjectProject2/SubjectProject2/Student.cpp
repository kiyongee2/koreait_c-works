#include "Student.h"

//생성자 구현
Student::Student(int studentId, string studentName) {
	this->studentId = studentId;
	this->studentName = studentName;
}

//과목 추가
void Student::addSubject(string name, int score) {
	if (subjectCount < 10) { //과목수 제한
		subjects[subjectCount].setSubjectName(name); //과목명 저장
		subjects[subjectCount].setScorePoint(score); //점수 저장
		subjectCount++;  //과목수 1 증가
	}
}

//학생 정보
void Student::showInfo() {
	cout << "학번: " << studentId
		<< "\n이름: " << studentName << endl;
	//과목(점수)
	for (int i = 0; i < subjectCount; i++) {
		cout << subjects[i].getSubjectName()
			<< " 점수: " << subjects[i].getScorePoint() << "점\n";
	}
	cout << "-------------------------\n";
}