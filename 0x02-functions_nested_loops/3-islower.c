#include "holberton.h"
/**
 * _islower - prints 1 if char is lowercase or o if not
 * @c: The character to say if is lower
 * Return: 0 if compilation is succesfully
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
		return (0);
}
