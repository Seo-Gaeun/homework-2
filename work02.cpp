#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "work02.h"
using namespace std;

Player::Player(string& name) {

}
GamblingGame::GamblingGame() {
	//포인터로 배열 접근??
}

void GamblingGame::gameplay() {
	while (true){
		cout << "이름(코드 수정)" << ":<Enter>" << endl;
		cin.get();

		//0~2 랜덤 숫자 생성
		int num1 = rand() % 3;
		int num2 = rand() % 3;
		int num3 = rand() % 3;

		//숫자 같으면 break
		if (num1 == num2 and num2 == num3) {
			cout << "				" << num1 << "	" << num2 << "	" << num3 << "	" << "이름(코드 수정)" << "님 승리!!" << endl;
			break;
		}
		
		//다르면 continue
		cout << "				" << num1 << "	" << num2 << "	" << num3 << "	" << "아쉽군요!" << endl;

		//플레이어 변경
	}
}