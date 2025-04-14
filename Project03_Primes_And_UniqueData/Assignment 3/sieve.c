// Umesh Kumar
// U95237454
// This code finds and displasys prime numbers up till the limit provided by the user. 

#include <stdio.h>

void flipper(int a[], int size);  // function prototype

int main() {

    int size;
    printf("State the size of the array: ");  
    scanf("%d", &size);  // asking user for the size of the array

    // declaring array of user specified size
    int prime[size];
    int i;
    for (i = 0; i < size; i++){
        prime[i] = 1; // initializing all elements to 1. 
    }
    
    int num_primes = 0;
    flipper(prime, size);
    int l;  // declaring a varibale for use in the for loop
    // int s = 0;
    for (l = 2; l < size; l++) {
        if (prime[l] == 1) { 
            prime[l] = l;  // converting all remaining 1's to the actual prime number. 
            num_primes += 1;  // keeping count of the quantity of prime numbers found
            printf("%d ", l);
            if (num_primes % 10 == 0) { // this statement makes sure that only 10 prime numbers are printed on one line
                printf("\n");
            }
        }
    }  

    printf("\nQuantity of prime numbers found: %d\n", num_primes);  // displaying the number of primes found

    return 0;
}

void flipper(int arr[], int size) {  // void function accepting two parameters. Array and its size
    int j;  // declaring 'j' for use in the for loop
    for (j = 2; j < size; j++) {
        if (arr[j] == 1) {
            int k;  // declaring 'k' for use in the for loop
            for (k = j*2; k < size; k++) {  // this loop makes sure that every 
                if (k % j == 0) {  // this statement checks for the multiples of integers
                    arr[k] = 0;
                }
            }
        } 
    }
}