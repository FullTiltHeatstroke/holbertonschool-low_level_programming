#include "main.h"

void print_triangle(int size)
{
    int x, y;

    if (size <= 0) {
        _putchar('\n');
    }

    for (x = 0; x < size; x++)
    {
     
        for (y = 0; y < size - x - 1; y++)
        {
            _putchar(' ');
        }

        for (y = 0; y <= x; y++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}

