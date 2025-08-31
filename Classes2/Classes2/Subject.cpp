//Subject.cpp
#include "Subject.h"

//멤버 함수 구현
void Subject::setSubjectName(string subjectName) {
	this->subjectName = subjectName;
}

string Subject::getSubjectName() {return subjectName;}

void Subject::setScorePoint(int scorePoint) {
	this->scorePoint = scorePoint;
}

int Subject::getScorePoint() { return scorePoint; }