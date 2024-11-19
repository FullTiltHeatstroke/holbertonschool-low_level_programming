#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

 unsigned int i = 0;
  if (array == NULL || action == NULL)
    return;

  for (i = 0; i < size; i++)
    action(array[i]); 
}
