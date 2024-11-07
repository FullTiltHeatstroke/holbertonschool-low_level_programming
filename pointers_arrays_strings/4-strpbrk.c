#include "main.h"

char *_strpbrk(char *s, char *accept)
{

  int countA = 0;
  
  
  while (*s)
    {

      while (accept[countA] != '\0')
	{
	  if (*s == accept[countA])
	  return (s); 
	  countA++; 
	}
      countA = 0;
      s++; 
    }
  return ('\0'); 
}
