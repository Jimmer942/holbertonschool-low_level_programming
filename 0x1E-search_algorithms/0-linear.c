#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: Array where to search.
 * @size: size of the array.
 * @value: value to find.
 * Return: First index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
