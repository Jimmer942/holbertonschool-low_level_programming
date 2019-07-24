#include <stdlib.h>
/**
 * array_iterator - is a function that executes a function given as
 * a parameter on each element of an array.
 * @array: array to print.
 * @size: size of the array.
 * @action: Function that calls an array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
