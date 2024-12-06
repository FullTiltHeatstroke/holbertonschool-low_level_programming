#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at the given index idx.
 * @idx: given index
 * @n: data to add to new node. 
 * @h: double pointer to the head of the list.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *new_node = NULL, *temp = NULL;
  unsigned int i = 0; 

  if (h == NULL)
    return (NULL);

  new_node = malloc(sizeof(dlistint_t));
  if(new_node == NULL)
    return(NULL);
  
  new_node->n = n;
  new_node->next = NULL;
  new_node->prev = NULL;

  if (idx == 0)
    return(add_dnodeint(h, n));

  while (temp && i < idx - 1)
    {
    temp = temp->next;
    i++; 
    }
  if (temp == NULL ||(!temp->next && i + 1 !=idx))
    {
      free(new_node);
      return(NULL); 
    }
  if(!temp->next)
    return(add_dnodeint_end(h, n));

  if(temp->next)
      temp->next->prev = new_node;
  temp->next = new_node;

  return(new_node);  
}
