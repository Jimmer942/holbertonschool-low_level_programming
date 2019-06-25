#include "holberton.h"
/**
 *print_last_digit - a function that prints the last digit of a number.
 *@n: The number
 *Return: 0 if compilation is succesfully
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = n * (-1);
		m = n % 10;
		m = m + '0';
	}
	m = n % 10;
	m = m + '0';
	_putchar(m);
	return (n % 10);
}
