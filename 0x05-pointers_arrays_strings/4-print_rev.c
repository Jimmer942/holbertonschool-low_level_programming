#include "holberton.h"
/**
 * print_rev - prints a string, followed by a new line reverse, to stdout .
 * @s: The string to print reverse
 * Return: 0 if compilation is succesfully
 */
void print_rev(char *s)
{
	int i;
	int j;

	int count = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		count++;
	}
	for (j = count; j > 0; --j)
	{
		_putchar(s[j - 1]);
	}
	_putchar('\n');
}
