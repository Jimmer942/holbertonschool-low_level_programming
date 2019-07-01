#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: Pointer to swap
 * @b: Pointer to swap
 * Return: 0 if compilation is succesfully
 */
void swap_int(int *a, int *b)
{
	int c = 1;

	c = *a;
	*a = *b;
	*b = c;
}
