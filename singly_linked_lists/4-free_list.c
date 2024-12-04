#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Free all elements in a linked list
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
  list_t *current = head;
  list_t *temp;

  while (current != NULL)
    {
      temp = current->next;
      free(current->str);
      free(current);
      current = temp; 
    }


}
