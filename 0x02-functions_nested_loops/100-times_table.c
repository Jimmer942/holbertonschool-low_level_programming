#include "holberton.h"
/**
 * print_times_table -  a function that prints the n times table.
 * @n: a numbers of nubers
 * Return: 0 if compilation is succesfully
 */
void print_times_table(int n)
{ int i, j, m, d, u, c;

if (n <= 15 && n >= 0)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{ m = i * j;
			if (m > 99)
			{ _putchar(',');
				_putchar(' ');
				c = m / 100;
				d = m / 10;
				d = d % 10;
				u = m % 10;
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar(u + '0'); } else
			{
				if (j != 0)
				{
					if (m > 9)
					{ _putchar(',');
						_putchar(' ');
						_putchar(' ');
					} else
					{ _putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' '); }
					if (m > 9)
						{d = m / 10;
						u = m % 10;
						_putchar(d + '0');
						_putchar(u + '0'); }
					else
						{ _putchar(m + '0'); }
					} else
					{ _putchar('0'); }
				}
		} _putchar('\n'); } } }
