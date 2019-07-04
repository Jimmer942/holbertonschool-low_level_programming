#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: String to uppercase..
 * Return: s on uppercase.
 */
char *cap_string(char *s)
{
	char pr[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i, j;

	if (s[0] > 96 && s[0] < 123)
	{
		s[0] = s[0] - 32;
	}
	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; pr[j] != '\0'; j++)
		{
			if (s[i] == pr[j])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
