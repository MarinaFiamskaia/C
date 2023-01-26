/*
*****************************************************************************
                          Workshop - #4 (P1)
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
    char loopType='x';
    int numberOfIterations=0;
    int exitFlag=0;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");

    exitFlag = 0;
    do {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &numberOfIterations);

        //validation && Iteration
        if (loopType != 'D' && loopType != 'W' && loopType != 'F' && loopType != 'Q') {
            printf("ERROR: Invalid entered value(s)!\n");
        }
        else if (loopType != 'Q' && (numberOfIterations < 3 || numberOfIterations > 20)) {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        }
        else if (loopType == 'Q' && numberOfIterations != 0) {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        }
        else if (loopType == 'Q' && numberOfIterations == 0) {
            exitFlag = 1;
        }
        else {
            //do while
            if (loopType == 'D') {
                exitFlag = 0;
                printf("DO-WHILE: ");
                do {
                    printf("%c", loopType);
                    exitFlag++;
                } while (exitFlag != numberOfIterations);
                exitFlag = 0;
            }
            //while
            else if (loopType == 'W') {
                exitFlag = 0;
                printf("WHILE   : ");
                while (exitFlag != numberOfIterations) {
                    printf("%c", loopType);
                    exitFlag++;
                }
                exitFlag = 0;
            }
            //for
            else if (loopType == 'F') {
                printf("FOR     : ");
                for (exitFlag = 0; exitFlag < numberOfIterations; exitFlag++) {
                    printf("%c", loopType);
                }
                exitFlag = 0;
            }
        }
        printf("\n");
    } while (exitFlag < 1);

    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
   
    return 0;
}