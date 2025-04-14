
// Umesh Kumar
// U95237454
/* This code displays the number of pythagorean triangles that are possible given the limit 
   of the hypotenuse by the user.  */

#include <stdio.h>
#include <math.h>  

int main() {

    int max_length;
    printf("Enter a maximum integer length of the hypotenuse side of triangle: ");  
    scanf("%d", &max_length);  // user input 

    int i;
    int j;
    int k;
    int n_of_triples;  // number of triple sets found is initialized here
    n_of_triples = 0;  // this is the initialization of the number of triple sets that can be found

    for (i = 1; i <= max_length; i++) {  // i is hypotenuse (the longest side of the right-angled triangle)
        // printf("%d ", i);
        for (j = 1; j < max_length; j++) // j is base (the adjacent side of the right-angled triangle) 
        {
            for (k = 1; k < max_length; k++)  // k is perpendicular (the opposite side of the right-angled triangle)
            {
                if ((pow(j, 2)) + (pow(k, 2)) == (pow(i, 2))) {  // this is the check for pythagoras theorem (j^2 + k^2 = i^2)
                    n_of_triples = n_of_triples + 1;  // each time a triple set is found, 'n_of_triples' increases by 1 
    printf("(%d %d %d) ", j, k, i);
                }

            }
            
        }
        
    }  
    printf("\nThere are %d triple sets \n", n_of_triples);

    return 0;
}