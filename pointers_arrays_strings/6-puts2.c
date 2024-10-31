#include "main.h"



void puts2(char *str)
{
  int length = 0;
  int num; 

  while (str[length] != '\0')
    {
      length++;
      num = str[length] - '0';

      if (num % 2 == 0)
	{
	  _putchar(str[length]); 
	}
      else
	{
	}
    }
  _putchar('\n'); 
}
