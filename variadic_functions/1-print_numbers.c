#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h> 

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list args;
  unsigned int i;
  int x; 

  va_start(args, n);

  for (i = 0; i < n; i++)
    {
      if (i > 0 && separator != NULL)
	{
	  printf("%s", separator); 
	}
      x = va_arg(args, int);
      printf("%d", x); 
    }
  va_end(args);
  printf("\n"); 

}
