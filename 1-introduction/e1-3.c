#include <stdio.h>


/* print Fahrenheit-Celsius table */
main () {
  printf("Fahrenheit-Celsius table\n");
  printf("%3c %6c\n", 'F', 'C');

  float fahr, celsius;

  int lower, upper, step;

  lower = 0;
  upper = 200;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
