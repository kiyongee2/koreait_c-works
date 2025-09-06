#include <iostream>
using namespace std;
/*
   static이 붙은 함수 - 정적 멤버 함수
   - 정적 멤버함수는 인스턴스를 생성하지 않고, 
     클래스 이름으로 직접 접근한다.
*/
class MyMath {
public:
	//절대값 계산 함수
	static int abs(int x) {
		return (x < 0) ? -x : x;
	}

	//두 수중 작은 수 찾기
	static int min(int x, int y) {
		return (x < y) ? x : y;
	}

	//두 수중 큰 수 찾기
	static int max(int x, int y) {
		return (x > y) ? x : y;
	}
};


int main() {

	//인스턴스형으로 생성할수 있지만 사용하지 않음
	/*MyMath math1;
	cout << math1.abs(-10) << endl;*/

	int a = 4, b = 5;

	//클래스 이름으로 직접 접근
	cout << "절대값 결과: " << MyMath::abs(-10) << endl;

	cout << "두 수중 작은수: " << MyMath::min(a, b) << endl; //4
	cout << "두 수중 큰수: " << MyMath::max(a, b) << endl;   //5

	return 0;
}
