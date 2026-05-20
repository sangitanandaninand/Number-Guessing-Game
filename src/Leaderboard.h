#pragma once

#include <iostream>
#include <map>
#include <string>

class Leaderboard {
private:
    std::map<std::string, int> scores;

public:
    void updatePlayerScore(const std::string& playerName, int tries) {
        auto it = scores.find(playerName);
        if (it == scores.end() || tries < it->second) {
            scores[playerName] = tries;
        }
    }

    void display() const {
        if (scores.empty()) {
            std::cout << "No leaderboard entries yet." << std::endl;
            return;
        }

        std::cout << "\n=== Leaderboard ===" << std::endl;
        for (const auto& [name, score] : scores) {
            std::cout << name << ": " << score << " tries" << std::endl;
        }
    }
};
