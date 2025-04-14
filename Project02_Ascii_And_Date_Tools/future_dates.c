
// Umesh Kumar
// U95237454
/* This code displays the current name of day and the future name of day 
   which user wishes to know. The user is asked to input two integers. First 
   integer is for the current day and second integer is for how many later days 
   he wishes to know after the current day. */

#include <stdio.h>

int main() {

    int number;
    printf("Enter a number between 0 and 6: ");
    scanf("%d", &number);

    while (number < 0 || number > 6) {  // this is make sure that input entered is between 0 and 6 inclusive.
        printf("Invalid. Enter a number between 0 and 6: ");
        scanf("%d", &number);
    }

    int number2;
    printf("Enter the number for future day you wish to know: ");
    scanf("%d", &number2);

    switch (number) {
        case 0:
        printf("Today is Sunday. ");
        break;

        case 1:
        printf("Today is Monday. ");
        break;

        case 2:
        printf("Today is Tuesday. ");
        break;

        case 3:
        printf("Today is Wednesday. ");
        break;

        case 4:
        printf("Today is Thursday. ");
        break;

        case 5:
        printf("Today is Friday. ");
        break;

        case 6:
        printf("Today is Saturday. ");
        break;
    }

    int future_day = number + number2;  // this statement adds the integers of current and future days
    int actual = future_day % 7;  /* this statement loops back to make 
    sure that future day is kept between 0 and 6 inclusive. */

        switch (actual) {
        case 0:
        printf("In %d days, it will be Sunday.\n", number2);
        break;

        case 1:
        printf("In %d days, it will be Monday.\n", number2);
        break;

        case 2:
        printf("In %d days, it will be Tuesday.\n", number2);
        break;

        case 3:
        printf("In %d days, it will be Wednesday.\n", number2);
        break;

        case 4:
        printf("In %d days, it will be Thursday.\n", number2);
        break;

        case 5:
        printf("In %d days, it will be Friday.\n", number2);
        break;

        case 6:
        printf("In %d days, it will be Saturday.\n", number2);
        break;
    }

    return 0;
}