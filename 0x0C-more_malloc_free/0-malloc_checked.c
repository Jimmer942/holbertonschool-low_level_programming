#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - is a function that allocates memory using malloc.
 * @b: size of the pointer.
 * Return: a pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
