#include "holberton.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Number to convert.
 * @index:  is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);
	*n = a << index | *n;
	return (1);
}
