#include "Game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game()
    : secretNumber(0), tries(0), hintsUsed(0) {
}

void Game::startGame() {
    srand(static_cast<unsigned int>(time(nullptr)));
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        string playerName;
        cout << "Enter your name: ";
        cin >> playerName;

        secretNumber = rand() % 100 + 1;
        tries = 0;
        hintsUsed = 0;

        cout << "Guess a number between 1 and 100, or enter -1 for a hint:" << endl;

        while (true) {
            int guess;
            if (!(cin >> guess)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Enter a number between 1 and 100, or -1 for a hint:" << endl;
                continue;
            }

            if (guess == -1) {
                tries++;
                giveHint();
                continue;
            }

            if (guess < 1 || guess > 100) {
                cout << "Please guess a number between 1 and 100, or enter -1 for a hint:" << endl;
                continue;
            }

            tries++;

            if (guess > secretNumber) {
                cout << "Too high!" << endl;
            } else if (guess < secretNumber) {
                cout << "Too low!" << endl;
            } else {
                cout << "Correct! You guessed it in " << tries << " tries." << endl;
                leaderboard.updatePlayerScore(playerName, tries);
                break;
            }
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;
    }

    leaderboard.display();
}

void Game::giveHint() {
    hintsUsed++;
    if (secretNumber % 2 == 0) {
        cout << "Hint: The number is even." << endl;
    } else {
        cout << "Hint: The number is odd." << endl;
    }

    if (secretNumber <= 50) {
        cout << "Hint: The number is in the lower half (1-50)." << endl;
    } else {
        cout << "Hint: The number is in the upper half (51-100)." << endl;
    }
}





