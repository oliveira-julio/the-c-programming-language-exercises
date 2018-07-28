#include <stdio.h>

/* states of cursor */
#define IN 1
#define OUT 0

#define MAX_WORD_LENGTH 30


/* print a horizontal histogram of many words have the same size.
 * note: words have a max length
*/
main () {
  int c; /* cursor */
  int word_length = 0; /* count of word length */
  int state = OUT; /* init state of cursor */

  
  /* each element represent how many words with a size n the input have.
     first element(0) = size 1,
     second element(1) = size 2,
     ...
     n element(n-1) = size n
   */
  int histogram[MAX_WORD_LENGTH];

  
  /* init each element with 0 */
  for (int i = 0; i < MAX_WORD_LENGTH; i++) {
    histogram[i] = 0;
  }



  /* receive the input, and counts how many words have the same size  */
  while ((c = getchar()) != EOF) {

    /* blanks chars, not counted */
    if (c == '\t' || c == ' ' || c == '\n') 
    {
      /* end of word, add 1 to size in histogram */ 
      if (state == IN)
      {
	if (word_length <= MAX_WORD_LENGTH) {
	  histogram[word_length -1] = histogram[word_length -1] + 1;
	}
	word_length = 0;
      }
      state = OUT;  
    }
    else /* add 1 to size of a word  */
    { 
      state = IN;
      word_length++;
    }
  }

  /* print the histogram */
  for (int element = 0; element < MAX_WORD_LENGTH; element++)
  {
    /* print the leftbar and '=' length times  */
    printf("%3d |", element+1);
    for (int length = 1; length <= histogram[element]; length++)
    {
      printf("=");
    }
    printf("\n");
  }
}
