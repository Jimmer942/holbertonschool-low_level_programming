#include "holberton.h"
/**
 * _memcpy - is a function that copies memory area.
 * @src:  memory area to be copy.
 * @dest: memory area where the memory is copy.
 * @n: copy the first n bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
