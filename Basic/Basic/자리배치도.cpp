#include <iostream>
using namespace std;
/*
    �ڸ� ��ġ��
    - ���� �Է�
    - �¼��� ���� �Է�
    - �ټ� ��� ���
      1. ������ ������ ������ �������� ��� - �ټ�(��)
      2. ������ ������ ������ �������� �ʴ� ��� - �ټ�(��) + 1
    - �ܺ� for�� : �ټ�(��)
    - ���� for�� : ����(��)
*/

int main() {
    int customer;  //���尴 ��
    int column; //�¼� ����
    int row; //�ټ�

    cout << "���尴 �� �Է�: ";
    cin >> customer;

    cout << "�¼� �� �� �Է�: ";
    cin >> column;

    if (customer % column == 0) {
        row = customer / column;  //��
    }
    else {
        row = customer / column + 1; //�� + 1
    }
    //cout << row << "���� ���� �ʿ��մϴ�.\n";
    //�ڸ� ��ġ
    cout << "********* �ڸ� ��ġ�� **********\n";
    for (int i = 0; i < row; i++) { //��
        for (int j = 1; j <= column; j++) { //��
            int num = column * i + j;
            if (num > customer)
                break;
            cout << "�¼�" << num << " ";
        }
        cout << "\n";
    }

}