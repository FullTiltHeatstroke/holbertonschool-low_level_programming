#include "main.h"
int _atoi(char *s)
{
 unsigned int num = 0;
  int i = 0;
  int neg = 1;
  int stop = 0; 

  while (s[i] != '\0')
    {
      if (s[i] == '-')
	{
	  if (!stop)
	    {
	      neg *= -1;
	    }
	}
	  else if ( s[i] >= '0' && s[i] <= '9')
	    {
	  num = num * 10 + (s[i] -'0');
	  stop = 1;
	    }
	  else if(stop)
	    {
	      break;
	    }
      i++; 
    } 
      
  return (num *neg);
}
