#include <stdio.h>
 
int checkArmstrong(int n1);
int checkPerfect(int n1);
 
int main()
{
    int n1;
	printf("\n\n Function : check Armstrong and perfect numbers :\n");
	printf("-----------------------------------------------------\n"); 	
     
    printf(" Input any number: ");
    scanf("%d", &n1);
     
     
    //Calls the isArmstrong() function
    if(checkArmstrong(n1))
    {
        printf(" The %d is an Armstrong number.\n", n1);
    }
    else
    {
        printf(" The %d is not an Armstrong number.\n", n1);
    }
     
    //Calls the checkPerfect() function
    if(checkPerfect(n1))
    {
        printf(" The %d is a Perfect number.\n\n", n1);
    }
    else
    {
        printf(" The %d is not a Perfect number.\n\n", n1);
    }
    return 0;
}

// Checks whether a three digits number is Armstrong number or not. 
//An Armstrong number is an n-digit number that is equal 
//to the sum of the n-th powers of its digits.
int checkArmstrong(int n1) 
{
    int ld, sum, num;
    sum = 0;
    num = n1;
    while(num!=0)  
    {  
        ld = num % 10;  // find the last digit of the number 
        sum += ld * ld * ld;  //calculate the cube of the last digit and adds to sum
        num = num/10;  
    }
    return (n1 == sum);
}
// Checks whether the number is perfect number or not. 
//a perfect number is a positive integer that is equal to 
//the sum of its positive divisors excluding the number itself 
int checkPerfect(int n1) 
{
    int i, sum, num;
    sum = 0;
    num = n1;
    for(i=1; i<num; i++)  
    {  
        /* If i is a divisor of n1 */ 
        if(num%i == 0)  
        {  
            sum += i;  
        }  
    }
    return (n1 == sum);
}
