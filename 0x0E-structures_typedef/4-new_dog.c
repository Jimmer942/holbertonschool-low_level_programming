#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nD;
	int ln = 0, lo = 0;
	int i;

	nD = malloc(sizeof(struct dog));
	if (nD == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		ln++;
	ln++;
	for (i = 0; owner[i] != '\0'; i++)
		lo++;
	lo++;
	nD->name = malloc(ln * sizeof(char));
	if (nD->name == NULL)
	{
		free(nD);
		return (NULL);
	}
	else
	{
		for (i = 0; i < ln; i++)
			*(nD->name + i) = *(name + i);
		nD->age = age;
		nD->owner = malloc(lo * sizeof(char));
		if (nD->owner == NULL)
		{
			free(nD->name);
			free(nD);
			return (NULL);
		}
		else
		{
			for (i = 0; i < lo; i++)
				*(nD->owner + i) = *(owner + i);
			return (nD);
		}
	}
}
