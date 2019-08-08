#include "holberton.h"
/**
 * set_b - function that sets the value of a bit to 1 at a given index.
 * @n: Number to convert.
 * @index:  is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int set_b(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 64)
		return (-1);
	*n = a << index | *n;
	return (1);
}
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Number to convert.
 * @index:  is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - 1;
	unsigned int i;

	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
	{
		a = a << 1;
		set_b(&a, 0);
	}
	*n = a & *n;
	return (1);
}
