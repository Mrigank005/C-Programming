#include <stdio.h>
int main() {
    int n1, n5, p = 1, k, ch = 1;
    int dec = 0, i = 1, d;
    printf("\n\nConvert Octal to Decimal:\n ");
    printf("-------------------------\n");
    printf("Input an octal number (using digits 0 - 7): ");
    scanf("%d", &n1);
    n5 = n1;
    // Checking if any digit in the input number is greater than or equal to 8
    for (; n1 > 0; n1 = n1 / 10) {
        k = n1 % 10;
        if (k >= 8) {
            ch = 0;
            break;  // No need to continue checking if one invalid digit is found
        }
    }
    // Switch-case to determine if the input is a valid octal number or not
    switch (ch) {
        case 0:
            printf("\nThe number is not an octal number.\n\n");
            break;
        case 1:
            n1 = n5;
            // Calculating the decimal equivalent of the octal number
            for (; n1 > 0; n1 = n1 / 10) {
                d = n1 % 10;
                dec += d * p;
                p *= 8;
            }
            // Displaying the input octal number and its equivalent decimal number
            printf("\nThe Octal Number: %d\nThe equivalent Decimal Number: %d\n\n", n5, dec);
            break;
    }
    return 0;
}
