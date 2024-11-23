#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
  va_list args;
  unsigned int i;
  char *str;
  int separator = 0; 

  va_start(args, format);
  
  while(format != NULL && format[i] != '\0')
    {
      if (separator)
	{
	  printf(", "); 
	}
      switch(format[i])
	{
    case 'c':
	printf("%c", va_arg(args, int));
      break;
    case 'i':
      printf ("%d", va_arg(args, int));
      break;
    case 'f':
      printf ("%f", va_arg(args, double));
      break;
    case 's':
      str = va_arg(args, char *);
      if (str == NULL)
	{
	  printf("(nil)");
	  break; 
	}
      printf("%s", str);
      break;
      
    default:
      separator = 0;
      i++; 
      continue;
	}
      separator = 1;
      i++; 
    }
  printf("\n");
  va_end(args); 
}
