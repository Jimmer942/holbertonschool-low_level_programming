
#include "holberton.h"
/**
 * print_line - prints a straigth line
 * @n: size of the line
 * Return: 0 if compilation is succesfully
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
