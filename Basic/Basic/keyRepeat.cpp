#include <iostream>
using namespace std;

int main()
{
	string key;  //�Է��� ���� ����

	while (true) {
		cout << "��� �ݺ��ұ��(y/n �Է�)? ";
		cin >> key;

		if (key.compare("y") == 0 || key.compare("Y") == 0) {
			cout << "��� �ݺ�!\n";
		}
		else if (key.compare("n") == 0 || key.compare("N") == 0) {
			cout << "�ݺ� �ߴ�\n";
			break; //while�� �ݺ� ����
		}
		else {
			cout << "�߸��� �Է��Դϴ�! �ٽ� �Է��ϼ���!\n";
		}
	}

	return 0;
}