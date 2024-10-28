#include "main.h"


void print_diagonal(int n)
{
  int vert = 0;
  int hor = 0;

if (n > 0)
{   
  for (vert = 0; vert < n; vert++)
    {
      for (hor = 0; hor < n; hor++)
	{
	  if ( vert == hor)
	    _putchar('\\');
	  else if (vert > hor)
	    _putchar(' ');
	  
	}
      _putchar('\n');
    }
}  
  else
    _putchar('\n');
  
}
