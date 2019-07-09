#include "holberton.h"
/**
 * _strchr - is a function that locates a character in a string.
 * @s: String to look.
 * @c: character to locate.
 * Return: dest.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p = (void *)0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
        return (p);
}
