//Car.cpp - 헤더파일에서 선언된 생성자나 함수를 구현하는 파일
//직접 만든 헤더 파일은 쌍따옴표로 묶어야 함

#include "Car.h"

//생성자 구현
Car::Car(string model, int year) {
	this->model = model;
	this->year = year;
}

//함수 구현
void Car::carInfo() {
	cout << "모델명: " << model
		<< ", 연식: " << year << endl;
}

void Car::drive() {
	cout << model << "가 달립니다.\n";
}