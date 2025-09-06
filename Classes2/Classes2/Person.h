#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Bus.h"
using namespace std;

class Person {
private:
	string name;  //이름
	int money;    //가진 돈
public:
	Person(string name, int money);

	void takeBus(Bus& bus); //버스를 타다
	void displayInfo();     //사람의 정보 출력
}; 
#endif 
