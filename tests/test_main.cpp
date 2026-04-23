#include <isotream>
#include <cassert>
#include "../src/Game.h"

using namespace std;

// Test to check if the game is prepared correctly
void test_initialization() {
    Game game;
    //For now, we just check to see if the object is created
    assert(game.getSecretNumber() >= 1 && game.getSecretNumber() <= 100); //Assuming haveing a getter for secretNumber
    cout << "Game Initalization Test Passed!" << endl;  
}
int main() {
    cout << "Running tests..." << endl;

    test_game_initalizations(); //We run the test

    cout << "All tests completed.!" << endl;
    return 0;
}