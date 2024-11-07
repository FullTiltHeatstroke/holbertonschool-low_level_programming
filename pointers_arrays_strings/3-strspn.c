#include "main.h"


unsigned int _strspn(char *s, char *accept)
{

  int countS = 0;
  int countA = 0;
  unsigned int countR = 0; 

  while (s[countS] != ' ' && s[countS] != '\0')
    {
      while (accept[countA] != '\0')
      {
	if (s[countS] == accept[countA])
	  {
	    countR++;
	    break;
	  }
	countA++;; 
      }
      countS++;
      countA = 0; 
}
return (countA); 
}
