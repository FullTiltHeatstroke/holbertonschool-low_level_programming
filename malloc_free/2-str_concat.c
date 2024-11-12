#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
  int lens1 = 0;
  int lens2 = 0;
  int i = 0;
  char *concat;

  if (s1 == NULL)
        s1 = "";
  if (s2 == NULL)
        s2 = "";

  while (s1[lens1])
        lens1++;
  while (s2[lens2])
        lens2++;
  concat = malloc(sizeof(char) * (lens1 + lens2 + 1));
  if (concat == NULL)
    return (NULL);

  for (i = 0; i < lens1; i++)
    concat[i] = s1[i];

  for (i = 0; i < lens2; i++)
        concat[lens1 + i] = s2[i];

  concat[lens1 + lens2] = '\0';
  return (concat);
}
