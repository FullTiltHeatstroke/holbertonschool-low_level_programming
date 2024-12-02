#include "lists.h"
#include <stdio.h> 

/**
 * print_list - prints a linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in list 
 */
size_t print_list(const list_t *h)
{
  int nodes = 0;
  
  while (h != NULL)
    {
      if (h-> str == NULL)
	{
	  printf("[0] (nil)\n");
	  h = h ->next; 
	}
      else
	{
	  printf("[%d] %s\n", h->len, h->str);
	  h = h -> next; 
	}
      nodes++;
	}
  return (nodes);
}
