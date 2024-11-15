#include "main.h"
#include <stdlib.h>
/**
 * 
 * Return: pointer to created array. 
 */
int *array_range(int min, int max)
{
  int *array;
  unsigned int i; 

  if (min > max)
    return (NULL);

  array = malloc((max - min + 1) * sizeof(int)); 
  if (array == NULL)
    return (NULL);

  for (i = 0; min <= max; i++, min++)
    array[i] = min; 
    
      return (array); 
}
