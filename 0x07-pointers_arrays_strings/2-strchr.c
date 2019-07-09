#include "holberton.h"
/**
 * _strchr - is a function that locates a character in a string.
 * @s: String to look.
 * @c: character to locate.
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
	int i, count = 0;
	char *p = (void *)0;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
		p = s;
		count++;
	}
	return (p + count);
}
