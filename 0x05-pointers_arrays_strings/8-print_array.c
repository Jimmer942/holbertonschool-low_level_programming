#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers.
 * @a: The string to print
 * @n: is the number of elements of the array to be printed
 * Return: 0 if compilation is succesfully
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
