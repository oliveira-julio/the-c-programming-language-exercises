#include <stdio.h>

#define MAXLINE 1000
#define OK 0
#define END EOF


void reverse(char line[]);
int getline_my(char line[]);


int main()
{
  int status;
  char line[MAXLINE];

  while ((status = getline_my(line)) != END)
    {
      reverse(line);
      printf("%s\n", line);
    }
  return 0;
}
  

void reverse(char s[])
{
  int len = 0;
  int middle;
  char swap;
  

  /* length of 's' */
  while(s[len] != '\0')
    {
      ++len;
    }
  
  middle = len/2 -1;

  /* reverse 's' elements */
  for (int i = 0; i <= middle; i++)
    {
      swap = s[i];
      s[i] = s[(len-1)-i];
      s[(len-1)-i] = swap;
    }
}


int getline_my(char s[])
{
  int status;
  int c;
  int lim_count = 0;
  

  for (int i = 0; ((c = getchar()) != EOF) && c != '\n'; i++)
    {
      if (lim_count < MAXLINE)
	{
	  s[lim_count] = c;
	  lim_count++;
	}
    }

  s[lim_count] = '\0';

  if (c == EOF)
    {
      return END;
    }
  else 
    {
      return OK;
    }
}
