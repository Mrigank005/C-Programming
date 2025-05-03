#include <stdio.h>
 
//if the least significant bit is 1 the number is odd and 0 the number is even 
int checkOddEven(int n1)
{   
    return (n1 & 1);//The & operator does a bitwise and,
}

int main()
{
    int n1;
	printf("\n\n Function : check the number is even or odd:\n");
	printf("------------------------------------------------\n");	     
    printf("Input any number : ");
    scanf("%d", &n1);

    // If checkOddEven() function returns 1 then the number is odd 
    if(checkOddEven(n1))
    {
        printf("The entered number is odd.\n\n");
    }
    else
    {
        printf("The entered number is even.\n\n");
    }
    return 0;
}
