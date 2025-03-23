#include <stdio.h>  // Include the standard input/output header file.

void main()  
{  
    int cp, sp, profit;  // Declare variables to store cost price, selling price, and profit/loss amount.

    printf("Input Cost Price: ");  // Prompt user for input of cost price.
    scanf("%d", &cp);  // Read and store the cost price.
    printf("Input Selling Price: ");  // Prompt user for input of selling price.
    scanf("%d", &sp);  // Read and store the selling price.

    if(sp > cp)  // Check if selling price is greater than cost price.
    {  
        profit = sp - cp;  // Calculate profit amount.
        printf("\nYou can book your profit amount : %d\n", profit);  // Print profit message.
    }  
    else if(cp > sp)  // Check if cost price is greater than selling price.
    {  
        profit = cp - sp;  // Calculate loss amount.
        printf("\nYou incurred a loss of amount : %d\n", profit);  // Print loss message.
    }  
    else  // If neither profit nor loss.
    {  
        printf("\nYou are in a no profit, no loss condition.\n");  // Print message for no profit, no loss.
    }  
}  
