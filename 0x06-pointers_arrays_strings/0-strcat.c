#include "holberton.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: Array that is going to contain the concatenation.
 * @src: array to contatenates.
 * Return: dest the concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (j = 0; dest[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len + 1] = '\0';
	return (dest);
}
