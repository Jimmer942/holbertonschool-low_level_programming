#include "holberton.h"
/**
 * _isupper - prints 1 if char is uppercase or 0 if not
 * @c: The character to say if is upper
 * Return: 0 if compilation is succesfully
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
