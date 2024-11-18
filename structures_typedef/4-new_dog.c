#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog;
  int len_owner = 0;
  int len_name = 0;
  int i , j = 0; 
  
  if (name == NULL || owner == NULL)
    return (NULL);

  while (name[len_name])
    len_name++;

  while (owner[len_owner])
    len_owner++;

  new_dog = malloc(sizeof(dog_t));
  if (new_dog == NULL)
    return (NULL);

  new_dog->name = malloc(len_name + 1);
  if (new_dog->name == NULL)
    {
      free (new_dog);
      return (NULL); 
    }

  new_dog->owner = malloc(len_owner + 1);
  if (new_dog->owner == NULL)
    {
      free (new_dog->name);
      free (new_dog);
      return(NULL); 
    }
  for (i = 0; i <= len_name; i++)
    new_dog->name[i] = name[i];

  for (j = 0; j <= len_owner; j++)
    new_dog->owner[j] = owner[j]; 

  new_dog->age = age;
  
  return (new_dog); 
}
