#include "main.h"
#include <stdlib.h>
/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
    int **array;
    int i = 0;
    int j = 0;

    if (width <= 0 || height <= 0)
        return NULL;

    array = malloc(sizeof(int *) * height);
    if (array == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (array[i] == NULL)
        {
            while (i > 0)
                free(array[--i]);
            free(array);
            return NULL;
        }

 
        for (j = 0; j < width; j++)
            array[i][j] = 0;
    }

    return array;
}
