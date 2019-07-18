#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - is a function that creates an array of integers.
 * @min: Begin of the array.
 * @max: Ends of the array.
 * Return: Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	int range, i;
	void *p = NULL;

	if (min > max)
		return (NULL);
	range = max - min + 2;
	p = malloc(range * sizeof(int));
	if (p != NULL)
	{
		ar = (int *) p;
		for (i = 0; i <= max; i++)
			ar[i] = i;
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
