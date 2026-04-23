#include <iostream>
#include <cstdlib>
#include <ctime
#include "Game.h"

using namespace std;

Game:Game() {
    tries = 0;
}
void Game::generateNumber() {
    secretNumber = rand() % 100 + 1;
}
void Game:: startGame() {
    strand(time());
    generateNumber();

    int guess;

    cout << "Welcome to the game of Number Guessing!" << endl;
    cout << "Guess a number between 1 and 10:" << endl;

    while (guess != secretNumber) {
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
        cout << "Too high!" << endl;
        } 
        else if ( guess < secretNUmber) {
            cout << "Too low !" << endl;
        }
        else {
            cout << "Correct!" << endl;
            cout << "You guessed in" << tries << "tries." << endl;
        
        }      
            
    }
}

