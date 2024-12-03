#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in 
 * a linked list. 
 * @h: pointer to the head of the list
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
  int count = 0;
 
  while(h != NULL)
    {
      count++;
      h = h->next;
    }
  return (count); 

}
