#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr, sum;  // Declare integer variables fno, sno, sum, and integer pointers ptr, qtr

    printf("\n\n Pointer : Add two numbers :\n");
    printf("--------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d", &fno);  // Read the first number from the user

    printf(" Input the second number : ");
    scanf("%d", &sno);  // Read the second number from the user

    ptr = &fno;  // Assign the address of fno to the pointer ptr
    qtr = &sno;  // Assign the address of sno to the pointer qtr

    sum = *ptr + *qtr;  // Dereference ptr and qtr to get the values and calculate their sum

    printf(" The sum of the entered numbers is : %d\n\n", sum);  // Print the sum of the entered numbers

    return 0;
}
