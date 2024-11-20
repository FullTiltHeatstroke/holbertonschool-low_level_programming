#include <stdlib.h>

/**
 * @s: operator passed to program
 * @i: Cycle through ops
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user. 
 * 
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




   }
 return (NULL); 
}
