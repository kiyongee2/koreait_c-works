#include <iostream>
using namespace std;

int main()
{
	//��� ������

	cout << 10 / 4 << endl; //2(��), ����/����-> ����
	cout << 10 % 4 << endl; //2(������)

	//����� 2.5�� �Ƿ���...
	cout << 10 / 4.0 << endl; //2.5

	int n1 = 10;
	int n2 = 4;

	cout << n1 / n2 << endl; //2
	cout << n1 / (float)n2 << endl; //2.5(�ڵ� ����ȯ)
	//cout << n1++ << endl; //10�� ��µ� �� ���� ��(n1 = n1 + 1) 
	cout << ++n1 << endl; //�����(n1 = n1 + 1)�� 11�� ��µ� �� 
	cout << n1 << endl; //11

	//��, �� ������
	int a = 3, b = 4, c = 5;
	int res1, res2, res3;

	res1 = (a < b) && (b == c); //1 && 0 -> 0(false)
	res2 = (a < b) || (b == c); //1 || 0 -> 1(true)
	res3 = !(b > c); //!0 -> 1(true)

	cout << res1 << ", " << res2 << ", " << res3 << endl;

	return 0;
}