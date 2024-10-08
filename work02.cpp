#include "work02.h"

using namespace std;

GamblingGame::GamblingGame() {
    cout << "***** ���� ������ �����մϴ�. *****\n";
    srand(time(NULL));
}

void GamblingGame::nameSet() {
    string name;
    cout << "ù��° ���� �̸�>>";
    cin >> name;
    players[0].setName(name);
    cout << "�ι�° ���� �̸�>>";
    cin >> name;
    players[1].setName(name);
}

string GamblingGame::ranNum(string playerName) {
    int randomNumbers[3];
    cout << "\t\t";
    for (int i = 0; i < 3; i++) {
        randomNumbers[i] = rand() % 3;
        cout << randomNumbers[i] << "\t";
    }
    if (randomNumbers[0] == randomNumbers[1] && randomNumbers[0] == randomNumbers[2]) {
        playerName += "�� �¸�!!";
        return playerName;
    }
    else
        return "�ƽ�����!";
}

void GamblingGame::startGame() {
    string result;
    int turn = 0;
    while (true) {
        string currentPlayer;
        cout << players[turn % 2].getName() << ":\n";
        getline(cin, result);
        currentPlayer = players[turn % 2].getName();
        result = ranNum(result);
        if (result == "�� �¸�!!") {
            cout << currentPlayer + result;
            break;
        }
        else
            cout << result << endl;
        turn++;
    }
}

void Player::setName(string n) {
    playerName = n;
}
