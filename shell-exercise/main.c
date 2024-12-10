#include <stdio.h>

/**
 * main - print all arguments of av. 
 * @ac: number of items in av.
 * @av: NULL terminated array of strings.
 * Return: Always 0.
 */
 int main(int ac, char **av)
 {
   int i = 0;
   while (av != NULL)
     {
       printf("%s\n", av[i]);
	 i++; 
     }
   return (0); 

}
