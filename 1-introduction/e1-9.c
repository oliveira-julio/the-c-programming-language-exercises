#include <stdio.h>

#define BLANK ' '

main () {
  int c, blanks;

  blanks = 0;
  
  while ((c = getchar()) != EOF) {
    if (c != BLANK) {
      blanks = 0;
    } else {
      blanks++;
    }

    if (blanks <= 1) {
      putchar(c);
    }
  }
}

