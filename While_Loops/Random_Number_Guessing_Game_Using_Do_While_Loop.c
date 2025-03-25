#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts = 0;

    // Seed the random number generator based on current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    randomNumber = rand() % 10 + 1;

    // Welcome message
    printf("Welcome to the Guess the Number Game!\n");

    // Guessing loop
    do {
        // Prompt the user to enter a guess
        printf("Input your guess (between 1 and 10): ");
        scanf("%d", &userGuess);

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct
        if (userGuess == randomNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        } else if (userGuess < randomNumber) {
            printf("Number is too low. Try again!\n");
        } else {
            printf("Number is too high. Try again!\n");
        }

    } while (userGuess != randomNumber); // Continue the loop until the user guesses the correct number

    return 0;
}
