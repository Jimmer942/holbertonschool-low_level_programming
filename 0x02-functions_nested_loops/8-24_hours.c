#include "holberton.h"
/**
 *jack_bauer - prints 1 if its an alpha
 *Return: 0 if compilation is succesfully
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = j = k = l = 0;
	while (!(i == 2 && j == 4 && k == 0 && l == 0))
	{
		l++;
		if (l == 10)
		{
			k++;
			l = 0;
		}
		if (k == 6)
		{
			j++;
			k = l = 0;
		}
		if (j == 10)
		{
			i++;
			k = l = j = 0;
		}
		if (!(i == 2 && j == 4 && k == 0 && l == 0))
		{
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}

}
