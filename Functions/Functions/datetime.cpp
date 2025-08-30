#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
/*
    ��¥�� �ð� ǥ��
	- localtime() : ���� �ð�(����)
*/

int main() {

	time_t ct = time(nullptr);  //���� �ð�(�� ����)
	struct tm* now = localtime(&ct);  //���� �ð� ��ȯ

	cout << "���� ��¥: "
		<< now->tm_year + 1900 << ". "
		<< now->tm_mon + 1 << ". "
		<< now->tm_mday << endl;

	//24 �ð���
	cout << "���� �ð�: "
		<< now->tm_hour << " : "
		<< now->tm_min << " : "
		<< now->tm_sec << endl; 

	//���� ����
	//cout << now->tm_wday << endl; //0-��, 1-��... 6-��

	//const char* weekdays[] = {"��", "��", "ȭ", "��", "��", "��", "��"};
	string weekdays[] = { "��", "��", "ȭ", "��", "��", "��", "��" };

	cout << "������ " << weekdays[now->tm_wday] << "���� �Դϴ�.\n";

	//����, ���� ǥ��
	string ampm = (now->tm_hour < 12) ? "����" : "����";

	//12 �ð���
	int hour12 = now->tm_hour % 12;  //0 ~ 11��
	if (hour12 == 0)
		hour12 = 12;

	cout << "���� �ð�: "
		<< ampm << " " << hour12 << " : "
		<< now->tm_min << " : " << now->tm_sec;

	return 0;
}
