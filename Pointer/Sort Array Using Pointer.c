#include <stdio.h>

int main() {
    int *a, i, j, tmp, n;
    printf("\n\n Pointer : Sort an array using pointer :\n");
    printf("--------------------------------------------\n");

    // Input the number of elements to store in the array
    printf(" Input the number of elements to store in the array : ");
    scanf("%d", &n);

    // Input elements into the array
    printf(" Input %d number of elements in the array : \n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i + 1);
        scanf("%d", a + i);
    }

    // Sorting the array using pointer
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                // Swap elements if they are in the wrong order
                tmp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = tmp;
            }
        }
    }

    // Displaying the sorted array elements
    printf("\n The elements in the array after sorting : \n");
    for (i = 0; i < n; i++) {
        printf(" element - %d : %d \n", i + 1, *(a + i));
    }

    printf("\n");
}
