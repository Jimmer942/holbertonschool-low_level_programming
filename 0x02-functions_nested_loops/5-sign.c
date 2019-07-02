#include "holberton.h"
/**
 *print_sign - prints 1 if its an alpha
 *@n: The number that says if it it negtive or positive
 *Return: 0 if compilation is succesfully
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
