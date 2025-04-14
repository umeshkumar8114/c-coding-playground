//Umesh Kumar
//U95237454
/*This code reads in the scores of six assignments, one midterm, and one final exam.
  Then it assigns different weightages to those scores and calculates the
  total score and the corresponding grade letter. */
/* to make the code more user-friendly,
   I added three while loops for assignments, midterm and final score.*/

#include <stdio.h>
#include <stdlib.h>

char gradeLetter(float score) { // a function to return the letter grade based on the total final place
    if (score >= 90) {
        return 'A';
    }
    else if (score >= 80) {
        return 'B';
    }
    else if (score >= 70) {
        return 'C';
    }
    else if (score >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }    
}

int main() {

    float *p = NULL;
    p = (float*) malloc(8 * sizeof(float));

    int i;
    float midterm;
    float final;
    float sum = 0;
    for (i = 0; i < 8; i++) {
        if (i == 6) { // the midterm exam score is stored in the 7th place at p[6]
            printf("Enter the midterm exam score: ");  
            scanf("%f", &p[i]);
        while (p[i] < 0 || p[i] > 100) {  // this loop makes sure that value entered is within 0 and 100.
            printf("Invalid. Please enter the number between 0 and 100: ");  
            scanf("%f", &p[i]);
            }
            midterm = p[i];
        }
        else if (i == 7) {  // the final exam score is stored in the 8th place of array at p[7]
            printf("Enter the final exam score: ");
            scanf("%f", &p[i]);
        while (p[i] < 0 || p[i] > 100) {  // this loop makes sure that value entered is within 0 and 100.
            printf("Invalid. Please enter the number between 0 and 100: ");  
            scanf("%f", &p[i]);
            }
            final = p[i];
        }
        else {  // the first six scores are for assignments and then later they are added.
            printf("Enter the score of assignment %d: ", i + 1);
            scanf("%f", &p[i]);
        while (p[i] < 0 || p[i] > 100) {  // this loop makes sure that value entered is within 0 and 100.
            printf("Invalid. Please enter the number between 0 and 100: ");  
            scanf("%f", &p[i]);
            }
            sum = sum + p[i];  // this gives the sum of the six assignment scores
        }
    }
    float *finalScore = NULL;
    finalScore = (float*) malloc(sizeof(float));

    *finalScore = (sum/600 * 35) + (midterm/100 * 30) + (final/100 * 35);  // this calculates the total 
                                                                           //score after applying weigthage
    printf("\nThe final score after applying weightage is: %f\n", *finalScore);
    
    char letter;
    letter = gradeLetter(*finalScore);
    printf("The corresponding grade is: %c\n", letter);  // this gives the letter grade based on total score

    return 0;
}