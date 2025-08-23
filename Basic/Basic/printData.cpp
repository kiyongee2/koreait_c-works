#include <iostream>
/*
   파일명: printData.cpp
   만든이: 김기용
   프로그램: Hello~ World 테스트
*/

int main()
{
	/*
	   std(소속을 의미하는 이름공간[namespace])
	   :: - 콜론2개(범위,소속 연산자)
	   << - 시프트연산자: 오른쪽의 데이터를 왼쪽 스트림 객체에 넣는다.
	*/
	std::cout << "Hello~ World" << std::endl;
	std::cout << "안녕~ 세계야!\n"; //'\n' 줄바꿈 기호

	return 0;
}