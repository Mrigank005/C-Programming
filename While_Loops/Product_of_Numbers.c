#include <stdio.h>

int main() {
    int number = 1;  // Initialize the variable to store the current number
    int product = 1; // Initialize the variable to store the product

    // Start a while loop to iterate from 1 to 5
    while (number <= 5) {
        // Update the product by multiplying it with the current number
        product *= number;

        // Print the current number and product in each iteration
        printf("Current number: %d, Current product: %d\n", number, product);

        // Increment the number for the next iteration
        number++;
    }

    return 0;  // Indicate successful program execution
}
