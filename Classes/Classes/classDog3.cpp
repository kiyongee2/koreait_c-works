#include <iostream>
using namespace std;

/*
    * 접근 제어자 사용
	  - private: 멤버 변수는 기본이 private 속성임
	  - public: 생성자와 함수는 public임

	* 생성자는 클래스 이름과 동일하다.

*/
class Dog {
private:
	string type;
	int age;

public:
	Dog() {}

	//setter 함수 - set + 멤버변수()
	void setType(string _type) {
		type = _type; //외부에서 입력한 데이터를 멤버변수에 저장
	}

	void setAge(int _age) {
		age = _age;
	}

	//getter 함수 - get + 멤버변수()
	string getType() { return type; }

	int getAge() { return age; }
};

int main() {

	Dog dog1;
	//dog1.type; //private 이므로 접근 불가

	//함수의 매개변수로 입력(저장)
	dog1.setType("말티즈");
	dog1.setAge(2);

	//출력
	cout << "강아지 종류: " << dog1.getType() << endl;
	cout << "강아지 나이: " << dog1.getAge() << endl;

	return 0;
}
