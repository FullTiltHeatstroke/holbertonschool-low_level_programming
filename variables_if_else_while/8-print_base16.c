#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  int num;
  char af; 

  for (num = '0' ; num <= '9' ; num++)
    {
      putchar(num); 
    }
  for (af = 'a' ; af <= 'f' ; af ++)
    {
      putchar(af); 
    }
  putchar('\n');
  return (0);
}