#include <stdio.h>

#define MAXLINE 1000 /* maximum size of input line */
#define BLANK 0
#define NOBLANK 1
#define END 2


int getline_my(char line[], int max);

int main()
{
  int state;
  char line[MAXLINE];

  while((state = getline_my(line, MAXLINE)) != END)
    {
      if (state == NOBLANK)
	{
	  printf("%s\n", line);
	}
    }
  return 0;
}


int getline_my(char s[], int max)
{
  int c;
  int i;
  int no_blank_char = 0;
  
  for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
      if (c != ' ' && c != '\t')
	{
	  s[no_blank_char] = c;
	  ++no_blank_char;
	}
    }
  s[no_blank_char] = '\0';

  if (c == '\n' && no_blank_char == 0)
    {
      return BLANK;
    }
  else if (no_blank_char != 0)
    {
      return NOBLANK;
    }
  else
    {
      return END;
    }
}
