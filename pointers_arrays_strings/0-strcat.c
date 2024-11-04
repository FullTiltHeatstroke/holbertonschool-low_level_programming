#include "main.h"

char *_strcat(char *dest, char *src)
{

  int countS = 0;
  int countD = 0;

  while (dest[countD] != '\0')
    {
      countD++;

    }
  while (src[countS] != '\0')
    {
      dest[countD] = src[countS];
      countS++;
      countD++; 
    }
  dest[countD] = '\0'; 

  return(dest);
}
