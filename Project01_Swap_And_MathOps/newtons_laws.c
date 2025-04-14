#include <stdio.h>

//Umesh Kumar
//U95237454

// this piece of code calculates the forces between Sun, Earth and Moon during an eclipse
// the formula for gravitation was taken from wikipedia (source: en.wikipedia.org)

int main() {

  double G = 6.674E-11;  // gravitational constant (source: en.wikipedia.org)

  double mass_sun = 1.99E30;
  double mass_earth = 5.98E24;
  double mass_moon = 7.36E22;

  double ste = 1.496E11;  // ste means sun to earth distance 
  double mte = 3.84E8;   // mte means moon to earth distance
  double stm = 1.49216E11;  // 1.496E11 - 3.84E8 and stm means sun to moon distance

  double fbse = (G*mass_sun*mass_earth)/(ste*ste);  // fbse means force between sun and earth
  double fbme = (G*mass_moon*mass_earth)/(mte*mte);  // fbme means force between moon and earth
  double fbsm = (G*mass_moon*mass_sun)/(stm*stm);  // fbsm means force between sun and moon

  printf("The force exerted by the Sun on the Moon is %f\n", fbsm);
  printf("The force exerted by the Earth on the Moon is %f\n", fbme);
  printf("The force exerted by the Sun on the Earth is %f\n", fbse);
 
 return 0;

}
