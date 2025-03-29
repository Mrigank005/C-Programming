#include <stdio.h>

int main() {
    // Declare variables
    int n1, n, p = 1;
    int dec = 0, i = 0, d;
    int ocno = 0, dn;
    // Print output headers
    printf("\n\nConvert Binary to Octal:\n ");
    printf("-------------------------\n");
    // Get binary input
    printf("Input a binary number: ");
    scanf("%d", &n);
    // Store input number
    n1 = n;
    // Convert binary to decimal
    // Loop through each binary digit
    while (n > 0) {
        // Get current digit
        d = n % 10;
        // Add digit * power of 2 to result
        dec += d * pow(2, i);
        // Increment power
        i++;
        // Divide binary number
        n = n / 10;
    }
    // Convert decimal to octal
    dn = dec; // Store decimal number
    i = 1;    // Reset power
    // Repeatedly divide decimal by 8
    while (dec > 0) {
        // Get remainder and add to result
        ocno += (dec % 8) * i;
        // Update power of 8
        i = i * 10;
        // Divide decimal number
        dec = dec / 8;
    }
    // Print binary and octal result
    printf("\nThe Binary Number: %d\nThe equivalent Octal Number: %d\n\n", n1, ocno);
    return 0;
}
