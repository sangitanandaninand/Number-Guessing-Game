#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

// Constructor
Game::Game() {
    tries = 0;
}

// Main game function
void Game::startGame() {
    srand(time(0)); // set random seed
    secretNumber = rand() % 100 + 1; // number 1–100
    tries = 0;

    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100:" << endl;

    while (true) {
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Correct! You guessed it in " << tries << " tries." << endl;

            char choice;
            cout << "Do you want to play again? (y/n): ";
            cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                startGame(); // restart game
            } else {
                cout << "Thanks for playing!" << endl;
            }

            break;
        }
    }
}





