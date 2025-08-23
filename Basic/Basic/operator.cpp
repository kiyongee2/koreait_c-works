#include <iostream>
using namespace std;

int main()
{
	//몫과 나머지

	cout << 10 / 4 << endl; //2(몫), 정수/정수-> 정수
	cout << 10 % 4 << endl; //2(나머지)

	//결과가 2.5가 되려면...
	cout << 10 / 4.0 << endl; //2.5

	int n1 = 10;
	int n2 = 4;

	cout << n1 / n2 << endl; //2
	cout << n1 / (float)n2 << endl; //2.5(자동 형변환)
	//cout << n1++ << endl; //10이 출력된 후 연산 됨(n1 = n1 + 1) 
	cout << ++n1 << endl; //연산된(n1 = n1 + 1)후 11이 출력된 후 
	cout << n1 << endl; //11

	//비교, 논리 연산자
	int a = 3, b = 4, c = 5;
	int res1, res2, res3;

	res1 = (a < b) && (b == c); //1 && 0 -> 0(false)
	res2 = (a < b) || (b == c); //1 || 0 -> 1(true)
	res3 = !(b > c); //!0 -> 1(true)

	cout << res1 << ", " << res2 << ", " << res3 << endl;

	return 0;
}