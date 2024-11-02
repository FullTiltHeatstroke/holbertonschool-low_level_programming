#include "main.h"
int _atoi(char *s)
{
  int num = 0;
  int i = 0; 

  while (s[i] != '\0')
    {
      i++;
      if (s[i] >= 48 && s[i] <= 57)
	{
	  num = num * 10 + (s[i] -48); 
	}
    } 
      
  return (num);
}
