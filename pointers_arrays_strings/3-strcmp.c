#include "main.h"





int _strcmp(char *s1, char *s2)
{

  int count1 = 0;
  int count2 = 0; 

  while (s1[count1] != '\0' && s2[count2] != '\0')
    {
      count1++;
      count2++;
    }
  if (s1[count1] == s2[count2])
    {
      return (0);
    }
  else
    {
      return (s1[count1] - s2[count2]);
    }
      
}
