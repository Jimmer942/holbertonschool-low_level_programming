#include "holberton.h"
/**
 * _print_rev_recursion - is a function that prints a string in reverse.
 * @s: String to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
