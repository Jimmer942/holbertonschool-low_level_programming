#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints 1 if char is lowercase or o if not
 * @n: The character to say if is lower
 * Return: 0 if compilation is succesfully
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 97; n--)
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
	}
	else
	{

		for (; n < 99; n++)
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
		}
	}
}
