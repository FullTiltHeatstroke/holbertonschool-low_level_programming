#include "main.h"





void more_numbers(void)
{
  int column = 0;
  int i = 0; 

  while (column <= 9)
    {
    while (i <= 14)
      {
	if (i > 9)
	  _putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
	i++; 
      }
    _putchar('\n');
    column++;
    i = 0; 
      }
}
