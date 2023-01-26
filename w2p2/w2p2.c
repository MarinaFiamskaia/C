/*
*****************************************************************************
                          Workshop - #2 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char coffee1_type=0;
    char coffee1_grindSize=0;
    int coffee1_bagWeight=0;
    char coffee1_servedCream=0;
    double coffee1_servingTempCelsius=0.00;

    char coffee2_type = 0;
    char coffee2_grindSize = 0;
    int coffee2_bagWeight = 0;
    char coffee2_servedCream = 0;
    double coffee2_servingTempCelsius = 0.00;

    char coffee3_type = 0;
    char coffee3_grindSize = 0;
    int coffee3_bagWeight = 0;
    char coffee3_servedCream = 0;
    double coffee3_servingTempCelsius = 0.00;

    char userPreference_strenght = 0;
    char userPreference_cream = 0;
    int userPreference_dailyServings = 0;
    char userPreference_equipment = 0;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    printf("Enter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee1_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee1_grindSize);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee1_bagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee1_servedCream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &coffee1_servingTempCelsius);
    printf("\n");

    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee2_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee2_grindSize);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee2_bagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee2_servedCream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &coffee2_servingTempCelsius);
    printf("\n");

    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffee3_type);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffee3_grindSize);
    printf("Bag weight (g): ");
    scanf(" %d", &coffee3_bagWeight);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffee3_servedCream);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %lf", &coffee3_servingTempCelsius);
    printf("\n");

    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |     Coffee    |    Packaged   | Best  |    Serving   \n");
    printf("   |     Type      |   Grind Size  |   Bag Weight  | Served|  Temperature \n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G)  |  Lbs  | Cream |  (C)  |  (F) \n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |");
    //Type
    if (coffee1_type == 'l' || coffee1_type == 'L'){
        printf("   1   |   0   |");
    }
    else if(coffee1_type == 'b' || coffee1_type == 'B'){
        printf("   0   |   1   |");
    }
    //Grind Size
    if (coffee1_grindSize == 'c' || coffee1_grindSize == 'C') {
        printf("    1   |  0   |");
    }
    else if (coffee1_grindSize == 'f' || coffee1_grindSize == 'F') {
        printf("    0   |  1   |");
    }
    //Weight
    printf(" %4d | %6.3lf |", coffee1_bagWeight, coffee1_bagWeight / GRAMS_IN_LBS);
    //Suggested Served with Cream
    if (coffee1_servedCream == 'y' || coffee1_servedCream=='Y') {
        printf("   1   |");
    }
    else if (coffee1_servedCream == 'n' || coffee1_servedCream == 'N') {
        printf("   0   |");
    }
    //Serving Temperature
    printf(" %5.1lf | %5.1lf \n", coffee1_servingTempCelsius, ((coffee1_servingTempCelsius * 1.8) + 32.0));

    printf(" 2 |"); // Type
    if (coffee2_type == 'l' || coffee2_type == 'L') {
        printf("   1   |   0   |");
    }
    else if (coffee2_type == 'b' || coffee2_type == 'B') {
        printf("   0   |   1   |");
    }
    //Grind Size
    if (coffee2_grindSize == 'c' || coffee2_grindSize == 'C') {
        printf("    1   |  0   |");
    }
    else if (coffee2_grindSize == 'f' || coffee2_grindSize == 'F') {
        printf("    0   |  1   |");
    }
    //Weight
    printf(" %4d | %6.3lf |", coffee2_bagWeight, coffee2_bagWeight / GRAMS_IN_LBS);
    //Serving Temperature
    if (coffee2_servedCream == 'y' || coffee2_servedCream == 'Y') {
        printf("   1   |");
    }
    else if (coffee2_servedCream == 'n' || coffee2_servedCream == 'N') {
        printf("   0   |");
    }
    //Temperature
    printf(" %5.1lf | %5.1lf \n", coffee2_servingTempCelsius, ((coffee2_servingTempCelsius * 1.8) + 32.0));

    printf(" 3 |");
    if (coffee3_type == 'l' || coffee3_type == 'L') {
        printf("   1   |   0   |");
    }
    else if (coffee3_type == 'b' || coffee3_type == 'B') {
        printf("   0   |   1   |");
    }
    if (coffee3_grindSize == 'c' || coffee3_grindSize == 'C') {
        printf("    1   |  0   |");
    }
    else if (coffee3_grindSize == 'f' || coffee3_grindSize == 'F') {
        printf("    0   |  1   |");
    }
    printf(" %4d | %6.3lf |", coffee3_bagWeight, coffee3_bagWeight / GRAMS_IN_LBS);
    if (coffee3_servedCream == 'y' || coffee3_servedCream == 'Y') {
        printf("   1   |");
    }
    else if (coffee3_servedCream == 'n' || coffee3_servedCream == 'N') {
        printf("   0   |");
    }
    printf(" %5.1lf | %5.1lf \n", coffee3_servingTempCelsius, ((coffee3_servingTempCelsius * 1.8) + 32.0));
    printf("\n");

    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &userPreference_strenght);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &userPreference_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &userPreference_dailyServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &userPreference_equipment);
    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |        Coffee      |   Packaged  | With  |    Serving   \n");
    printf("ID|      Type       |      Grind Size    |  Bag Weight | Cream |  Temperature \n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       ");//Type
    if (userPreference_strenght=='m' || userPreference_strenght=='M') {
        if(coffee1_type == 'l' || coffee1_type == 'L') printf("1         |");
        if (coffee1_type == 'b' || coffee1_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee1_type == 'l' || coffee1_type == 'L') printf("0         |");
        if (coffee1_type == 'b' || coffee1_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee1_grindSize == 'c' || coffee1_grindSize == 'C') printf("1        |");
        if (coffee1_grindSize == 'f' || coffee1_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee1_grindSize == 'c' || coffee1_grindSize == 'C') printf("0        |");
        if (coffee1_grindSize == 'f' || coffee1_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >=1 && userPreference_dailyServings <=4) {
        if (coffee1_bagWeight >=0 && coffee1_bagWeight <=250) printf("1      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("0      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >=5 && userPreference_dailyServings <=9) {
        if (coffee1_bagWeight >= 0 && coffee1_bagWeight <= 250) printf("0      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("1      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >=10) {
        if (coffee1_bagWeight >= 0 && coffee1_bagWeight <= 250) printf("0      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("0      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee1_servedCream == 'y' || coffee1_servedCream == 'Y') printf("1   |");
        if (coffee1_servedCream == 'n' || coffee1_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee1_servedCream == 'y' || coffee1_servedCream == 'Y') printf("0   |");
        if (coffee1_servedCream == 'n' || coffee1_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee1_servingTempCelsius >=60.0 && coffee1_servingTempCelsius <=69.9) printf("1      ");
        if (coffee1_servingTempCelsius >=70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee1_servingTempCelsius >= 60.0 && coffee1_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee1_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");

    printf(" 2|       ");//Type
    if (userPreference_strenght == 'm' || userPreference_strenght == 'M') {
        if (coffee2_type == 'l' || coffee2_type == 'L') printf("1         |");
        if (coffee2_type == 'b' || coffee2_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee2_type == 'l' || coffee2_type == 'L') printf("0         |");
        if (coffee2_type == 'b' || coffee2_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee2_grindSize == 'c' || coffee2_grindSize == 'C') printf("1        |");
        if (coffee2_grindSize == 'f' || coffee2_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee2_grindSize == 'c' || coffee2_grindSize == 'C') printf("0        |");
        if (coffee2_grindSize == 'f' || coffee2_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >= 1 && userPreference_dailyServings <= 4) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("1      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("0      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 5 && userPreference_dailyServings <= 9) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("0      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("1      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 10) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("0      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("0      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee2_servedCream == 'y' || coffee2_servedCream == 'Y') printf("1   |");
        if (coffee2_servedCream == 'n' || coffee2_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee2_servedCream == 'y' || coffee2_servedCream == 'Y') printf("0   |");
        if (coffee2_servedCream == 'n' || coffee2_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee2_servingTempCelsius >= 60.0 && coffee2_servingTempCelsius <= 69.9) printf("1      ");
        if (coffee2_servingTempCelsius >= 70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee2_servingTempCelsius >= 60.0 && coffee2_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee2_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");

    printf(" 3|       ");//Type
    if (userPreference_strenght == 'm' || userPreference_strenght == 'M') {
        if (coffee3_type == 'l' || coffee3_type == 'L') printf("1         |");
        if (coffee3_type == 'b' || coffee3_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee3_type == 'l' || coffee3_type == 'L') printf("0         |");
        if (coffee3_type == 'b' || coffee3_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee3_grindSize == 'c' || coffee3_grindSize == 'C') printf("1        |");
        if (coffee3_grindSize == 'f' || coffee3_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee3_grindSize == 'c' || coffee3_grindSize == 'C') printf("0        |");
        if (coffee3_grindSize == 'f' || coffee3_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >= 1 && userPreference_dailyServings <= 4) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("1      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("0      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 5 && userPreference_dailyServings <= 9) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("0      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("1      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 10) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("0      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("0      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee3_servedCream == 'y' || coffee3_servedCream == 'Y') printf("1   |");
        if (coffee3_servedCream == 'n' || coffee3_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee3_servedCream == 'y' || coffee3_servedCream == 'Y') printf("0   |");
        if (coffee3_servedCream == 'n' || coffee3_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee3_servingTempCelsius >= 60.0 && coffee3_servingTempCelsius <= 69.9) printf("1      ");
        if (coffee3_servingTempCelsius >= 70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee3_servingTempCelsius >= 60.0 && coffee3_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee3_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");
    printf("\n");
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");

    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &userPreference_strenght);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &userPreference_cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &userPreference_dailyServings);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &userPreference_equipment);
    printf("\n");

    printf("The below table shows how your preferences align to the available products:\n\n");

    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |        Coffee      |   Packaged  | With  |    Serving   \n");
    printf("ID|      Type       |      Grind Size    |  Bag Weight | Cream |  Temperature \n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       ");//Type
    if (userPreference_strenght == 'm' || userPreference_strenght == 'M') {
        if (coffee1_type == 'l' || coffee1_type == 'L') printf("1         |");
        if (coffee1_type == 'b' || coffee1_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee1_type == 'l' || coffee1_type == 'L') printf("0         |");
        if (coffee1_type == 'b' || coffee1_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee1_grindSize == 'c' || coffee1_grindSize == 'C') printf("1        |");
        if (coffee1_grindSize == 'f' || coffee1_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee1_grindSize == 'c' || coffee1_grindSize == 'C') printf("0        |");
        if (coffee1_grindSize == 'f' || coffee1_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >= 1 && userPreference_dailyServings <= 4) {
        if (coffee1_bagWeight >= 0 && coffee1_bagWeight <= 250) printf("1      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("0      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 5 && userPreference_dailyServings <= 9) {
        if (coffee1_bagWeight >= 0 && coffee1_bagWeight <= 250) printf("0      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("1      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 10) {
        if (coffee1_bagWeight >= 0 && coffee1_bagWeight <= 250) printf("0      |");
        if (coffee1_bagWeight >= 251 && coffee1_bagWeight <= 500) printf("0      |");
        if (coffee1_bagWeight >= 501 && coffee1_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee1_servedCream == 'y' || coffee1_servedCream == 'Y') printf("1   |");
        if (coffee1_servedCream == 'n' || coffee1_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee1_servedCream == 'y' || coffee1_servedCream == 'Y') printf("0   |");
        if (coffee1_servedCream == 'n' || coffee1_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee1_servingTempCelsius >= 60.0 && coffee1_servingTempCelsius <= 69.9) printf("1      ");
        if (coffee1_servingTempCelsius >= 70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee1_servingTempCelsius >= 60.0 && coffee1_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee1_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");

    printf(" 2|       ");//Type
    if (userPreference_strenght == 'm' || userPreference_strenght == 'M') {
        if (coffee2_type == 'l' || coffee2_type == 'L') printf("1         |");
        if (coffee2_type == 'b' || coffee2_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee2_type == 'l' || coffee2_type == 'L') printf("0         |");
        if (coffee2_type == 'b' || coffee2_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee2_grindSize == 'c' || coffee2_grindSize == 'C') printf("1        |");
        if (coffee2_grindSize == 'f' || coffee2_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee2_grindSize == 'c' || coffee2_grindSize == 'C') printf("0        |");
        if (coffee2_grindSize == 'f' || coffee2_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >= 1 && userPreference_dailyServings <= 4) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("1      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("0      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 5 && userPreference_dailyServings <= 9) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("0      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("1      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 10) {
        if (coffee2_bagWeight >= 0 && coffee2_bagWeight <= 250) printf("0      |");
        if (coffee2_bagWeight >= 251 && coffee2_bagWeight <= 500) printf("0      |");
        if (coffee2_bagWeight >= 501 && coffee2_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee2_servedCream == 'y' || coffee2_servedCream == 'Y') printf("1   |");
        if (coffee2_servedCream == 'n' || coffee2_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee2_servedCream == 'y' || coffee2_servedCream == 'Y') printf("0   |");
        if (coffee2_servedCream == 'n' || coffee2_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee2_servingTempCelsius >= 60.0 && coffee2_servingTempCelsius <= 69.9) printf("1      ");
        if (coffee2_servingTempCelsius >= 70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee2_servingTempCelsius >= 60.0 && coffee2_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee2_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");

    printf(" 3|       ");//Type
    if (userPreference_strenght == 'm' || userPreference_strenght == 'M') {
        if (coffee3_type == 'l' || coffee3_type == 'L') printf("1         |");
        if (coffee3_type == 'b' || coffee3_type == 'B') printf("0         |");
    }
    else if (userPreference_strenght == 'r' || userPreference_strenght == 'R') {
        if (coffee3_type == 'l' || coffee3_type == 'L') printf("0         |");
        if (coffee3_type == 'b' || coffee3_type == 'B') printf("1         |");
    }
    printf("           ");//Size
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee3_grindSize == 'c' || coffee3_grindSize == 'C') printf("1        |");
        if (coffee3_grindSize == 'f' || coffee3_grindSize == 'F') printf("0        |");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee3_grindSize == 'c' || coffee3_grindSize == 'C') printf("0        |");
        if (coffee3_grindSize == 'f' || coffee3_grindSize == 'F') printf("1        |");
    }
    printf("      ");//Daily Servings
    if (userPreference_dailyServings >= 1 && userPreference_dailyServings <= 4) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("1      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("0      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 5 && userPreference_dailyServings <= 9) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("0      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("1      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("0      |");
    }
    else if (userPreference_dailyServings >= 10) {
        if (coffee3_bagWeight >= 0 && coffee3_bagWeight <= 250) printf("0      |");
        if (coffee3_bagWeight >= 251 && coffee3_bagWeight <= 500) printf("0      |");
        if (coffee3_bagWeight >= 501 && coffee3_bagWeight <= 1000) printf("1      |");
    }
    printf("   ");//With Cream
    if (userPreference_cream == 'y' || userPreference_cream == 'Y') {
        if (coffee3_servedCream == 'y' || coffee3_servedCream == 'Y') printf("1   |");
        if (coffee3_servedCream == 'n' || coffee3_servedCream == 'N') printf("0   |");
    }
    else if (userPreference_cream == 'n' || userPreference_cream == 'N') {
        if (coffee3_servedCream == 'y' || coffee3_servedCream == 'Y') printf("0   |");
        if (coffee3_servedCream == 'n' || coffee3_servedCream == 'N') printf("1   |");
    }
    printf("       ");//Serving Temperature
    if (userPreference_equipment == 'r' || userPreference_equipment == 'R') {
        if (coffee3_servingTempCelsius >= 60.0 && coffee3_servingTempCelsius <= 69.9) printf("1      ");
        if (coffee3_servingTempCelsius >= 70.0) printf("0      ");
    }
    else if (userPreference_equipment == 'c' || userPreference_equipment == 'C') {
        if (coffee3_servingTempCelsius >= 60.0 && coffee3_servingTempCelsius <= 69.9) printf("0      ");
        if (coffee3_servingTempCelsius >= 70.0) printf("1      ");
    }
    printf("\n");
    printf("\n");

    printf("Hope you found a product that suits your likes!\n");
    printf("\n");
   
    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);

    return 0;
}
