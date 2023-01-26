/*
*****************************************************************************
                          Workshop - #3 (P2)
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    double smallShirtPrice = 0.00;
    double mediumShirtPrice = 0.00;
    double largeShirtPrice = 0.00;

    double pricePatty = 0.00;
    double priceTommy = 0.00;
    double priceSally = 0.00;

    int numberOfShirtsPatty = 0;
    int numberOfShirtsTommy = 0;
    int numberOfShirtsSally = 0;

    int subTotalBeforeTaxesCentsPatty = 0;
    int taxesCentsPatty = 0;
    int totalAmountCentsPatty = 0;

    int subTotalBeforeTaxesCentsTommy = 0;
    int taxesCentsTommy = 0;
    int totalAmountCentsTommy = 0;

    int subTotalBeforeTaxesCentsSally= 0;
    int taxesCentsSally = 0;
    int totalAmountCentsSally = 0;

    int subTotalBeforeTaxesCents = 0;
    int taxesCents = 0;
    int totalAmountCents = 0;

    int numberOfCoins = 0;
    int remainderAmount = 0;

    double averageCost = 0.00;

    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf(" %lf", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf(" %lf", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf(" %lf", &largeShirtPrice);
    printf("\n");

    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL : $%.2lf\n", smallShirtPrice);
    printf("MEDIUM : $%.2lf\n", mediumShirtPrice);
    printf("LARGE : $%.2lf\n", largeShirtPrice);
    printf("\n");

    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &numberOfShirtsPatty);
    printf("\n");

    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &numberOfShirtsTommy);
    printf("\n");

    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirts Patty is buying: ");
    scanf(" %d", &numberOfShirtsSally);
    printf("\n");

    //Calculations here
    //Patty
    if (patSize == 'S') {
        pricePatty = smallShirtPrice;
    }
    else if (patSize == 'M') {
        pricePatty = mediumShirtPrice;
    }
    else if (patSize == 'L') {
        pricePatty = largeShirtPrice;
    }
    subTotalBeforeTaxesCentsPatty = (int)(((numberOfShirtsPatty * pricePatty) + 0.005) * 100.00);
    taxesCentsPatty = (int)(((numberOfShirtsPatty * pricePatty * TAX) + 0.005) * 100.00);
    totalAmountCentsPatty = subTotalBeforeTaxesCentsPatty + taxesCentsPatty;

    //Sally
    if (salSize == 'S') {
        priceSally = smallShirtPrice;
    }
    else if (salSize == 'M') {
        priceSally = mediumShirtPrice;
    }
    else if (salSize == 'L') {
        priceSally = largeShirtPrice;
    }
    subTotalBeforeTaxesCentsSally = (int)(((numberOfShirtsSally * priceSally) + 0.005) * 100.00);
    taxesCentsSally = (int)(((numberOfShirtsSally * priceSally * TAX) + 0.005) * 100.00);
    totalAmountCentsSally = subTotalBeforeTaxesCentsSally + taxesCentsSally;

    //Tommy
    if (tomSize == 'S') {
        priceTommy = smallShirtPrice;
    }
    else if (tomSize == 'M') {
        priceTommy = mediumShirtPrice;
    }
    else if (tomSize == 'L') {
        priceTommy = largeShirtPrice;
    }
    subTotalBeforeTaxesCentsTommy = (int)(((numberOfShirtsTommy * priceTommy) + 0.005) * 100.00);
    taxesCentsTommy = (int)(((numberOfShirtsTommy * priceTommy * TAX) + 0.005) * 100.00);
    totalAmountCentsTommy = subTotalBeforeTaxesCentsTommy + taxesCentsTommy;

    //Totals
    subTotalBeforeTaxesCents = subTotalBeforeTaxesCentsPatty + subTotalBeforeTaxesCentsSally + subTotalBeforeTaxesCentsTommy;
    taxesCents = taxesCentsPatty + taxesCentsSally + taxesCentsTommy;
    totalAmountCents = totalAmountCentsPatty + totalAmountCentsSally + totalAmountCentsTommy;

    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, pricePatty, numberOfShirtsPatty, ((double)subTotalBeforeTaxesCentsPatty / 100), ((double)taxesCentsPatty / 100), ((double)totalAmountCentsPatty / 100));
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, priceSally, numberOfShirtsSally, ((double)subTotalBeforeTaxesCentsSally / 100), ((double)taxesCentsSally / 100), ((double)totalAmountCentsSally / 100));
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, priceTommy, numberOfShirtsTommy, ((double)subTotalBeforeTaxesCentsTommy / 100), ((double)taxesCentsTommy / 100), ((double)totalAmountCentsTommy / 100));
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", ((double)subTotalBeforeTaxesCents / 100), ((double)taxesCents / 100), ((double)totalAmountCents / 100));

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%21.4lf\n", ((double)subTotalBeforeTaxesCents / 100));
    numberOfCoins = subTotalBeforeTaxesCents / 200;
    remainderAmount = subTotalBeforeTaxesCents % 200;
    printf("Toonies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 100;
    remainderAmount = remainderAmount % 100;
    printf("Loonies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 25;
    remainderAmount = remainderAmount % 25;
    printf("Quarters %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 10;
    remainderAmount = remainderAmount % 10;
    printf("Dimes    %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 5;
    remainderAmount = remainderAmount % 5;
    printf("Nickels  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 1;
    remainderAmount = remainderAmount % 1;
    printf("Pennies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    printf("\n");

    averageCost= ((double)subTotalBeforeTaxesCents / 100) / ((double)(numberOfShirtsPatty + numberOfShirtsSally + numberOfShirtsTommy));
    printf("Average cost/shirt: $%4.4lf\n", averageCost );
    printf("\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%21.4lf\n", ((double)totalAmountCents / 100));
    numberOfCoins = totalAmountCents / 200;
    remainderAmount = totalAmountCents % 200;
    printf("Toonies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 100;
    remainderAmount = remainderAmount % 100;
    printf("Loonies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 25;
    remainderAmount = remainderAmount % 25;
    printf("Quarters %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 10;
    remainderAmount = remainderAmount % 10;
    printf("Dimes    %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 5;
    remainderAmount = remainderAmount % 5;
    printf("Nickels  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    numberOfCoins = remainderAmount / 1;
    remainderAmount = remainderAmount % 1;
    printf("Pennies  %3d  %3.4lf\n", numberOfCoins, ((double)remainderAmount / 100));
    printf("\n");

    averageCost = ((double)totalAmountCents / 100) / ((double)(numberOfShirtsPatty + numberOfShirtsSally + numberOfShirtsTommy));
    printf("Average cost/shirt: $%4.4lf\n", averageCost);

    return 0;
}