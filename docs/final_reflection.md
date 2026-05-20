Final Project: Structure

1. Plan vs. Reality

Original plan:

Game chooses a random number (1–30)
- Player guesses the number
- Count how many guesses the player makes
- Option to play again
- Track best scores (postponed)
- Hint system (postponed)
- Custom maximum number (postponed)

Current status:

Done: Random number guessing, counting guesses, play again
Stubbed: Hint system
Missing: Custom maximum number
Cut: None

Things that were different:

- Adding the leaderboard and best scores needed extra classes (Player and Leaderboard).
- Play again logic was simpler than I expected but needed careful loops.

2. Design Decisions I Would Change

- I put all game logic in Game::startGame(). Later, I would make a separate GameUI class to handle user input/output.
- The leaderboard uses a vector of Player objects. Using a std::map might be simpler for looking up players by name.
- Could break startGame() into smaller functions to make it easier to read and test.

3. What I Learned

Technical:

- Learned how to generate random numbers in C++: rand() % 100 + 1.
- Learned how to clear invalid input with std::cin.clear() and std::cin.ignore().

Design:

Learned how to use classes to separate responsibilities (Player for scores, Leaderboard to store all players).

Process:
  
Learned to use Git branches and pull requests. Making small commits helped me find problems faster.

4. What’s Left to Finish

- Add a hint system (player can spend a guess to get a hint).
- Let player choose a custom maximum number.
- Save best scores to a file so they don’t reset when the game closes.
- Improve input validation to prevent mistakes. 


5. Workflow Reflection
- Branching and PR workflow is now natural; small incremental commits are very helpful.
- Merging and testing each feature separately works well.
- Working in a team would emphasize communication about feature ownership and testing.

6. AI Use
- I used AI to help write repetitive code snippets, like updating the leaderboard.
- AI suggestions were useful for syntax reminders and logic checks.
- I reviewed all AI-generated code and modified it to match my style and project needs.