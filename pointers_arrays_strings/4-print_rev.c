#include "main.h"

int _strlen(char *s)
{

  int length = 0;

  while (s[length] != '\0')

    {
      length++; 
    }
  return (length); 

}

void print_rev(char *s)
{

  int last = _strlen(s) - 1;

  while (last >= 0)
    {
      _putchar(s[last]);
	last--; 
    }
  _putchar('\n'); 
}

