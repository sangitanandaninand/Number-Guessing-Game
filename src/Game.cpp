#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

Game::Game() {
    tries = 0;
}

void Game::startGame() {
    srand(time(0));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {

        string playerName;
        cout << "Enter your name: ";
        cin >> playerName;

        // Peer suggestion: use rand() for random number (already correct)
        secretNumber = rand() % 100 + 1;
        tries = 0;

        int guess = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Guess a number between 1 and 100:" << endl;

        while (guess != secretNumber) {

            cin >> guess;

            // Fix for "infinite loop feeling" (input validation)
            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a number." << endl;
                continue;
            }

            tries++;

            if (guess > secretNumber) {
                cout << "Too high!" << endl;
            }
            else if (guess < secretNumber) {
                cout << "Too low!" << endl;
            }
            else {
                cout << "Correct! You guessed it in " << tries << " tries." << endl;

                // Leaderboard update (required feature integration)
                leaderboard.updatePlayerScore(playerName, tries);
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!" << endl;

    // Show leaderboard at end
    cout << "\nFinal Leaderboard:\n";
    leaderboard.display();
}