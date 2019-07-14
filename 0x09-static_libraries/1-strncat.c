#include "holberton.h"
/**
 * _strncat - function that concatenates two strings until n.
 * @n: limit of concatenation.
 * @dest: Array that is going to contain the concatenation.
 * @src: array to contatenates.
 * Return: dest the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (j = 0; (j < n && dest[j] != '\0'); j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';
	return (dest);
}
