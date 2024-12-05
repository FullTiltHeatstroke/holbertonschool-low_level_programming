#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the list. 
 * @head: head of the list.
 * @index: index of the node. 
 *
 * Return: The nth node of the list. 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
 unsigned int count = 0;

  while (head)
    {
      if (index == count)
      break;
      count++;
      head = head->next; 
    }
  return(head); 
}
