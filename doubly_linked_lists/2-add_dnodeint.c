#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_t - adds a new node to the beginning of a doubly linked list.
 * @head: head of the double linked list.
 * @n: int
 * Return: address of the new element or null if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_node;
  
  new_node = malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    {
      free(new_node);
      return(NULL); 
    }
  new_node->n = n;
  new_node->prev = NULL;
  new_node->next = *head;

  if (*head)
    (*head)->prev = new_node;

  *head = new_node;

  return(new_node); 
}
