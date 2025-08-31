//Car.h - 헤더파일(클래스 정의, 변수나 함수의 선언)
//조건부 컴파일 블록 - 클래스이름 중복 사용 방지
#ifndef CAR_H
#define CAR_H  //매크로 이름 정의

#include <iostream>
using namespace std;

class Car {
private:
	string model;  //모델명
	int year;      //연식

public:
	//생성자 - 선언
	Car(string model, int year);

	//함수 - 선언
	void carInfo();
	void drive();
};

#endif 
