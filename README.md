# Number-Guessing-Game

Number Guessing Game is a fun interactive game where the program randomly chooses a secret number within a range, and the player tries to guess it. The game includes hints, a leaderboard to track best scores, and the option to play again.

---

## Features

- **Random Number Guessing** – The program selects a random number for each game.
- **Player Guesses** – Enter guesses and receive feedback: Too high, Too low, or Correct.
- **Guess Counter** – Counts how many guesses the player uses.
- **Play Again** – Option to play a new game after winning.
- **Hint System** – Enter `-1` to get a hint (costs one guess):
  - Tells if the number is even/odd.
  - Tells if the number is in the lower or upper half of the range.
- **Leaderboard** – Tracks the best score (fewest guesses) for each player.
- **Custom Maximum Number** – (Planned / Missing in current build)

---

## Build

Run the following commands in terminal:

```bash
cmake -S . -B build
cmake --build build



