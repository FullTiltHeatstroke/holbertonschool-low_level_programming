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

  new_node = malloc(sizeof(dlistint_t));
  if(new_node == NULL)
    return(NULL);
  
  new_node->n = n;
  new_node->next = NULL;
  new_node->prev = NULL;

  if (idx == 0)
    {
    new_node->next = *h;
    if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }
  
  while (temp && i < idx - 1)
    {
    temp = temp->next;
    i++; 
    }
  
  if (!temp)
    {
      free(new_node);
      return(NULL); 
    }
  
  new_node->next = temp->next; 
  if (temp->next)
      temp->next->prev = new_node;
  temp->next = new_node;
  new_node->prev = temp; 

  return(new_node);  
}
