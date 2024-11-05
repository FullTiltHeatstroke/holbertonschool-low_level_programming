#include "main.h"


char *cap_string(char *s)
{
  
  int count = 0;
  char omit[14] = {' ', ',',';','.', '!','?','"','(',')','{','}','\t','\n','\0'};
  int countO = 0;
  int new_word = 1; 
  
  while (s[count] != '\0')
    {
      countO = 0; 
      while (countO < 14)
	{ 
	  if (s[count] == omit[countO])
	    {
	      s[count] = ' ';
	      new_word = 1; 
	      break; 
	    }
	  countO++;
	}
      if (new_word && s[count] >= 'a' && s [count] <= 'z')
	{
	  s[count] -= ('a' - 'A'); 
	}
	    if (s[count] != ' ')
	      {
		new_word = 0; 
	      }
      count++;
    }
  return(s); 
}
