/*
 * Program: Number Guessing Game
 * Description: The computer picks a random number and the user tries to guess it.
 *              Gives hints "Too High" or "Too Low" after each guess.
 *
 * Example:
 *   Guess the number (1-100): 50
 *   Too High! Try again.
 *   Guess the number (1-100): 25
 *   Too Low! Try again.
 *   Guess the number (1-100): 37
 *   Congratulations! You guessed it in 3 tries!
 */
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;
int main() {
    srand(time(0));  // Seed random number generator with current time
    int secretNumber = (rand() % 100) + 1;  // Random number between 1 and 100
    int userGuess, numberOfTries = 0;
    cout << "=== Number Guessing Game ===" << endl;
    cout << "I have picked a number between 1 and 100." << endl;
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfTries++;
        if (userGuess > secretNumber) {
            cout << "Too High! Try a lower number." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too Low! Try a higher number." << endl;
        } else {
            cout << "Congratulations! You guessed " << secretNumber
                 << " in " << numberOfTries << " tries!" << endl;
        }
    } while (userGuess != secretNumber);
    return 0;
}
