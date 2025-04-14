// Umesh Kumar
// U95237454
// This code reads in 15 values from the user and then stores and displays only distinct values in the array.
// The duplicates are neither stored nor displayed.  


#include <stdio.h>

int main() {
    int i;
    int nums[15]; // 15 is the maximum size of the array. It may not necessarily become full. 
    int len_nums = 0;  
    int user_input; 

 
    for(i = 0; i < 15; i++) {
        printf("Enter 15 integers between 1 and 100: ");
        scanf("%d", &user_input);
        while (user_input < 0 || user_input > 100) {  // this loop makes sure that value entered is within 1 and 100.
            printf("Invalid. Please enter an integer between 1 and 100: ");  
            scanf("%d", &user_input);

        }
        if (i == 0) {  // this is for the first value entered by the user 
            nums[0] = user_input;  /* first value entered by user is stored in the array 
                                    because there is no other value to compare it to.  */
            len_nums = len_nums + 1;
            
        }   
        else {
            /* check user input value against all previous values in the nums array to decide whether
            to add the user input value to the nums array.
            If the user input matches one of the previous values, then don't add the user input to the nums array
            break the loop. Otherwise, add the user input to the nums array */
            int j;
            int is_duplicate = 0;  // this is working as a boolean here 
            for (j = 0; j < len_nums; j++) {
                if (user_input == nums[j]) {  // when a duplicate is found "is_duplicate changes to 1."
                    is_duplicate = 1;
                    break;
                }
            }
        
            if (is_duplicate == 0) {  /* if a duplicate is not found in the above for loop, 
                                         user_input gets stored into the nums array */
                nums[len_nums] = user_input;
                len_nums = len_nums + 1; 
            }          
        }
    }
    
    int a;
    printf("The non-duplicate values are: \n");
     for (a = 0; a < len_nums; a++) {     
        printf("%d ", nums[a]);  // this displays all the distinct values entered by the user
    }
}
