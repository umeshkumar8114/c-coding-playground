// Umesh Kumar
// U95237454
/* This code reads in 10 values from the user 
   and then asks the user to enter another value to 
   determine if it is in the array*/

#include <stdio.h>

int main() {

    int i = 0;
    int arr[10];  // initializing the array of size 10
    int* ptr;

    ptr = arr;

    printf("Enter 10 values to store in an array: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", ptr + i);  // this stores the values in an array
    }

    int find_number; // this is the integer the user enters to find out if it is in the array.
    printf("Enter the integer to know if it is in array or not: ");
    scanf("%d", &find_number);

    int flag = 1;  
    int j = 0;
    for (j = 0; j < 10; j++) {
        if (*(ptr + j) == find_number) {
            printf("Your entered number is in the following index: %d\n", j);
            flag = 0;
            break;  // this breaks the for loop when the number is found in the array
        }
    }
    
    if (flag == 1) {
        printf("Your entered number is not in the array.\n");
    }
    return 0;
}