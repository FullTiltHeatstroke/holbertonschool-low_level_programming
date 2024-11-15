#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
 unsigned int len1 = 0;
 unsigned int len2 = 0;
 unsigned int i = 0;
 unsigned int j = 0;
  char *new_str; 

  while (s1[len1])
    len1++;
  while (s2[len2])
    len2++;
  if(n > len2)
    n = len2;

  new_str = malloc(len1 + n + 1);

    for (i = 0; i < len1; i++)
      {
      new_str[i] = s1[i];
      }
  for (j =0; j < len2; j++)
    {
    new_str[i + j] = s2[j];
    }
  new_str[i+j] = '\0'; 

    return (new_str); 
    
    



}
