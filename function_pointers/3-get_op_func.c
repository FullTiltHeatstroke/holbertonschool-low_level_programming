#include <stdlib.h>
#include "3-calc.h"

/**
 * @s: operator passed to program
 * @i: Cycle through ops
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user. 
 * Return: a pointer to the function that correpsonds to the 
 * given operator.  
 */

int (*get_op_func(char *s))(int, int)
{
int i = 0; 
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

 while (i < 5)
   {
     if (*(ops[i]).op == *s && *(s + 1) == '\0')
       return (ops[i].f); 
   }
 return (NULL); 
}
