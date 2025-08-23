#include <iostream>
using namespace std;  //std를 선언(main에서 생략)

int main()
{
	//cout << "Hello~ World!" << endl;

	/*
	   c++에 추가된 자료형 - bool, string
	*/
	//문자형 자료
	char ch1 = 'A';
	int ch2 = 65;
	char ch3[] = "가";  //c언어식 표기
	string str1 = "가"; //c++ 표기
	string str2 = "computer";

	cout << ch1 << endl;  //A, 
	cout << (char)ch2 << endl;  //A
	cout << ch3 << endl;  //가
	cout << str1 << ", " << str2 << endl; //가, computer

	//bool 자료형 - true(1)/false(0) 결과 출력
	bool value;

	value = true;
	cout << value << endl; //1

	value = false;
	cout << value << endl; //0

	//조건 연산자 사용 - (조건식) ? "참" : "거짓"
	int n1 = 10, n2 = 20;
	bool b1 = (n1 < n2);
	bool b2 = (n1 == n2);
	string result = (n1 > n2) ? "참" : "거짓";

	cout << b1 << "," << b2 << endl;  //1, 0
	cout << result << endl; //거짓

	return 0;
}