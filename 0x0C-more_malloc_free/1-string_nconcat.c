#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - is a function that concatenates two strings.
 * space in memory, which contains a copy of the string given as a parameter.
 * @s1: string to concatenates.
 * @s2: string to concatenates.
 * @n: bytes to concatenates.
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0, length;
	void *p = NULL;
	char *ch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	length = len1 + n + 1;
	p = malloc(length * sizeof(char));
	if (p != NULL)
	{
		ch = (char *) p;
		for (i = 0; i < len1; i++)
			ch[i] = s1[i];
		for (j = 0; j <= n; i++, j++)
			ch[i] = s2[j];
		return (ch);
	}
	else
	{
		return (p);
	}
}
