#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{

 unsigned int count = 0; 
  
  while (s[count] != '\0')
    {
      count++;
      if (count < n)
	{
      s[count] = b;
	}
    }
  return(s); 



}
