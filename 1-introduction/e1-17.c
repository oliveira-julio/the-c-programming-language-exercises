#include <stdio.h>
#define LONGLINE 80 /* minimum number of character to a line can be called 'long' */
#define MAXLINE 1000 /* maximum input line size */


int getline_my(char line[], int maxline);


/* print the logest input line */
int main()
{
  int len; /* currente line length */
  char line[MAXLINE]; /* current input line */
  
  while ((len = getline_my(line, MAXLINE)) > 0)
    {
    if (len > LONGLINE)
      {
	printf("%s", line);
      }
    }
  
  return 0;
}


/* getline: read a line into s, return length  */
int getline_my(char s[], int lim)
{
  int c, i;
  int lim_count = 0;

  for (i = 0; (c=getchar()) != EOF && c != '\n'; i++)
    {
      if (lim_count < lim)
	{
	  s[i] = c;
	  ++lim_count;
	}
    }
  if (c == '\n')
    {
      if (lim_count < lim)
	{
	  s[i] = c;
	  ++i;
	}
    }
  
  s[lim_count + 1] = '\0';
  return i;
}
