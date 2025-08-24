#include <iostream>
using namespace std;

int main() {

	//Åë°è - °³¼ö, ÇÕ°è, Æò±Õ
	int arr[] = { 90, 80, 75, 100 };
	int count; //°³¼ö
	int sum = 0;   //ÃÑÁ¡
	float average; //Æò±Õ 

	//¹è¿­ÀÇ °³¼ö
	count = size(arr);
	cout << "°³¼ö: " << count << endl;

	//¹è¿­ÀÇ ÃÑÁ¡
	//cout << arr[0] + arr[1] + arr[2] + arr[3] << endl; //345
	for (int i = 0; i < count; i++) {
		sum += arr[i]; //sum = sum + arr[i];
	}
	//Æò±Õ = ÃÑÁ¡ / °³¼ö
	average = (float)sum / count;

	cout << "ÃÑÁ¡: " << sum << endl;
	cout << "Æò±Õ: " << average << endl;

	return 0;
}
