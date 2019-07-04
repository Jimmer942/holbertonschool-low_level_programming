#include "holberton.h"
/**
 * _strncpy - a function that copies a string.
 * @n: limit of concatenation.
 * @dest: Array that is going to contain the concatenation.
 * @src: array to contatenates.
 * Return: dest the concatenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;
	for (j = 0; (j < n && dest[j] != '\0'); j++)
	{
		dest[j] = src[j];
	}
	for (j = len; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
