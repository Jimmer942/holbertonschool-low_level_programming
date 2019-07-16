#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - is a function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array.
 * @c: specific char to initializes.
 * Return: Returns NULL if size = 0,
 * Returns a pointer to the array, or NULL if it fails
 * Returns a pointer full witch c.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	void *p = NULL;
	char *ch;

	if (size != 0)
	{
		p = malloc(size * sizeof(char));
		if (p != NULL)
		{
			ch = (char *) p;
			for (i = 0; i < size; i++)
				ch[i] = c;
			return (ch);
		}
		else
		{
			return (p);
		}
	}
	else
	{
		return (p);
	}
}
