#include <stdio.h>
#define MAXLINE 50 /* maximum input line size */


int getline_my(char line[], int maxline);
void copy(char to[], char from[]);



/* print the logest input line */
int main()
{

  int len; /* currente line length */
  int max; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getline_my(line, MAXLINE)) > 0)
    {
    if (len > max)
      {
	max = len;
	copy(longest, line);
      }
    }

  if (max > 0)
    {
      printf("%s\n", longest);
      printf("%d\n", max);
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


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    {
      ++i;
    }
}
