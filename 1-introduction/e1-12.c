#include <stdio.h>

#define IN 1
#define OUT 0


main () {
  int c, state, f;

  c = getchar();
  
  if ((c == '\n') || (c == '\t') || (c == ' ')) {
    state = OUT;
  } else {
    putchar(c);
    state = IN;
  }
  
  while ((c = getchar()) != EOF) {
    if ((c == '\n') || (c == '\t') || (c == ' ')) {
      if (state == IN) {
	putchar('\n');
      }
      state = OUT;
    } else if (state == IN) {
	putchar(c);
    } else if (state == OUT) {
      putchar(c);
      state = IN;
    }
  }
}
