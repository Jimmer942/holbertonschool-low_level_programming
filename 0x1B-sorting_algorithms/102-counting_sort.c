#include "sort.h"
#include <stdlib.h>
/**
 * counting_sort - implementation of counting sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t i, k;
	int j, max = 0;
	int *aux = NULL, *count = NULL;

	if (array == NULL || size < 2)
		return;
	aux = malloc((size + 1) * sizeof(int));
	if (aux == NULL)
		return;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];
	count = malloc((max + 1) * sizeof(int));
	if (count == NULL)
	{
		free(aux);
		return;
	}

	for (i = 0; i < size; i++)
		count[array[i]]++;

	for (j = 1; j <= max; j++)
		count[j] += count[j - 1];
	print_array(count, max + 1);

	for (i = 1; i < size; i++)
	{
		aux[count[array[i]]] = array[i];
		count[array[i]]--;
	}
	for (i = 0, k = 1; i < size; i++, k++)
		array[i] = aux[k];
	free(count);
	free(aux);
}
