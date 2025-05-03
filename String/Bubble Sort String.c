#include <stdio.h>
#include <string.h>

int main() {
    char name[25][50], temp[25]; // Declares an array of strings and a temporary string
    int n, i, j; // Declare variables for number of strings and iteration

    printf("\n\nSorts the strings of an array using bubble sort :\n"); // Display information about the task
    printf("-----------------------------------------------------\n");

    printf("Input number of strings: ");
    scanf("%d", &n); // Read the number of strings from the user

    printf("Input string %d :\n", n);
    for (i = 0; i <= n; i++) {
        fgets(name[i], sizeof(name[i]), stdin); // Read strings from the user
    }

    /* Logic for Bubble Sort */
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= n - i; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) { // Compare adjacent strings
                strcpy(temp, name[j]); // Swap strings using temporary variable
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    printf("The strings appear after sorting:\n"); // Display the sorted strings
    for (i = 0; i <= n; i++) {
        printf("%s\n", name[i]);
		
	return 0; // Return 0 to indicate successful execution of the program
    }
}
