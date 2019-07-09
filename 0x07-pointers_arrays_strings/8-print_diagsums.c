#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @size: size of the square matrix.
 * @a: the integers of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, j, d1, d2, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				d1 = j * (size + 1);
				d2 = (j + 1) * (size - 1);
				diag1 = diag1 + *(a + d1);
				diag2 = diag2 + *(a + d2);
			}
		}
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
