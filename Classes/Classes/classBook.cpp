#include <iostream>
using namespace std;

/*
   Book 클래스 생성

*/

class Book {
private:
	int number;    //책 번호
	string title;  //책 제목
	string author; //저자

public:
	Book();  // 기본 생성자 선언부

	//함수 선언부
	void setNumber(int _number);
	int getNumber();

	void setTitle(string _title);
	string getTitle();

	void setAuthor(string _author);
	string getAutor();
};

//기본 생성자 구현
Book::Book() {}

//함수 구현
//책 번호 입력
void Book::setNumber(int _number) {
	number = _number;
}
//책 번호 가져오기
int Book::getNumber() { return number; }

//책 제목 입력
void Book::setTitle(string _title) {
	title = _title;
}
//책 제목 가져오기
string Book::getTitle() { return title; }

//저자 입력
void Book::setAuthor(string _author) {
	author = _author;
}
//저자 가져오기
string Book::getAutor() { return author; }

int main() {

	//인스턴스 생성
	Book book1;

	//책 정보 입력
	book1.setNumber(1);
	book1.setTitle("채식주의자");
	book1.setAuthor("한강");

	//책 정보 출력
	cout << "책 번호: " << book1.getNumber() << endl;
	cout << "책 제목: " << book1.getTitle() << endl;
	cout << "저자: " << book1.getAutor() << endl;

	return 0;
}