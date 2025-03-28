#include <stdio.h>
#include <math.h> // Include the math library for the pow function

int main() {
    int num, temp, originalNum, remainder, sum = 0, n = 0; // Declare variables

    // Prompt the user to input a number
    printf("Input a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits in the input number
    for (temp = num; temp != 0; n++) {
        temp /= 10;
    }

    // Calculate the sum of the nth powers of each digit
    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        sum += pow(remainder, n);
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
} 
