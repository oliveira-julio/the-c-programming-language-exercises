#include <stdio.h>


int main () {
  int cursor;
  int characters[127];

  /* init count in 0*/
  for (int i = 0; i < 128; i++)
    {
      characters[i] = 0;
    }

  while ((cursor = getchar()) != EOF)
    {
      characters[cursor]++;
    }

  /* print from space to ~ */
  for (int i = 32; i < 127; i++)
    {
      printf("%3d | %c | %d\n", i, i, characters[i]);
    }
  return 0;
}
