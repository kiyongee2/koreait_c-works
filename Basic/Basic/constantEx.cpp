#include <iostream>
using namespace std;

/*
   ���(constant)
   - �� �� ������ �θ� �� ���α׷��� ����ɶ����� ������ �� ���� ���̴�.
   - ����� ���ڷ� ���� ǥ���ϴ� �ͺ��� �̸��� �ٿ� ���(�빮�� ����)
   - ���
     1. ��ũ�� ��� - #define ����̸� �����
	 2. const �ڷ��� ����̸�
*/
//#define PI 3.1415  //��ũ�� ���

int main()
{
	//���� ���� ��� : ������ x ������ x ������
	int radius = 6;
	double area;
	const double PI = 3.1415;  //const ��� ����

	area = PI * radius * radius;

	//�Ҽ� �ڸ��� ����
	cout << fixed;
	cout.precision(1); //�Ҽ� ù°
	cout << "���� ����: " << area << endl;


	return 0;
}