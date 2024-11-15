#include "main.h"
#include <stdlib.h>
/**
 *  
 * 
 *
 * Return: new_calloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
 char *callnew;
 unsigned int i; 

  if (nmemb == 0 || size == 0)
    return (NULL);

  callnew = malloc(nmemb * size);
  if (callnew == NULL)
    return (NULL); 

  for (i = 0; i < nmemb * size; i++)
    callnew[i] = 0;
  
  return (callnew); 
}
