#include "main.h"
#include <string.h>

void print_rev(char *s)
{

  int last = strlen(s) - 1;

  while (last >= 0)
    {
      _putchar(s[last]);
	last--; 
    }
  _putchar('\n'); 
}
