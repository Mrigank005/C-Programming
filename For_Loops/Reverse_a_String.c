#include <stdio.h>   // Include the standard input/output header file. 
#include <string.h>

void main()
{
   // Variable declarations
char str1[100], tmp;
int l, lind, rind, i;
   // Prompting user for input
printf("\n\nPrint a string in reverse order:\n ");
printf("-------------------------------------\n");
   // Getting user input
printf("Input a string to reverse : ");
scanf("%s", str1);
   // Calculating the length of the string
   l = strlen(str1);
   // Initializing left and right indices for swapping
lind = 0;
rind = l - 1;
   // Loop for swapping characters from left to right
for(i = lind; i< rind; i++)
   {
tmp = str1[i];
str1[i] = str1[rind];
str1[rind] = tmp;
rind--;
   }
   // Printing the reversed string
printf("Reversed string is: %s\n\n", str1);
}
