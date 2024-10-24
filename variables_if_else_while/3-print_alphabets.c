#include <stdio.h>
#include <stdlib.h> 
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
  char abc; 
  for (abc = 'a' ; abc <= 'z'; abc++) {
    putchar(abc); 
  }
  for (abc = 'A' ; abc <= 'Z' ; abc++) {
    putchar(abc);
  }
putchar('\n'); 
  
  return (0); 
}
