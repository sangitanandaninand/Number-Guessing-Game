#include "Leaderboard.h"
#include <algorithm>
#include <iostream>

// Constructor
Leaderboard::Leaderboard() {}

// Add a new player to the leaderboard
void Leaderboard::addPlayer(const Player& player) {
    players.push_back(player);
}

// Update a player's best score if the new score is lower
void Leaderboard::updatePlayerScore(const std::string& playerName, int score) {
    Player* player = findPlayer(playerName);

    if (player) {
        player->updateBestScore(score);
    } else {
        // Add new player if not found
        players.push_back(Player(playerName, score));
    }
}

// Get the top N players sorted by best score
std::vector<Player> Leaderboard::getTopPlayers(int n) const {
    std::vector<Player> sorted = players;

    std::sort(sorted.begin(), sorted.end(),
        [](const Player& a, const Player& b) {
            return a.getBestScore() < b.getBestScore();
        });

    if (n > static_cast<int>(sorted.size())) {
        n = static_cast<int>(sorted.size());
    }

    return std::vector<Player>(sorted.begin(), sorted.begin() + n);
}

// Display the leaderboard
void Leaderboard::display() const {
    std::vector<Player> sorted = players;

    std::sort(sorted.begin(), sorted.end(),
        [](const Player& a, const Player& b) {
            return a.getBestScore() < b.getBestScore();
        });

    std::cout << "Leaderboard:\n";

    for (const auto& p : sorted) {
        std::cout << p.getName()
                  << " - "
                  << p.getBestScore()
                  << " guesses\n";
    }
}

// Find a player by name
Player* Leaderboard::findPlayer(const std::string& playerName) {
    for (auto& p : players) {
        if (p.getName() == playerName) {
            return &p;
        }
    }

    return nullptr;
}

// Const version of findPlayer
const Player* Leaderboard::findPlayer(const std::string& playerName) const {
    for (const auto& p : players) {
        if (p.getName() == playerName) {
            return &p;
        }
    }

    return nullptr;
}