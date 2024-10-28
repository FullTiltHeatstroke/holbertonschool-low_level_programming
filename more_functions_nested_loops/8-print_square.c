#include "main.h"

void print_square(int size)
{
  int row = 0;
  int i = 0;

  if(size > 0)
    {
  for (row = 1; row <= size; row++)
    {
      for (i = 1; i <= size; i++)
	_putchar('#');
      _putchar('\n'); 
    } 
} 
}
