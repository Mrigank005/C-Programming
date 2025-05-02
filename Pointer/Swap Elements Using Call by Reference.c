#include <stdio.h>

// Function prototype to swap elements using call by reference
void swapNumbers(int *x, int *y, int *z);

int main() {
    int e1, e2, e3;
	
    printf("\n\n Pointer : Swap elements using call by reference :\n"); 
    printf("------------------------------------------------------\n");	

    // Input three integer values from the user
    printf(" Input the value of 1st element : ");
    scanf("%d", &e1);
    printf(" Input the value of 2nd element : ");
    scanf("%d", &e2);
    printf(" Input the value of 3rd element : ");
    scanf("%d", &e3);
	
    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", e1, e2, e3);

    // Call the function to swap the values of the three elements
    swapNumbers(&e1, &e2, &e3);

    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n", e1, e2, e3);

    return 0;
}

// Function definition to swap the values of three integer pointers
void swapNumbers(int *x, int *y, int *z) {
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}
