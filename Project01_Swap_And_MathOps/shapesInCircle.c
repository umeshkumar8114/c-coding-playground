
#include <stdio.h>
#include <math.h>

//Umesh Kumar
//U95237454
//this piece of code calculates the specifications of two different figures in two same circles

int main() {
  
  int radius;

  printf("Enter the radius: ");
  scanf("%d", &radius);

  // below are the formulas for calculating the area and circumference of the circle
  float area = M_PI*radius*radius;
  float circumference = M_PI*radius*2;
 
  // below are the calculations for figure 1 in which a square is inscribed into a circle
  float side_length1 = radius*sqrt(2); //the 1 at the end of the var name represents the figure number in the assignment
  float perimeter1 = 4*radius*sqrt(2);
  float area1 = 2*radius*radius;

  // below are the calculations for figure 2 in which a equilateral triangle is inscribed into a circle
  float side_length2 = radius*sqrt(3); //after manipulating the formula, side_length2 gives the length of one side of equi. triangle
  float	perimeter2 = 3*radius*sqrt(3);
  float	area2 =	(side_length2*side_length2*sqrt(3))/4;

  // the following print statements display the area and circumference of the circle and the specifications of figures inside those circles
  printf("The area of the circle is %.3f\n", area);
  printf("The circumference of the circle is %.3f\n", circumference);
  printf("\n");
  printf("The side length of square in figure 1 is %.3f\n", side_length1);
  printf("The perimeter of square is %.3f\n", perimeter1);
  printf("The area of square is %.3f\n", area1);
  printf("\n");
  printf("The side length of triangle in figure 2 is %.3f\n", side_length2);
  printf("The perimeter of triangle is %.3f\n", perimeter2);
  printf("The area of triangle is %.3f\n", area2);
  printf("\n");

  return 0;

}
