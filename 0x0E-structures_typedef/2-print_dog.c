#include "dog.h"
#include <stdio.h>
/**
 * print_dog - is a function that prints a struct dog.
 * @d: variable of type dog
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		if ((*d).owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
	else
	{
		return;
	}
}
