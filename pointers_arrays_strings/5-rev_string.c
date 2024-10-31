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
      hold = s[beg]; //store starting character
      s[beg] = s[last]; //the beginning and last will equal the same when beg < last
      s[last] = hold; //last character is held, then the loop repeats and becomes the beginning. 
      beg++; // moves towards the centre from the left. 
      last--; // moves towards the centre from the right. 
      
    }
}
