#include "holberton.h"
/**
 * flip_bits - Function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: Number to flip.
 * @m: number to compare.
 * Return: the value of the bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, count = 0, a = 1, aux0, aux1;

	for (i = 0; i < 64; i++)
	{
		aux0 = a & n;
		aux1 = a & m;
		a = a << 1;
		if (aux0 != aux1)
			count++;
	}
	return (count);
}
