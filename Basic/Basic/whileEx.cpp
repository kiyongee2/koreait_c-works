#include <iostream>
using namespace std;
/*
   �ݺ� ����(Repetition Structure) - �ݺ���, while, for
   
   1.�ʱⰪ
   while(2.��������){
     ���๮1;
	 3.������
   }
*/

int main(){

	//1, 2, 3... 10
	//¦���� ��� - 2�� ��� -> 3 % 2 = 0
	int n = 1;  //�ʱⰪ
	while (n <= 10) {  //���� ����
		if (n % 2 == 0) {
			cout << n << " ";
		}
		n++; //������
	}
	cout << endl;
	cout << "n = " << n << endl; //11

	//���� �ݺ��� - break�� ���� ����
	n = 1;  //�ʱ�ȭ
	while (true) { //while(1)
		if (n > 10) //���� ����
			break;  
		if (n % 2 == 0) {
			cout << n << " ";
		}
		n++;
	}

	return 0;
}