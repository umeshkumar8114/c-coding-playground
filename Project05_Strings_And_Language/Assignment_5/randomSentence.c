//Umesh Kumar
//U95237454
/*This code generates random sentences by selecting a word at random from different arrays.
  The arrays contain article, noun, verb, and preposition */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define size 45

int main() {

    char *article[] = {"the", "a", "one", "some", "any"};
    char *noun[] = {"boy", "girl", "dog", "town", "car"};
    char *verb[] =  {"drove", "jumped", "ran", "walked", "skipped"};
    char *preposition[] = {"to", "from", "over", "under", "on"};

    srand(time(0));

    int n;  // n is the number of sentences the user wishes to generate
    printf("How many sentences would you like to generate? ");
    scanf("%d", &n);

    
    int j = 0;
    char sentence[n][size];  // initializing a 2d array to store sentences
    for (j = 0; j < n; j++) {
      strcpy(sentence[j], ""); /* this loop makes sure that no garbage values are assigned
                                  when the 2d array is initialized */
    }
    int i;
    for (i = 0; i < n; ++i) {
        strcat(sentence[i], article[rand() % 5]);  /* this concatenates the word chosen 
                                                    from article array to the sentence array */
        strcat(sentence[i], " ");  // this concatenates a space between the words

        strcat(sentence[i], noun[rand() % 5]); /* this concatenates the word chosen 
                                                    from noun array to the sentence array */
        strcat(sentence[i], " ");
        strcat(sentence[i], verb[rand() % 5]); /* this concatenates the word chosen 
                                                    from verb array to the sentence array */
        strcat(sentence[i], " ");
        strcat(sentence[i], preposition[rand() % 5]); /* this concatenates the word chosen 
                                                    from preposition array to the sentence array */
        strcat(sentence[i], " ");
        strcat(sentence[i], article[rand() % 5]);
        strcat(sentence[i], " ");
        strcat(sentence[i], noun[rand() % 5]);
        strcat(sentence[i], ".");
        printf("%s\n", sentence[i]);
    }
    return 0;
}

