#include <iostream>
using namespace std;

/*
   Book Ŭ���� ����

*/

class Book {
private:
	int number;    //å ��ȣ
	string title;  //å ����
	string author; //����

public:
	Book();  // �⺻ ������ �����

	//�Լ� �����
	void setNumber(int _number);
	int getNumber();

	void setTitle(string _title);
	string getTitle();

	void setAuthor(string _author);
	string getAutor();
};

//�⺻ ������ ����
Book::Book() {}

//�Լ� ����
//å ��ȣ �Է�
void Book::setNumber(int _number) {
	number = _number;
}
//å ��ȣ ��������
int Book::getNumber() { return number; }

//å ���� �Է�
void Book::setTitle(string _title) {
	title = _title;
}
//å ���� ��������
string Book::getTitle() { return title; }

//���� �Է�
void Book::setAuthor(string _author) {
	author = _author;
}
//���� ��������
string Book::getAutor() { return author; }

int main() {

	//�ν��Ͻ� ����
	Book book1;

	//å ���� �Է�
	book1.setNumber(1);
	book1.setTitle("ä��������");
	book1.setAuthor("�Ѱ�");

	//å ���� ���
	cout << "å ��ȣ: " << book1.getNumber() << endl;
	cout << "å ����: " << book1.getTitle() << endl;
	cout << "����: " << book1.getAutor() << endl;

	return 0;
}