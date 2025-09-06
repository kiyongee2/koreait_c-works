#include "Student.h"

int main() {

	//배열로 인스턴스 생성(동적 할당)
	const int SIZE = 3;

	Student* students = new Student[SIZE]{
		Student(1001, "박상희"),
		Student(1002, "이정후"),
		Student(1003, "신유빈")
	};

	//과목 입력
	students[0].addSubject("국어", 90);
	students[0].addSubject("수학", 80);
	students[1].addSubject("국어", 80);
	students[1].addSubject("수학", 75);
	students[2].addSubject("국어", 85);
	students[2].addSubject("수학", 95);

	//출력
	for (int i = 0; i < SIZE; i++) {
		students[i].showInfo();
	}

	//메모리 해제
	delete[] students;

	/*//Student 생성자 호출
	Student park(1001, "박상희");

	//과목 입력(저장)
	park.addSubject("국어", 90);
	park.addSubject("수학", 80);
	park.addSubject("미술", 75);

	//출력
	park.showInfo();*/

	return 0;
}