#include "holberton.h"
/**
 * string_toupper - that reverses a string.
 * @s: String to uppercase.
 * Return: s on uppercase.
 */
char *string_toupper(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
