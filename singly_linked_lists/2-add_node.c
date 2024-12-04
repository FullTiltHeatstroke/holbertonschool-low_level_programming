#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node to the start of a linked list
 * @str: New node containing str
 * @head: pointer to the pointer of the first node. 
 * Return: A pointer to the new head of list. NULL on failure.  
 */
list_t *add_node(list_t **head, const char *str)
{
  list_t *first;
  int length = 0; 
  
  first = malloc (sizeof(list_t)); 
  if (first == NULL)
    return (NULL);

  first->str = strdup(str);
  if (first->str == NULL)
    {
    free (first);
  return NULL;
    }

  while (str[length])
    length++;

  first->len = length;
  first->next = *head; 

  *head = first;
  return (first); 
  
}
