#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a node to the end of a linked list.  
 * @head: Double pointer to the head of the list. 
 * @str: string to be added to the new node. 
 * Return: Address of the new element or NULL if failed. 
 * 
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new_node, *current;
  int length = 0;

  new_node = malloc (sizeof(list_t));
  if (new_node == NULL)
    return (NULL);

  new_node->str = strdup(str);
  if (new_node->str == NULL)
    {
      free(new_node);
      return(NULL); 
    }

  while (str[length])
  length++;

  new_node->len = length;
  new_node->next = NULL;
  if (*head == NULL)
    {
      *head = new_node;
      return (new_node); 
    }
  current = *head;
  while (current->next != NULL)
    {
      current = current->next; 
    }
  current->next = new_node;
  return (new_node); 
}