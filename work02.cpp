#include "work02.h"

GamblingGame::GamblingGame() {
    std::cout << "***** ���� ������ �����մϴ�. *****\n";
    srand(time(NULL));
}

void GamblingGame::nameSet() {
    std::string name;
    std::cout << "ù��° ���� �̸�>>";
    std::cin >> name;
    players[0].setName(name);
    std::cout << "�ι�° ���� �̸�>>";
    std::cin >> name;
    players[1].setName(name);
}

std::string GamblingGame::ranNum(std::string playerName) {
    int randomNumbers[3];
    std::cout << "\t\t";
    for (int i = 0; i < 3; i++) {
        randomNumbers[i] = rand() % 3;
        std::cout << randomNumbers[i] << "\t";
    }
    if (randomNumbers[0] == randomNumbers[1] && randomNumbers[0] == randomNumbers[2]) {
        playerName += "�� �¸�!!";
        return playerName;
    }
    else
        return "�ƽ�����!";
}

void GamblingGame::startGame() {
    std::string result;
    int turn = 0;
    while (true) {
        std::string currentPlayer;
        std::cout << players[turn % 2].getName() << ":\n";
        getline(std::cin, result);
        currentPlayer = players[turn % 2].getName();
        result = ranNum(result);
        if (result == "�� �¸�!!") {
            std::cout << currentPlayer + result;
            break;
        }
        else
            std::cout << result << std::endl;
        turn++;
    }
}

void Player::setName(std::string n) {
    playerName = n;
}
