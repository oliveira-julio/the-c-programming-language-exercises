#include <stdio.h>


float fahrenheit_to_celsius(int fahr);


int main()
{
  for (int fahr = 300; fahr >= 0; fahr = fahr -20)
  {
    printf("%3d %6.1f\n", fahr, fahrenheit_to_celsius(fahr));
  }
  return 0;
}


float fahrenheit_to_celsius(int fahr)
{
  return ((5.0/9.0)*(fahr-32));
}
