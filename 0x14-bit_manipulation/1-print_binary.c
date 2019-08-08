#include "holberton.h"
/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to convert.
 */
void print_binary(unsigned long int n)
{
	int i, a = 1, b, flag = 0;
	unsigned long int p;

	for (i = 0; i < 64; i++)
	{
		p = ((a << (63 - i)) & n);
		if (p >> (63 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (63 - i);
			_putchar(b + 48);
		}
	}
	if (n == 0)
		_putchar(48);
}
