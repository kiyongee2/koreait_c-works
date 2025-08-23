#include <iostream>
#include <string> //compare()
using namespace std;
/*
   선택 구조(Choice Structure) - 조건문, if, switch
*/

int main()
{
	//숫자 비교
	int n1 = 10;
	int n2 = 20;

	if (n1 == n2) { //동등 연산자로 비교
		cout << "두 수는 같습니다.\n";
	}
	else { //n1 != n2
		cout << "두 수는 같지 않습니다.\n";
	}

	//문자 비교
	string str1 = "사과";
	string str2 = "바나나";

	//문자열 비교 함수 - compare(대상 문자열), c언어 - strcmp()
	//문자열.compare() - 점(.) 연산자로 접근
	cout << str1.compare(str2) << endl; //1(다름), 0(같음)

	if (str1.compare(str2) == 0) {
		cout << "두 문자열이 일치합니다.\n";
	}
	else {// str1.compare(str2) == 1
		cout << "두 문자열이 일치하지 않습니다.\n";
	}

	return 0;
}