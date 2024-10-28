#include "main.h"

void print_square(int size)
{
  int row = 0;
  int i = 0;

  for (row = 1; row <= size; row++)
    {
      _putchar('\n');
      for (i = 1; i <= size; i++)
	_putchar('#'); 	
    }
}
