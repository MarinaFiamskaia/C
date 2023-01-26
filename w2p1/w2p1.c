/*
*****************************************************************************
                          Workshop - #2 (P1)
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

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    const int product1ID = 111;
    const int product2ID = 222;
    const int product3ID = 111;
    const double price1 = 111.49;
    const double price2 = 222.99;
    const double price3 = 334.49;
    const char taxed1 = 'Y';
    const char taxed2 = 'N';
    const char taxed3 = 'N';

    double avgPrice = (price1 + price2 + price3) / 3;

    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", product1ID);
    printf("\tTaxed: %c\n", taxed1);
    printf("\tPrice: $%.4lf\n\n", price1);

    printf("Product-2 (ID:%d)\n", product2ID);
    printf("\tTaxed: %c\n", taxed2);
    printf("\tPrice: $%.4lf\n\n", price2);

    printf("Product-3 (ID:%d)\n", product3ID);
    printf("\tTaxed: %c\n", taxed3);
    printf("\tPrice: $%.4lf\n\n", price3);

    printf("The average of all prices is: $%.4lf\n\n", avgPrice);

    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", taxed1=='Y'?1:0);
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> ");
    if (taxed2 == 'N' && taxed3 == 'N') {
        printf("1\n\n");
    }
    else {
        printf("0\n\n");
    }
    printf("3. Is product 3 less than testValue ($330.99)? -> %d\n\n", price3 <testValue ? 1 : 0);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> ");
    if (price3>(price1+price2)) {
        printf("1\n\n");
    }
    else {
        printf("0\n\n");
    }
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("of product 3 LESS product 2? -> ");
    if (price1>=(price3-price2)) {
        printf("1");
    }
    else {
        printf("0");
    }
    printf(" (price difference: %.2lf)\n\n", price3 - price2);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", price2 >=avgPrice ? 1 : 0);
    printf("Based on product ID, product 1 is unique -> ");
    if (product1ID!=product2ID && product1ID!=product3ID) {
        printf("1\n\n");
    }
    else {
        printf("0\n\n");
    }
    printf("8. Based on product ID, product 2 is unique -> ");
    if (product2ID != product1ID && product2ID != product3ID) {
        printf("1\n\n");
    }
    else {
        printf("0\n\n");
    }
    printf("9. Based on product ID, product 3 is unique -> ");
    if (product3ID != product1ID && product3ID != product2ID) {
        printf("1\n\n");
    }
    else {
        printf("0\n\n");
    }


    return 0;
}