#include "main.h"


void print_diagonal(int n)
{
  int space = 0;
  int height = 0; 
  for (space = 0; space < n; space++)
    {
      for (height = 0; height < n; height++)
	{
	  if (space == height)
	    _putchar('\\');
	  else
	    _putchar(' '); 

	}
      _putchar('\n');
    }
}
