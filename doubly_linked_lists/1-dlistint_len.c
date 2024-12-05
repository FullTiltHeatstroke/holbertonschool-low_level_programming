#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t - returns number of elements in a linked list. 
 * @h: head of the double linked list. 
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t nodes = 0;

  while(h)
    {
      h = h->next;
      nodes++;
    }
  return(nodes); 
}
