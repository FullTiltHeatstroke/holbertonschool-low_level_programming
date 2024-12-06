#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistin - Returns the sum of the list. 
 * @head: head of the list.
 * Return: Sum of all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
  int sum = 0;

  while (head)
    {
      sum += head->n;
      head = head->next;

    }
  return (sum); 
}
