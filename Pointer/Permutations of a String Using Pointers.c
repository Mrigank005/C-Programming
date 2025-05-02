#include <stdio.h>
#include <string.h>

// Function to swap characters
void changePosition(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}

// Function to generate permutations of a string
void charPermu(char *cht, int stno, int endno)
{
    int i;
    if (stno == endno)
        printf("%s  ", cht); // Print the generated permutation when stno equals endno
    else
    {
        for (i = stno; i <= endno; i++)
        {
            changePosition((cht + stno), (cht + i)); // Swap characters at positions stno and i
            charPermu(cht, stno + 1, endno); // Recursively generate permutations for the rest of the string
            changePosition((cht + stno), (cht + i)); // Restore the original string by swapping back
        }
    }
}

// Main function
int main()
{
    char str[] = "abcd"; // The input string
    printf("\n\n Pointer : Generate permutations of a given string :\n");
    printf("--------------------------------------------------------\n");
    int n = strlen(str); // Get the length of the string
    printf(" The permutations of the string are : \n");
    charPermu(str, 0, n - 1); // Call function to generate permutations
    printf("\n\n");
    return 0;
}
