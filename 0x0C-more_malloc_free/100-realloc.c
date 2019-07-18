#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:  is a pointer to the memory allocated with a call to:malloc(old_size).
 * @old_size:  is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: The content of the new pointer will be copied to the newly allocated
 * space, in the range from the start of ptr up to
 * the minimum of the old and new sizes
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;
	int range, i;
	char *cp, *cptr;

	if (new_size > old_size)
	{
		range = old_size;
	}
	else
	{
		range = new_size;
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	p = malloc(new_size);
	if (p != NULL)
	{
		cp = (char *)p;
		cptr = (char *)ptr;
		for (i = 0; i < range; i++)
			cp[i] = cptr[i];
		free(cptr);
		return (cp);
	}
	else
	{
		free(p);
		return (NULL);
	}
}
