#pragma once
#include <string>

class Player {
private:
    std::string name;
    int bestScore;

public:
    Player();
    Player(const std::string& playerName, int score);

    std::string getName() const;
    int getBestScore() const;

    void setName(const std::string& playerName);
    void setBestScore(int score);

    void updateBestScore(int newScore);
};