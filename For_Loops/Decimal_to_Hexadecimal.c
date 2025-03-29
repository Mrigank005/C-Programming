#include <stdio.h>

int main() {
    // Declare variables
    long int decn, q, m;
    int tmp;
    // Print output header
    printf("\n\nConvert Decimal to Hexadecimal:\n ");
    printf("-------------------------\n");
    // Get decimal input
    printf("Input any Decimal number: ");
    scanf("%ld", &decn);
    // Convert decimal to hex
    // Use an array to store hex digits
    char hexDigits[20];  // Adjust the size as needed
    int index = 0;  // Index to store hex digits in the array
    while (decn > 0) {
        // Get remainder
        tmp = decn % 16;
        // Convert to hex digit
        if (tmp < 10) {
            hexDigits[index] = tmp + '0';
        } else {
            hexDigits[index] = tmp + 'A' - 10;
        }
        index++;
        decn = decn / 16;
    }
    // Print hex number in reverse order
    printf("\nThe equivalent Hexadecimal Number : ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexDigits[i]);
    }
    printf("\n\n");
    return 0;
}
