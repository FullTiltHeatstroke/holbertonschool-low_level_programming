#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list args;
  unsigned int i;
  char *x; 

  va_start(args, n); 

  for (i = 0; i < n; i++)
    {
      if ( i > 0 && separator != NULL)
	{
	  printf("%s", separator); 
	}
      x = va_arg(args, char *);
      if (x == NULL)
	printf("(nil)");
      else
	{
	  printf("%s", x); 
	}
    }
  printf("\n");
  va_end(args); 
}
