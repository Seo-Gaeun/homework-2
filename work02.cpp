#include "work02.h"

GamblingGame::GamblingGame() {
    std::cout << "***** 갬블링 게임을 시작합니다. *****\n";
    srand(time(NULL));
}

void GamblingGame::nameSet() {
    std::string name;
    std::cout << "첫번째 선수 이름>>";
    std::cin >> name;
    players[0].setName(name);
    std::cout << "두번째 선수 이름>>";
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
        playerName += "님 승리!!";
        return playerName;
    }
    else
        return "아쉽군요!";
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
        if (result == "님 승리!!") {
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
