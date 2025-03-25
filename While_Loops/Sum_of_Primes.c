#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;  // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int limit;
    int num = 2;  // Starting from the first prime number
    int sum = 0;

    // Prompt the user to enter a limit
    printf("Input the limit for prime numbers: ");
    scanf("%d", &limit);

    // Calculate and print the sum of prime numbers up to the specified limit
    do {
        if (isPrime(num)) {
            sum += num;  // Add prime numbers to the sum
        }
        num++;  // Move to the next number
    } while (num <= limit);

    // Print the sum of prime numbers
    printf("Sum of prime numbers up to %d: %d\n", limit, sum);

    return 0;  // Indicate successful program execution
}
