#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l=0;
	
       printf("\n\nPrint individual characters of string in reverse order :\n");
       printf("------------------------------------------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
	   l=strlen(str);
	   printf("The characters of the string in reverse are : \n");
       for(str[l]='\0';l>=0;l--)
        {
          printf("%c  ", str[l]);
        }
    printf("\n");
	
	return 0; // Return 0 to indicate successful execution of the program
}
