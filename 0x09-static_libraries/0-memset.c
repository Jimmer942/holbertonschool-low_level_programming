#include "holberton.h"
/**
 * _memset - is a function that fills memory with a constant byte.
 * @s: of the memory area pointed to by s.
 * @b: constant that is going to fil in,
 * @n: fills the first n bytes.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
