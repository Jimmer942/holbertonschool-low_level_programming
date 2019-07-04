#include "holberton.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: String to code.
 * Return: s on uppercase.
 */
char *leet(char *s)
{
	char low[6] = {'a', 'e', 'o', 't', 'l'};
	char upp[6] = {'A', 'E', 'O', 'T', 'L'};
	char rep[6] = {52, 51, 48, 55, 49};
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; low[j] != '\0'; j++)
		{
			if (s[i] == low[j] || s[i] == upp[j])
			{
				s[i] = rep[j];
			}
		}
	}
	return (s);
}
