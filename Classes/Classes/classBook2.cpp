#include <iostream>
using namespace std;

/*
   Book Ŭ���� ����
   this Ű���� ���
   - ��������� �ܺ� �Է� ������ �̸��� ��ġ��Ŵ
   - ��������� this�� ����Ͽ� ȭ��ǥ ��ȣ�� ������
*/

class Book {
private:
	int number;    //å ��ȣ
	string title;  //å ����
	string author; //����

public:
	//������
	Book(int number, string title, string author);

	void bookInfo();
};

//����� ������ �и�
Book::Book(int number, string title, string author) {
	this->number = number;
	this->title = title;
	this->author = author;
}

void Book::bookInfo() {
	cout << "å ��ȣ: " << number << endl;
	cout << "å �̸�: " << title << endl;
	cout << "����: " << author << endl;
}

int main() {
	//��ü �迭
	Book books[3] = {
		Book(1, "ä��������", "�Ѱ�"),
		Book(2, "C++ ���α׷���", "��ö��"),
		Book(3, "Python ���α׷���", "�輱ȭ"),
	};

	cout << "========== å�� ���� ==========\n";
	for (int i = 0; i < 3; i++) {
		books[i].bookInfo();
		cout << "-------------------------\n";
	}

	return 0;
}