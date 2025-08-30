#include <iostream>
#include <ctime>  //시간 관련 라이브러리- time(), clock()
using namespace std;

/*
    <time.h> -> <ctime>
	time() -> 시간 측정(수행 시간, 지나온 시간)
*/

int main() {

	//현재 시각(초로 환산된 시각)
	time_t now = time(nullptr);  //C언어 - time(NULL)

	//1970.1.1 자정 이후부터 현재까지의 시간
	cout << now << "초\n"; //1756527307
	//일(day)로 환산
	cout << now / (24*60*60) << "일\n"; //20330일

	//수행 시간 측정
	time_t start, end;
	int sum = 0;

	start = clock();  //시작 시간
	for (int i = 1; i <= 1000000; i++) {
		sum += i;
	}
	end = clock(); //종료 시간

	//CLOCKS_PER_SEC - 초 단위 변환 상수
	double duration = (double)(end - start) / CLOCKS_PER_SEC; 
	cout << "sum = " << sum << endl;

	cout << "수행 시간: " << duration << "초\n";
	return 0;
}
