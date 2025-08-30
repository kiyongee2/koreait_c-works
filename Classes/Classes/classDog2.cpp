#include <iostream>
using namespace std;
/*
    * 클래스의 구성 요소 - 멤버 변수, 생성자, 멤버 함수
	* 생성자(Constructor)
	  - 기본 생성자: 생략 가능
	  - 매개변수(인자)가 있는 생성자
	* 소멸자
	  - 생략해도 자동으로 생성
	  - 생성자 이름앞에 '~'을 붙인다
*/

class Dog {
public:
	string type;
	int age;

	Dog() { //기본 생성자
		cout << "생성자 입니다\n";
	}  

	~Dog() {
		cout << "소멸자 입니다\n";
	}

	//매개 변수가 있는 생성자
	Dog(string _type, int _age) {
		type = _type;
		age = _age;
	}

	void dogInfo() {
		cout << "강아지 종류: " << type << endl;
		cout << "강아지 나이: " << age << endl;
	}
};

int main() {

	//기본 생성자로 인스턴스 생성
	Dog dog1;
	dog1.type = "말티즈";
	dog1.age = 2;
	dog1.dogInfo();

	//외부에서 입력해서 인스턴스 생성
	Dog dog2("진돗개", 3);

	dog2.dogInfo();
	return 0;
}
