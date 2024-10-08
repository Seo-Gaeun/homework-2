#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "work02.h"
using namespace std;

//메인 함수
int main() {
    srand((unsigned)time(0));



    string name1, name2;
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    
    cout << "첫번째 선수 이름>>" << endl;
    getline(cin, name1);
    cin.ignore();

    cout << "두번째 선수 이름>>" << endl;
    getline(cin, name2);
    cin.ignore();
    
    




    return 0; //메인 함수 종료
}