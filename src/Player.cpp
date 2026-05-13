#include "Player.h"

// Default constructor
Player::Player() : name(""), bestScore(0) {}

// Constructor with name  and optional best score
Player::Player(const std::string& playerName, int score)
: name(playerName), bestScore(score) {}

// Getters
std::string Player::getName() const {
    return name;
}

int Player::getBestScore() const {
    return bestScore;
}

// Setters
void Player::setName(const std::string& playerName) {
    name = playerName;
}

void Player::setBestScore(int score) {
    bestScore = score;
}

// Update best score if the new score is lower (better)
void Player::updateBestScore(int newScore) {
    if (bestScore == 0 || newScore < bestScore) {
        bestScore = newScore;
    }
}   