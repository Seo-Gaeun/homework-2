#ifndef WORK02_H
#define WORK02_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
    string playerName;
public:
    void setName(string name);
    string getName() { return playerName; };
};

class GamblingGame {
    Player* players = new Player[2];
public:
    GamblingGame();
    void nameSet();
    string ranNum(string playerName);
    void startGame();
    ~GamblingGame() { delete[] players; }
};

#endif // WORK02_H
