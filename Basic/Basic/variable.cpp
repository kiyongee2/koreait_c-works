#include <iostream>
using namespace std;  //std�� ����(main���� ����)

int main()
{
	//cout << "Hello~ World!" << endl;

	/*
	   c++�� �߰��� �ڷ��� - bool, string
	*/
	//������ �ڷ�
	char ch1 = 'A';
	int ch2 = 65;
	char ch3[] = "��";  //c���� ǥ��
	string str1 = "��"; //c++ ǥ��
	string str2 = "computer";

	cout << ch1 << endl;  //A, 
	cout << (char)ch2 << endl;  //A
	cout << ch3 << endl;  //��
	cout << str1 << ", " << str2 << endl; //��, computer

	//bool �ڷ��� - true(1)/false(0) ��� ���
	bool value;

	value = true;
	cout << value << endl; //1

	value = false;
	cout << value << endl; //0

	//���� ������ ��� - (���ǽ�) ? "��" : "����"
	int n1 = 10, n2 = 20;
	bool b1 = (n1 < n2);
	bool b2 = (n1 == n2);
	string result = (n1 > n2) ? "��" : "����";

	cout << b1 << "," << b2 << endl;  //1, 0
	cout << result << endl; //����

	return 0;
}