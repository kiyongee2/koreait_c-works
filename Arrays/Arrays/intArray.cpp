#include <iostream>
using namespace std;

int main() {

	//��� - ����, �հ�, ���
	int arr[] = { 90, 80, 75, 100 };
	int count; //����
	int sum = 0;   //����
	float average; //��� 

	//�迭�� ����
	count = size(arr);
	cout << "����: " << count << endl;

	//�迭�� ����
	//cout << arr[0] + arr[1] + arr[2] + arr[3] << endl; //345
	for (int i = 0; i < count; i++) {
		sum += arr[i]; //sum = sum + arr[i];
	}
	//��� = ���� / ����
	average = (float)sum / count;

	cout << "����: " << sum << endl;
	cout << "���: " << average << endl;

	return 0;
}
