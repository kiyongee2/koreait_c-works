#include <iostream>
using namespace std;

/*
   Book 클래스 생성
   this 키워드 사용
   - 멤버변수와 외부 입력 변수의 이름을 일치시킴
   - 멤버변수는 this를 사용하여 화살표 기호로 접근함
*/

class Book {
private:
	int number;    //책 번호
	string title;  //책 제목
	string author; //저자

public:
	//생성자
	Book(int number, string title, string author);

	void bookInfo();
};

//선언과 구현부 분리
Book::Book(int number, string title, string author) {
	this->number = number;
	this->title = title;
	this->author = author;
}

void Book::bookInfo() {
	cout << "책 번호: " << number << endl;
	cout << "책 이름: " << title << endl;
	cout << "저자: " << author << endl;
}

int main() {
	//객체 배열
	Book books[3] = {
		Book(1, "채식주의자", "한강"),
		Book(2, "C++ 프로그래밍", "박철수"),
		Book(3, "Python 프로그래밍", "김선화"),
	};

	cout << "========== 책의 정보 ==========\n";
	for (int i = 0; i < 3; i++) {
		books[i].bookInfo();
		cout << "-------------------------\n";
	}

	return 0;
}