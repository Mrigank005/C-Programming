#include <stdio.h>  // Include the standard input/output header file.
#include <string.h>  // Include the string header file.

void main()
{
    int custid, conu;  // Declare variables to store customer ID and consumed units.
    float chg, surchg = 0, gramt, netamt;  // Declare variables for charge, surcharge, gross amount, and net amount.
    char connm[25];  // Declare a character array to store customer name.

    printf("Input Customer ID :");  // Prompt user for input of customer ID.
    scanf("%d", &custid);  // Read and store the customer ID.
    printf("Input the name of the customer :");  // Prompt user for input of customer name.
    scanf("%s", connm);  // Read and store the customer name.
    printf("Input the unit consumed by the customer : ");  // Prompt user for input of consumed units.
    scanf("%d", &conu);  // Read and store the consumed units.

    if (conu < 200)
        chg = 1.20;  // Set charge based on consumed units.
    else if (conu >= 200 && conu < 400)
        chg = 1.50;  // Set charge based on consumed units.
    else if (conu >= 400 && conu < 600)
        chg = 1.80;  // Set charge based on consumed units.
    else
        chg = 2.00;  // Set charge based on consumed units.

    gramt = conu * chg;  // Calculate gross amount.

    if (gramt > 300)
        surchg = gramt * 15 / 100.0;  // Calculate surcharge if gross amount is greater than 300.

    netamt = gramt + surchg;  // Calculate net amount.

    if (netamt < 100)
        netamt = 100;  // Set minimum net amount to 100.

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", custid);
    printf("Customer Name                       :%s\n", connm);
    printf("unit Consumed                       :%d\n", conu);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", chg, gramt);
    printf("Surchage Amount                     :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}  
