#include <iostream>
#include <ctime>  //�ð� ���� ���̺귯��- time(), clock()
using namespace std;

/*
    <time.h> -> <ctime>
	time() -> �ð� ����(���� �ð�, ������ �ð�)
*/

int main() {

	//���� �ð�(�ʷ� ȯ��� �ð�)
	time_t now = time(nullptr);  //C��� - time(NULL)

	//1970.1.1 ���� ���ĺ��� ��������� �ð�
	cout << now << "��\n"; //1756527307
	//��(day)�� ȯ��
	cout << now / (24*60*60) << "��\n"; //20330��

	//���� �ð� ����
	time_t start, end;
	int sum = 0;

	start = clock();  //���� �ð�
	for (int i = 1; i <= 1000000; i++) {
		sum += i;
	}
	end = clock(); //���� �ð�

	//CLOCKS_PER_SEC - �� ���� ��ȯ ���
	double duration = (double)(end - start) / CLOCKS_PER_SEC; 
	cout << "sum = " << sum << endl;

	cout << "���� �ð�: " << duration << "��\n";
	return 0;
}
