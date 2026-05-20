#pragma once
#include "Leaderboard.h"

class Game {
private:
    int secretNumber;
    int tries;
    int hintsUsed;
    Leaderboard leaderboard;

public:
    Game();
    void startGame();
    void giveHint();
};


