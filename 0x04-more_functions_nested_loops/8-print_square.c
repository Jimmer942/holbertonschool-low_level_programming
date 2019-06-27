#include "holberton.h"
/**
 * print_square - prints a square of #
 * @size: size of the square
 * Return: 0 if compilation is succesfully
 */
void print_square(int size)
{

	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
