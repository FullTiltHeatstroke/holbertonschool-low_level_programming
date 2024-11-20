#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h" 

/**
 * @a: First integer
 * @b: Second integer
 * op_add - Sum of a and b
 * op_sub - Difference of a and b
 * op_mul - Product of a and b
 * op_div - Divison of and b
 * op_mod - Remainder of division of a and b
 *
 */
int op_add(int a, int b)
{
return (a + b); 
}
int op_sub(int a, int b)
{
return (a - b); 
}
int op_mul(int a, int b)
{
return (a * b); 
}
int op_div(int a, int b)
{
return (a / b);
if (b == 0 || a == 0)
  {
    printf("Error\n");
    exit(100); 

  }
}
int op_mod(int a, int b)
{
return (a % b);
if (b == 0 || a == 0)
  {
    printf("Error\n");
    exit (100); 
  }
}
