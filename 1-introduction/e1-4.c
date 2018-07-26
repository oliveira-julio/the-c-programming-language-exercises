#include <stdio.h>


/*
  print Celsius-Fahrenheit table
*/
main () {
  printf("Celsius-Fahrenheit table\n");
  printf("%3c %6c\n", 'C', 'F');


  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 20;

  celsius = lower;
  
  while (celsius <= upper) {
    fahr = 1.8 * celsius + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
