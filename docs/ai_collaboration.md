# AI Collaboration Log

## Overview
I used AI to help me build and improve my Leaderboard feature for the Number Guessing Game. It helped me write code, fix errors, and make sure everything worked correctly with my tests.

## Session Notes
- Got help creating the Player and Leaderboard classes.
- Fixed errors where the program would not compile because some files were not linked in CMake.
- Fixed “undefined reference” errors by adding missing .cpp files.
- Added leaderboard updates so scores are saved when the player wins.
- Improved the game so it checks for invalid input and does not get stuck.
- Made sure all tests run correctly using CTest.

## Decisions Made
- I used a simple vector to store players in the leaderboard.
- A lower number of guesses is considered a better score.
- The leaderboard updates only when the player wins the game.
- The leaderboard is shown at the end of the game.
- I used rand() to generate the secret number.

## Next Steps
- Finish checking all code before submitting.
- Update the README file with instructions and feature details.
- Push everything to GitHub.
- Submit the final project with working tests and documentation.
- Later improvements could include saving scores to a file and adding difficulty levels.