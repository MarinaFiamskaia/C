/*
*****************************************************************************
                          Workshop - #3 (P1)
Full Name  : Marina Fiamskaia
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    double smallShirtPriceCents = 0.00;
    double mediumShirtPriceCents = 0.00;
    double largeShirtPriceCents = 0.00;

    int numberOfShirtsEnetered = 0;
    int subTotalBeforeTaxesCents = 0;
    int taxesCents = 0;
    int totalAmountCents = 0;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf(" %lf", &smallShirtPriceCents);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %lf", &mediumShirtPriceCents);
    printf("Enter the price for a LARGE shirt: $");
    scanf(" %lf", &largeShirtPriceCents);
    //largeShirtPriceCents = (int)((dollarsEntered + 0.005) * 100.0);
    // printf("large shirt price cents %d\n", largeShirtPriceCents);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL : $%.2lf\n", smallShirtPriceCents);
    printf("MEDIUM : $%.2lf\n", mediumShirtPriceCents);
    printf("LARGE : $%.2lf\n", largeShirtPriceCents);
    printf("\n");

    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &numberOfShirtsEnetered);
    printf("\n");

    //Calculations here
    if (patSize == 'S') {
        subTotalBeforeTaxesCents =(int)(((numberOfShirtsEnetered * smallShirtPriceCents)+0.005)*100.00);
    }
    taxesCents = (int)(((numberOfShirtsEnetered * smallShirtPriceCents * TAX)+0.005)*100.00);
    totalAmountCents = subTotalBeforeTaxesCents + taxesCents;

    printf("sub total %d\n", subTotalBeforeTaxesCents);
    printf("taxes cents %d\n", taxesCents);
    printf("total cents %d\n", totalAmountCents);
    printf("\n");

    printf("Patty's shopping cart...\n");
    printf("Contains  : %d shirts\n", numberOfShirtsEnetered);
    printf("Sub-total : $%8.4lf\n", ((double)subTotalBeforeTaxesCents/100));
    printf("Taxes     : $%8.4lf\n", ((double)taxesCents/100));
    printf("Total     : $%8.4lf\n", ((double)totalAmountCents/100));
    printf("\n");


    return 0;
}