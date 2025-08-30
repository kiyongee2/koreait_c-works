#include <iostream>
using namespace std;
/*
   클래스(class)
   - 사물(객체)를 추상화하여 코드로 구현한 자료형(Data Type)이다.
   - 속성(멤버 변수)과 기능(함수)을 포함하고 있다.
   - 멤버(패밀리) 변수는 기본적으로 접근 불허함(접근 제어 - private)
   - 첫글자는 대문자로 시작함

*/

class Dog {
public:
	string type;  //강아지 종류
	int age;      //강아지 나이

	Dog() {};  //생성자(생략됨)

	//강아지의 정보
	void dogInfo() {
		cout << "강아지 종류: " << type << endl;
		cout << "강아지 나이: " << age << endl;
	}
};

int main() {

	//클래스를 사용하려면 인스턴스를 생성해야 함
	Dog dog1;

	//데이터 저장(입력) - 점(.) 연산자 사용
	dog1.type = "말티즈";
	dog1.age = 2;

	//데이터 출력
	dog1.dogInfo();


	return 0;
}
