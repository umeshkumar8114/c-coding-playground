#include <stdio.h>

//Umesh Kumar
//U95237454
// this piece of code swaps the values of two integers without using a third variable

int main() {
  
  int x;
  printf("Enter a value for x: "); // this is value 1
  scanf("%d", &x);

  int y;
  printf("Enter	a value	for y: "); // this is value 2
  scanf("%d", &y);


// below is the arithmetic that uses the two varibles taken from the user and swaps
  x = x + y;
  y = x - y;
  x = x - y;
  
  printf("After Swapping:\nx = %d", x);
  printf("\ny = %d", y);
  printf("\n");
  
  return 0;

}
