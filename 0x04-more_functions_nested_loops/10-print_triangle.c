#include "holberton.h"

/**
 * print_triangle - print a triangule to the rigth
 * @size:  size of triangle
 *
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size  - i - 1; j++)
			_putchar(' ');
		for (k = size - i; k <= size; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
