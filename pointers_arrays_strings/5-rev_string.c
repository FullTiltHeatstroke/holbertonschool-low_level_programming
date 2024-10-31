#include "main.h"


void rev_string(char *s)
{ 

  int length = 0;
  int last; 
  int beg = 0;  
  int hold; 

  while (s[length] != '\0')
  {
    length++; 
  }
  last = length - 1;

  while (beg < last)
    {
      hold = s[beg];
      s[beg] = s[last];
      s[last] = hold;
      beg++;
      last--; 
      
    }
}
