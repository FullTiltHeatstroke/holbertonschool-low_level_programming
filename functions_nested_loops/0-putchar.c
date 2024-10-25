#include "main.h" 
/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
  char cool[10] = "_putchar";

  int a;

  for (a = 0; a < 8; a++)
    {
      _putchar(cool[a]);
      
    }
  _putchar(10); 
  
  return (0); 
} 
