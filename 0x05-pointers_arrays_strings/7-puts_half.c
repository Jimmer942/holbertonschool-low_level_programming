#include "holberton.h"
/**
 * puts_half - prints one char out of 2 of a string, followed by a new line.
 * @str: The string to print
 * Return: 0 if compilation is succesfully
 */
void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (count - 1) / 2; str[i] != '\0'; ++i)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
