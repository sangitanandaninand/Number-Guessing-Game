#pragma once

#include <vector>
#include <string>
#include "Player.h"

class Leaderboard {
private:
    std::vector<Player> players;

public:
    // Constructor
    Leaderboard();

    // Add a player to the leaderboard
    void addPlayer(const Player& player);

    // Update a player's best score
    void updatePlayerScore(const std::string& playerName, int score);

    // Get the top N players
    std::vector<Player> getTopPlayers(int n) const;

    // Print the leaderboard to the console
    void display() const;

    // Find a player by name
    Player* findPlayer(const std::string& playerName);

    // Const version of findPlayer
    const Player* findPlayer(const std::string& playerName) const;
};