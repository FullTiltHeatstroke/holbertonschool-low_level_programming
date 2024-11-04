#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
  int countD = 0;
  int countS = 0;

  while (dest[countD] != '\0')
    {
      countD++;
    }

  while (src[countS] != '\0' && countS < n )
    {
      dest[countD] = src[countS];
      countD++;
      countS++;
    }
  dest[countD] = '\0'; 
    return (dest); 
    }
