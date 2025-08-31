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

	//��ü �迭
	Book book[3];

	book[0].setNumber(1);
	book[0].setTitle("ä��������");
	book[0].setAuthor("�Ѱ�");

	book[1].setNumber(2);
	book[1].setTitle("C++ ���α׷���");
	book[1].setAuthor("��ö��");

	book[2].setNumber(3);
	book[2].setTitle("Python ���α׷���");
	book[2].setAuthor("�輱ȭ");

	//���
	for (int i = 0; i < 3; i++) {
		cout << "å ��ȣ: " << book[i].getNumber() << endl;
		cout << "å ����: " << book[i].getTitle() << endl;
		cout << "����: " << book[i].getAutor() << endl;
		cout << "-----------------------------\n";
	}

	/*
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
	*/

	return 0;
}