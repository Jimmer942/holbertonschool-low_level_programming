#include "holberton.h"
/**
 * _strcmp - is a function that compares two strings.
 * @s1: string to compare.
 * @s2: string to compare.
 * Return: n
 */

int _strcmp(char *s1, char *s2)
{
	int n = 1;
	int i = 0;

	while (n != 0 && s1[i] == '\0' && s2[i] == '\0');
	{
		n = s1[i] - s2[i];
		i++;
	}
	return (n);
}
