#include <stdio.h>

// Defining a structure to hold employee address details
struct EmpAddress {
    char *ename;        // Employee name (string pointer)
    char stname[20];    // Street name (array of characters)
    int pincode;        // Pincode (integer)
} 
// Initializing an instance of the structure with data
employee = {"John Alter", "Court Street \n", 654134}, *pt = &employee;

int main() {
    // Displaying the purpose of the program
    printf("\n\n Pointer : Show the usage of pointer to structure :\n");
    printf("--------------------------------------------------------\n");

    // Printing employee details using pointer to structure
    printf(" %s from %s \n\n", pt->ename, (*pt).stname);
    return 0;
}
