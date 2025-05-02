#include <stdio.h>

// Defining a union to hold employee address details
union empAdd {
    char *ename;    // Employee name (string pointer)
    char stname[20]; // Street name (array of characters)
    int pincode;    // Pincode (integer)
};

// Main function
int main() {
    // Displaying the purpose of the program
    printf("\n\n Pointer : Show a pointer to union :\n");
    printf("----------------------------------------\n");

    union empAdd employee, *pt; // Declaring union variables

    // Assigning a string up to the null character ('\0') to the union member
    employee.ename = "John Mc\0Donald"; // Assigning the string up to null character

    pt = &employee; // Storing the address of the union variable in a pointer

    // Printing the content of the union member using pointer to union
    printf(" %s %s\n\n", pt->ename, (*pt).ename);

    return 0;
}
