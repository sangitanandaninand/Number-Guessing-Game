# Number Guessing Game

Number Guessing Game is a C++ program where the computer randomly selects a secret number between 1 and 100, and the player tries to guess it.

---

## Features
- Random number generation
- Player guesses with feedback (too high / too low)
- Tracks number of guesses per game
- Leaderboard system that stores best scores (lowest guesses)
- Option to play multiple rounds
- Input validation to prevent invalid input crashes

---

## Build Instructions

Use the following commands in the terminal:

cmake -S . -B build
cmake --build build

---

## Running the Game

./build/NumberGuessingGame

---

## Running Tests

ctest --test-dir build --verbose

---

## Project Structure

- src/main.cpp → starts the program
- src/Game.cpp → game logic
- src/Player.cpp → player data
- src/Leaderboard.cpp → leaderboard system

---

## Author

sangitanandaninand - CIS 25 Final Project

