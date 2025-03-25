#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
	int flag;

    do {
        // Prompt the user to enter principal amount, interest rate, and time period
        printf("Input principal amount: ");
        scanf("%lf", &principal);

        printf("Input annual interest rate (as a percentage): ");
        scanf("%lf", &rate);

        printf("Input time period (in years): ");
        scanf("%lf", &time);

        // Check if the entered values are valid
        if (principal <= 0 || rate < 0 || time <= 0) {
            printf("Please input valid positive values for principal, interest rate, and time.\n");
            continue;  // Restart the loop for new input
        }

        // Convert interest rate from percentage to decimal
        rate /= 100;

        // Calculate compound interest
        compoundInterest = principal * pow(1 + rate, time) - principal;

        // Print the calculated compound interest
        printf("Compound Interest: %.2lf\n", compoundInterest);

        // Ask the user if they want to calculate again
        printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        scanf("%d", &flag);

    } while (flag == 1);

    return 0;  // Indicate successful program execution
}
