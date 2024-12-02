#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int secretNum = 7; // Secret number to be guessed
    int guess; // Variable to store the user's guess
    int guessCount = 0; // Counter to track the number of guesses
    int guessLimit = 3; // Maximum number of allowed guesses
    bool outOfGuesses = false; // Flag to check if the user is out of guesses

    // The do-while loop continues until the user guesses correctly or runs out of guesses
    do {
        if(guessCount < guessLimit) { // Check if the guess count is less than the limit
            cout << "Enter guess: "; 
            cin >> guess; // Take the user's guess as input
            guessCount++; // Increment the guess counter
        } else {
            outOfGuesses = true; // Set outOfGuesses to true if the user exceeds the guess limit
        }

    } while(secretNum != guess && !outOfGuesses); // Continue the loop until the guess is correct or guesses are exhausted

    // Check if the user is out of guesses
    if(outOfGuesses) {
        cout << "You Lose!"; // Print lose message if out of guesses
    } else {
        cout << "You Win!"; // Print win message if the user guesses correctly
    }

    return 0; 
}
