#include <stdio.h>
#include <string.h>
int Palindrome(char *str) 
{
    int i;
    for (i = 0; i < strlen(str) / 2; i++) 
    {
        if (tolower(str[i]) != tolower(str[strlen(str) - i - 1])) 
        {
            return 0; 
        }
    }
    return 1; 
}
int main() 
{
    char str[50];
    printf("Enter a string: ");
    gets(str);

    if (Palindrome(str)) 
    {
        printf("%s is a palindrome.\n", str);
    } 
    else 
    {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}