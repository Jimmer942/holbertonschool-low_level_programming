#include "holberton.h"
/**
 *print_last_digit - a function that prints the last digit of a number.
 *@n: The number
 *Return: 0 if compilation is succesfully
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * (-1);
	}
	else
	{
		n = n;
	}
	_putchar(n + '0');
	return (n % 10);
}
