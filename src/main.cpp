#include <iostream>
#include "Game.h"

int main() {
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "You can ask for hints during the game, but each hint costs a try!" << std::endl;
    std::cout << "Good luck!\n" << std::endl;

    Game game;
    game.startGame();  // Starts the game loop with hints and leaderboard

    std::cout << "\nFinal Leaderboard:\n";
    return 0;
}