#include <iostream>
#include <cassert>
#include "Leaderboard.h"
#include "Player.h"

void test_add_player() {
    Leaderboard board;
    board.addPlayer(Player("Alex", 5));

    Player* p = board.findPlayer("Alex");

    assert(p != nullptr);
    assert(p->getName() == "Alex");

    std::cout << "test_add_player PASSED\n";
}

void test_better_score() {
    Leaderboard board;
    board.addPlayer(Player("Alex", 10));

    board.updatePlayerScore("Alex", 5);

    Player* p = board.findPlayer("Alex");

    assert(p->getBestScore() == 5);

    std::cout << "test_better_score PASSED\n";
}

void test_worse_score_ignored() {
    Leaderboard board;
    board.addPlayer(Player("Alex", 5));

    board.updatePlayerScore("Alex", 10);

    Player* p = board.findPlayer("Alex");

    assert(p->getBestScore() == 5);

    std::cout << "test_worse_score_ignored PASSED\n";
}

int main() {
    std::cout << "Running tests...\n";

    test_add_player();
    test_better_score();
    test_worse_score_ignored();

    std::cout << "All tests passed.\n";
    return 0;
}