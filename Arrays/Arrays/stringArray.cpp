#include <iostream>
using namespace std;

/*
   배열(Array)
   - 여러 개의 연속적인 값을 저장하는 자료 구조이다.
   - 배열은 []안에 값을 설정하여 메모리를 할당
   - 배열의 시작 번호는 0번 부터 시작함
*/

int main() {
	//문자열 배열 관리
	//배열의 선언과 동시에 초기화(저장)
	//string carts[3] = {"라면", "달걀", "화장지"};
	string carts[3]; //크기가 3인 문자열 배열 선언

	//요소 저장
	carts[0] = "라면";
	carts[1] = "달걀";
	carts[2] = "화장지";

	//특정 요소 검색(조회)
	cout << carts[0] << endl;  //라면
	cout << carts[1] << endl;  //달걀
	cout << carts[2] << endl;  //화장지

	//배열의 개수(크기) - size()
	cout << size(carts) << endl;

	//1번 위치의 값을 "초콜렛"로 변경
	carts[1] = "초콜렛";

	//전체 출력 - for문
	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << endl;
	}

	return 0;
}