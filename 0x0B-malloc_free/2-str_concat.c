#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - is a function that concatenates two strings.
 * space in memory, which contains a copy of the string given as a parameter.
 * @s1: string to concatenates.
 * @s2: string to concatenates.
 * Return: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0, length;
	void *p = NULL;
	char *ch;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	length = len1 + len2;
	p = malloc(length * sizeof(char));
	if (p != NULL)
	{
		ch = (char *) p;
		for (i = 0; i < len1; i++)
			ch[i] = s1[i];
		for (j = 0; j <= len2; i++, j++)
			ch[i] = s2[j];
		return (ch);
	}
	else
	{
		return (p);
	}
}
