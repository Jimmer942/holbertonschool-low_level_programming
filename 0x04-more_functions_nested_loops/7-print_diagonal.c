#include "holberton.h"
/**
 * print_diagonal - prints a diagonal of spaces
 * @n: size of diagonal
 * Return: 0 if compilation is succesfully
 */
void print_diagonal(int n)
{

	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
