#include "holberton.h"
/**
 * _strcmp - is a function that compares two strings.
 * @s1: string to compare.
 * @s2: string to compare.
 * Return: n
 */

int _strcmp(char *s1, char *s2)
{
	int n;
	int i = 0;

	do {
		n = s1[i] - s2[i];
		i++;
	} while (n == 0 && s1[i] != '\0' && s2[i] != '\0');
	return (n);
}
