#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to print
 * Return: 0 if compilation is succesfully
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
