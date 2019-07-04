#include "holberton.h"
/**
 * reverse_array - that reverses a string.
 * @a: The array to reverse
 * @n: Size of the array.
 * Return: 0 if compilation is succesfully
 */
void reverse_array(int *a, int n)
{
	int i, j, aux;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
	}
}
