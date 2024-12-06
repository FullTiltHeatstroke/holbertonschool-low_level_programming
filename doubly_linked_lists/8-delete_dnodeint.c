#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a specified index.
 * @h: The double pointer to the head of the list.
 * @index: The index of the node to delete.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
    dlistint_t *temp = *h;
    unsigned int i = 0;

    if (!h || !(*h))
        return (-1);

    while (temp && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (!temp) 
        return (-1);

    if (temp->prev)
        temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;

    if (index == 0)
      *h = temp->next;

    free(temp);
    return (1);
}
