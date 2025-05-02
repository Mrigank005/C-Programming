#include <stdio.h>

// Defining a structure for employee details
struct employee {
    char *empname;  // Employee name (string pointer)
    int empid;      // Employee ID (integer)
};

// Main function
int main() {
    // Displaying the purpose of the program
    printf("\n\n Pointer : Show a pointer to an array which contents are pointer to structure :\n");
    printf("-----------------------------------------------------------------------------------\n");

    // Initializing employee structures with values
    static struct employee emp1 = {"John", 1001}, emp2 = {"Alex", 1002}, emp3 = {"Taylor", 1003};

    // Creating an array of pointers to struct employee
    struct employee (*arr[]) = {&emp1, &emp2, &emp3};

    // Creating a pointer to an array of pointers to struct employee
    struct employee (*(*pt)[3]) = &arr; // pt stores the address of the array of pointers

    // Printing employee name using pointer to an array of pointers to structure
    printf(" Employee Name : %s \n", (**(*pt + 1)).empname);

    // Explanation for the printed employee name
    printf("---------------- Explanation --------------------\n");
    printf("(**(*pt+1)).empname\n");
    printf("= (**(*&arr+1)).empname   as pt=&arr\n");
    printf("= (**(arr+1)).empname     from rule *&pt = pt\n");
    printf("= (*arr[1]).empname       from rule *(pt+i) = pt[i]\n");
    printf("= (*&emp2).empname        as arr[1] = &emp2\n");
    printf("= emp2.empname = Alex       from rule *&pt = pt\n\n");

    // Printing employee ID using pointer to an array of pointers to structure
    printf(" Employee ID :  %d\n", (*(*pt + 1))->empid);

    // Explanation for the printed employee ID
    printf("---------------- Explanation --------------------\n");
    printf("(*(*pt+1))-> empid\n");
    printf("= (**(*pt+1)).empid     from rule -> = (*).\n");
    printf("= emp2.empid = 1002\n");
    printf("\n\n");

    return 0;
}
