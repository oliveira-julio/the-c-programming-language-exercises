#include <stdio.h>

#define TAB '\t'
#define BACKSLASH '\\'
#define BACKSPACE '\b'


main () {
  int c;

  while ((c = getchar()) != EOF) {

    if (c == TAB) {
      putchar('\\');
      putchar('t');
    } else if (c == BACKSPACE) {
      putchar('\\');
      putchar('b');
    } else if (c == BACKSLASH) {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}
