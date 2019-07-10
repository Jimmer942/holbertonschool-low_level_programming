#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: String to print.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
