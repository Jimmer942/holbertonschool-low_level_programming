#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is a a function that frees dogs.
 * @d: dog structure
 * Return: a pointer.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
