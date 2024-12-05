#include <stdlib.h>
#include "lists.h"

/**
 * add_dodeint_end - adds a new node at the end of the list.
 * @head: head of the list
 * @n: integer
 * Return: address of new node at the end of the list. NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

  dlistint_t new_node;

  new_node = malloc(sizeof(dlistint_t));

  if (new_node == NULL)
    {
      free(new_node); 
      return(NULL);
    }
  new_node-> n = n;
  new_node->next = NULL;
  new_node->prev = NULL;

  if (*head == NULL)
    {
      new_node->prev = NULL;
      *head = new_node;
      return(new_node); 
    }

  temp = *head;
  while(temp->next)
    temp = temp->next;

  temp->next = new_node;
  new_node->prev = temp;

  return(new_node); 
}
