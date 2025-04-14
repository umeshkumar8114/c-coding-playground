//Umesh Kumar
//U95237454
/*This code reads in the values of temperatures and rainfall from the files 
  and stores them in the array of structures. After that, useful info
  like hihgest and lowest temperatures are displayed.*/

#include <stdio.h> 


struct weather
{
double mht;  //mht means monthly high temperature
double mlt;  //mlt means monthly low temperature
double mRain;  //mRain is the monthly rainfall
};

int main () {

    char *month[] = {"January", "February", "March", "April", "May",
                     "June", "July", "August", "September",
                     "October", "November", "December"};

    struct weather file_values[12];  // initializing an array of 12 structures    
    FILE *pin;  // initializing pointer to file structure

//1) Storing monthly high temperature
    pin = fopen("hightemps.txt", "r"); 
    if (pin == NULL) 
    { 
        printf("Error opening file.\n"); // if the file is empty, this meesage would be displayed
        return 1; 
    } 
    int i;
    for (i = 0; i < 12; i++) {
        fscanf(pin, "%lf", &file_values[i].mht);  //reading in 12 values into array of structure
    }
    fclose(pin);

//2) Storing monthly low temperatures
    pin = fopen("lowtemps.txt", "r"); 
    if (pin == NULL) 
    { 
        printf("Error opening file.\n");  // if the file is empty, this meesage would be displayed
        return 1; 
    } 
    int j;
    for (j = 0; j < 12; j++) {
        fscanf(pin, "%lf", &file_values[j].mlt);  //reading in 12 values into array of structure
    }
    fclose(pin);

//3) Storing monthly rainfall
    double sum = 0;
    pin = fopen("rainfall.txt", "r"); 
    if (pin == NULL) 
    { 
        printf("Error opening file.\n"); // if the file is empty, this meesage would be displayed
        return 1; 
    } 
    int k;
    for (k = 0; k < 12; k++) {
        fscanf(pin, "%lf", &file_values[k].mRain);  //reading in 12 values into array of structure
        sum = sum + file_values[k].mRain;  // total rainfall in a year
    }
    fclose(pin);
    
    // Noting indices and accessinng highest and lowest temperature
    double highest_temp = file_values[6].mht;  
    double lowest_temp = file_values[0].mlt;

    printf("The highest temperature of the year obtained in month \"%s\" is %.1lf\n", month[6], highest_temp);
    printf("The lowest temperature of the year obtained in month \"%s\" is %.1lf\n", month[0], lowest_temp);
    puts("");

    printf("The highest rainfall recorded is in %s which is %.2lf\n", month[7], file_values[7].mRain);
    printf("The lowest rainfall recorded is in %s which is %.2lf\n", month[10], file_values[10].mRain);
    puts("");

    printf("Total rainfall for the year: %.2lf\n", sum);
    printf("Average monthly rainfall: %.2lf\n", sum/12);

    return 0;
    }