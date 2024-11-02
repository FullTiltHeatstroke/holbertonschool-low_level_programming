#include "main.h"
int _atoi(char *s)
{
 unsigned int num = 0;
  int i = 0;
  int neg = 1; 

  while (s[i] != '\0')
    {
      if (s[i] >= '0' && s[i] <= '9')
	{
	  if (*s == '-')
	    {
	      neg *= -1; 
	    }
	  num = num * 10 + (s[i] -'0'); 
	}
      i++; 
    } 
      
  return (num *neg);
}
