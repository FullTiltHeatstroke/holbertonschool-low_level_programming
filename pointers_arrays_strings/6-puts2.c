#include "main.h"



void puts2(char *str)
{
  int index = 0;
  int length = 0;

  while (str[length] != '\0')
    {
      length++;

      while (index < length)
	{
	  index += 2; 
	  _putchar(str[index]);
	   
	}
     
    }
  _putchar('\n'); 
}
