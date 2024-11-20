#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 
 *
 * 
 */
int main(int argc, char *argv[])
{
  int (*main_fun)(int, int);

  if (argc != 4)
    {
      printf("Error\n");
      exit(98); 
    }
  main_fun = get_op_func(argv[2]);
  if (main_func == NULL)
    {
      printf("Error\n");
      exit(99); 
    }
  printf("%d\n", main_fun(atoi(argv[1]), atoi(argv[3]))); 

  return (0); 
}
