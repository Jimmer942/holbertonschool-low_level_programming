#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - is a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy.
 * Return:  a pointer to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc, and can be freed.
 * Returns NULL if str = NULL.
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	void *p = NULL;
	char *ch;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	p = malloc(len * sizeof(char));
	if (p != NULL)
	{
		ch = (char *) p;
		for (i = 0; i < len; i++)
			ch[i] = str[i];
		return (ch);
	}
	else
	{
		return (p);
	}
}
