#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc, e, q;

	e = 'e';
	q = 'q';

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != e && abc != q)
			putchar(abc);
	}
	putchar('\n');

	return (0);
}
