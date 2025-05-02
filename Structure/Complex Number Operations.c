#include <stdio.h>

// Define the structure "Complex"
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    result.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return result;
}

// Function to display a complex number
void displayComplex(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}

int main() {
    // Declare variables to store two complex numbers
    struct Complex complexNum1, complexNum2, sumResult, productResult;

    // Input details for the first complex number
    printf("Input details for Complex Number 1 (real imag): ");
    scanf("%f %f", &complexNum1.real, &complexNum1.imag);

    // Input details for the second complex number
    printf("Input details for Complex Number 2 (real imag): ");
    scanf("%f %f", &complexNum2.real, &complexNum2.imag);

    // Add the two complex numbers
    sumResult = addComplex(complexNum1, complexNum2);

    // Multiply the two complex numbers
    productResult = multiplyComplex(complexNum1, complexNum2);

    // Display the results
    printf("\nSum of Complex Numbers:\n");
    displayComplex(sumResult);

    printf("\nProduct of Complex Numbers:\n");
    displayComplex(productResult);

    return 0;
}
