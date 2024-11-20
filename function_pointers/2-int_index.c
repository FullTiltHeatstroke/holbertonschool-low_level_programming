#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int in an array. 
 * @array: array of integers.
 * @size: Array size.
 * @cmp: Pointer to comparison function.
 *
 * Return: returns the index of first match or -1
 * if no match or size <= 0. 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i = 0; 
  
  if (cmp == NULL || array == NULL || size <= 0)
    return (-1);

  for (i = 0; i < size; i++)
    {
      if (cmp(array[i]))
	  return(i);
    }
  if (i == size)
    return (-1); 

  return (-1); 

}
