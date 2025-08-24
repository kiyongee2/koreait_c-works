#include <iostream>
using namespace std;
/*
    자리 배치도
    - 고객수 입력
    - 좌석의 열수 입력
    - 줄수 계산 방식
      1. 고객수가 열수로 나누어 떨어지는 경우 - 줄수(몫)
      2. 고객수가 열수로 나누어 떨어지지 않는 경우 - 줄수(몫) + 1
    - 외부 for문 : 줄수(행)
    - 내부 for문 : 열수(열)
*/

int main() {
    int customer;  //입장객 수
    int column; //좌석 열수
    int row; //줄수

    cout << "입장객 수 입력: ";
    cin >> customer;

    cout << "좌석 열 수 입력: ";
    cin >> column;

    if (customer % column == 0) {
        row = customer / column;  //몫
    }
    else {
        row = customer / column + 1; //몫 + 1
    }
    //cout << row << "개의 줄이 필요합니다.\n";
    //자리 배치
    cout << "********* 자리 배치도 **********\n";
    for (int i = 0; i < row; i++) { //행
        for (int j = 1; j <= column; j++) { //열
            int num = column * i + j;
            if (num > customer)
                break;
            cout << "좌석" << num << " ";
        }
        cout << "\n";
    }

}