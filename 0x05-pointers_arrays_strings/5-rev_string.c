#include "holberton.h"
/**
 * rev_string - that reverses a string.
 * @s: The string to reverse
 * Return: 0 if compilation is succesfully
 */
void rev_string(char *s)
{
	int i;
	int j;
	int count = 0;

	char aux;

	for (i = 0; s[i] != '\0'; ++i)
	{
		count++;
	}
	for (i = 0, j = count - 1; i < count / 2; i++, j--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
}
