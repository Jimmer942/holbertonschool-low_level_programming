#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int a;
Here:
	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
		{
			a = array[i];
			array[i] = array[i + 1];
			array[i + 1] = a;
			print_array(array, size);
			i = 0;
			goto Here;
		}
}
