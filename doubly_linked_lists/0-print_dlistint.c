#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list. 
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t nodes = 0;

  while (h)
    {
      printf("%d\n", h->n);
      h = h->next; 
      nodes++; 

    }
  return(nodes); 
}
