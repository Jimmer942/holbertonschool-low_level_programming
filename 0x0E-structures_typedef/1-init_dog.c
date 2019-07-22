#include "dog.h"
/**
 * init_dog - is a function that initialize a variable of type struct dog.
 * @d: adress of the structure dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return - if it fails
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
	else
	{
		return;
	}
}
