#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - simple math operations 
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits program. 
 */
int main(int argc, char *argv[])
{
  int (*mainfun)(int, int);

  if (argc != 4)
    {
      printf("Error\n");
      exit(98); 
    }
  mainfun = get_op_func(argv[2]);
  if (mainfun == NULL)
    {
      printf("Error\n");
      exit(99); 
    }
  printf("%d\n", mainfun(atoi(argv[1]), atoi(argv[3]))); 

  return (0); 
}
