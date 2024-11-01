#include "main.h"



void puts_half(char *str)
{
  int count = 0;
  int middle;
  int n; 

  while (str[count] == '\0')
    {
      count++; 

    }
  if (count % 2 == 0)
    {

      for (middle = count / 2; str(count) != '\0'; middle++)
	{

	  _putchar(str[middle]); 

	}

    } else if (count % 2)
    {

      for (n = (count - 1) / 2; n < count - 1; n++)
	{

	  _putchar(str[n + 1]); 

	}

    }
  _putchar('\n'); 

}
