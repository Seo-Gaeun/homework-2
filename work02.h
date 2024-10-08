#ifndef WORK02_H
#define WORK02_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Player {
    std::string playerName;
public:
    void setName(std::string name);
    std::string getName() { return playerName; };
};

class GamblingGame {
    Player* players = new Player[2];
public:
    GamblingGame();
    void nameSet();
    std::string ranNum(std::string playerName);
    void startGame();
    ~GamblingGame() { delete[] players; }
};

#endif // WORK02_H
