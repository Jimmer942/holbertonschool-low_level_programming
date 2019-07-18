#include <stdlib.h>
#include "holberton.h"
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
