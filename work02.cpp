#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "work02.h"
using namespace std;

Player::Player(string& name) {

}
GamblingGame::GamblingGame() {
	//�����ͷ� �迭 ����??
}

void GamblingGame::gameplay() {
	while (true){
		cout << "�̸�(�ڵ� ����)" << ":<Enter>" << endl;
		cin.get();

		//0~2 ���� ���� ����
		int num1 = rand() % 3;
		int num2 = rand() % 3;
		int num3 = rand() % 3;

		//���� ������ break
		if (num1 == num2 and num2 == num3) {
			cout << "				" << num1 << "	" << num2 << "	" << num3 << "	" << "�̸�(�ڵ� ����)" << "�� �¸�!!" << endl;
			break;
		}
		
		//�ٸ��� continue
		cout << "				" << num1 << "	" << num2 << "	" << num3 << "	" << "�ƽ�����!" << endl;

		//�÷��̾� ����
	}
}