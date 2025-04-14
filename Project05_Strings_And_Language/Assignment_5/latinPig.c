// Umesh Kumar
// U95237454
// This code encodes English languages phrases into a simplified version of the Pig Latin.

#include <stdio.h>
#include <string.h>

#define length 500

int readString(char string[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n') 
    {
        if (i < n) 
        {
            string[i++] = ch; // storing characters in the array
        }
        string[i] = '\0'; //end of string
    }
    return i; //number of characters stored
}

void pigLatin (char *word) {
    int j = 0;
    char temp;
    int a = strlen(word);
    
    temp = word[0]; // storing the first character of a word into a temporary variable

    for (j = 0; j < a - 1; j++) {
        word[j] = word[j + 1];  // this loop shifts back each character one step back starting from the second character
    }
    word[a - 1] = temp;

    printf("%say ", word);
}

int main () {

   char phrase[length];  // initializing a string

   printf("Enter a phrase to convert to pig latin: ");
   readString(phrase, length); // this function call here takes the input from the user.

   char *token = strtok(phrase, " ");  //token pointer

   puts("The converted phrase:");
   while(token != NULL)
   {
      pigLatin(token);
      token = strtok(NULL, " "); //get next delimiter
   }
   return 0;
}

