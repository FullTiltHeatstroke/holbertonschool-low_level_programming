#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

  int count = 0; 

  while (count < n && src[count])
    {
      dest[count] = src[count]; 
 count++;
    }
  while (count < n)
    {

      dest[count] = '\0';
      count++; 
    }

  
  return(dest); 

}
