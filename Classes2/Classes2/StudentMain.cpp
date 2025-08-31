//Main 파일
#include "Student.h"

int main() {

	//Student 생성자 호출 - st1(인스턴스)
	Student st1(1001, "김선화");
	Student st2(1002, "우상영");

	//과목 입력
	st1.setKoreanSubject("국어", 90);
	st1.setMathSubject("수학", 80);
	st2.setKoreanSubject("국어", 85);
	st2.setMathSubject("수학", 75);

	//학생 정보 출력
	st1.showInfo();
	st2.showInfo();

	return 0;
}