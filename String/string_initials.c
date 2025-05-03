#include <stdio.h>
#include <string.h>
void initials(char *str) 
{
    printf("Initials: ");
    for (int i = 0; i < strlen(str); i++) 
    {
        if (i == 0 || str[i - 1] == ' ') 
        {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    initials(str);

    return 0;
}