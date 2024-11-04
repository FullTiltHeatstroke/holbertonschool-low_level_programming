#include "main.h"

char *_strcat(char *dest, char *src)
{

  int count1 = 0;
  int count2 = 0;

  while (src[count1] != '\0')
    {
      count1++;

    }
  while (dest[count2] != '\0')
    {
      dest[count1] = src[count2];
      count1++;
      count2++; 
    }
  dest[count1] = '\0'; 

  return(dest);
}
