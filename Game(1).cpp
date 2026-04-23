#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

Game:Game() {
    tries = 0; // Set tries to 0
}
void Game::generateNumber() {
    secretNumber = rand() % 100 + 1;
}
void Game:: startGame() {
    strand(time(0)); //Start the random number generator
    generateNumber(); // Generating a brand new secret number

    int guess;

    cout << "Welcome to the game of Number Guessing!" << endl;
    cout << "Guess a number between 1 and 10:" << endl;

    while (guess != secretNumber) {
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
        cout << "Too high!" << endl;
        } 
        else if ( guess < secretNumber) {
            cout << "Too low !" << endl;
        }
        else {
            cout << "Correct!" << endl;
            cout << "You guessed it in" << tries << "tries." << endl;
        
        }      
            
    }
}

