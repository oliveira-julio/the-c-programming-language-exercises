#include <stdio.h>


main () {
  int c, spaces;

  
  while ((c = getchar()) != EOF) {
    if (c == '\n' || '\t' || ' ') {
      spaces++;
    }
  }
  printf("%d\n", spaces);
}
