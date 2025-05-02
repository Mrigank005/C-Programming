#include <stdio.h>

int main() {
    int arr1[25], i, n;
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the number of elements to store in the array :");
    scanf("%d", &n); // Read the number of elements to be stored in the array

    printf(" Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i);
        scanf("%d", arr1 + i); // Read and store 'n' elements in the array arr1 using pointer arithmetic
    }

    printf(" The elements you entered are : \n");
    for (i = 0; i < n; i++) {
        printf(" element - %d : %d \n", i, *(arr1 + i)); // Display the elements stored in the array using pointers
    }
    return 0;
}
