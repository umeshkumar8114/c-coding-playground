
// Umesh Kumar
// U95237454
// This code displays the characters of ASCII values between 32 and 126. 

#include <stdio.h>

int main() {
    
    int number;
    printf("Enter a integer between 32 and 126 inclusive: ");
    scanf("%d", &number);

    while (number < 32 || number > 126) {  // this makes sure that user enters a value between 32 and 126.
        printf("Invalid. Enter a integer between 32 and 126: ");
        scanf("%d", &number);
    }

    printf("The corresponding character for this integer is %c\n", number);

    return 0;
}