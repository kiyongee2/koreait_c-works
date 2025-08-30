#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;
/*
    날짜와 시간 표기
	- localtime() : 지역 시간(나라별)
*/

int main() {

	time_t ct = time(nullptr);  //현재 시간(초 단위)
	struct tm* now = localtime(&ct);  //지역 시간 변환

	cout << "오늘 날짜: "
		<< now->tm_year + 1900 << ". "
		<< now->tm_mon + 1 << ". "
		<< now->tm_mday << endl;

	//24 시각제
	cout << "현재 시간: "
		<< now->tm_hour << " : "
		<< now->tm_min << " : "
		<< now->tm_sec << endl; 

	//현재 요일
	//cout << now->tm_wday << endl; //0-일, 1-월... 6-토

	//const char* weekdays[] = {"일", "월", "화", "수", "목", "금", "토"};
	string weekdays[] = { "일", "월", "화", "수", "목", "금", "토" };

	cout << "오늘은 " << weekdays[now->tm_wday] << "요일 입니다.\n";

	//오전, 오후 표기
	string ampm = (now->tm_hour < 12) ? "오전" : "오후";

	//12 시각제
	int hour12 = now->tm_hour % 12;  //0 ~ 11시
	if (hour12 == 0)
		hour12 = 12;

	cout << "현재 시간: "
		<< ampm << " " << hour12 << " : "
		<< now->tm_min << " : " << now->tm_sec;

	return 0;
}
