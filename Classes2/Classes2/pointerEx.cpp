#include <iostream>
using namespace std;
/*
    메모리 동적 할당 - 힙(heap) 영역 사용
	포인터 - 메모리 주소를 저장하는 자료형
*/

int main() {

	int* ptr;
	ptr = new int; //변수 동적 할당(ptr 생성)
	if (ptr == nullptr) {
		cout << "메모리 할당 실패!\n";
		return -1; //비정상 종료
	}

	*ptr = 5;
	//cout << *ptr << endl;  //5

	//배열 - 동적 할당
	int* pa;
	pa = new int[10];

	//값 저장
	/*pa[0] = 10;
	pa[1] = 20;
	pa[2] = 30;*/

	//값 출력
	//cout << pa[0] << " " << pa[1] << " " << pa[2] << endl;
	//cout << *pa << " " << *(pa + 1) << " " << *(pa + 2) << endl;

	//1부터 10까지 저장
	for (int i = 0; i < 10; i++) {
		pa[i] = i + 1;
	}

	//출력
	for (int i = 0; i < 10; i++) {
		//cout << pa[i] << " ";
		cout << *(pa + i) << " ";
	}

	//메모리 해제(반납)
	delete ptr;
	delete[] pa;

	/*
	* 정적 할당 - 메모리 스택 영역 사용
	//데이터 타입* 포인터;
	int* ptr;

	cout << &ptr << endl; //0000001B7716FA28

	//주소 연산자를 이용해서 다른 변수의 주소를 할당
	int num = 3;

	ptr = &num;;

	cout << num << endl;  //3
	cout << *ptr << endl; //3, 역 참조 - 값을 확인

	*ptr = *ptr + 10;
	cout << *ptr << endl;  //13
	cout << num << endl;   //13
	*/

	return 0;
}