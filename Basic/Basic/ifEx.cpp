#include <iostream>
#include <string> //compare()
using namespace std;
/*
   ���� ����(Choice Structure) - ���ǹ�, if, switch
*/

int main()
{
	//���� ��
	int n1 = 10;
	int n2 = 20;

	if (n1 == n2) { //���� �����ڷ� ��
		cout << "�� ���� �����ϴ�.\n";
	}
	else { //n1 != n2
		cout << "�� ���� ���� �ʽ��ϴ�.\n";
	}

	//���� ��
	string str1 = "���";
	string str2 = "�ٳ���";

	//���ڿ� �� �Լ� - compare(��� ���ڿ�), c��� - strcmp()
	//���ڿ�.compare() - ��(.) �����ڷ� ����
	cout << str1.compare(str2) << endl; //1(�ٸ�), 0(����)

	if (str1.compare(str2) == 0) {
		cout << "�� ���ڿ��� ��ġ�մϴ�.\n";
	}
	else {// str1.compare(str2) == 1
		cout << "�� ���ڿ��� ��ġ���� �ʽ��ϴ�.\n";
	}

	return 0;
}