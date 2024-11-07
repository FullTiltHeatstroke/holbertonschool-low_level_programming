#include "main.h"

char *_strstr(char *haystack, char *needle)
{
  int countN = 0;
  int countH = 0;

  while (haystack[countH] != '\0')
    {
      countN = 0;
      while (needle[countN] != '\0')
	{
	  if(haystack[countH + countN] != needle[countN])
	    {
	      break; 
	    }
	  countN++;
	}
	  if (needle[countN] == '\0')
	    {
	      return (haystack + countH); 
	    } 
	  countH++; 
    }
  return ('\0'); 
}
