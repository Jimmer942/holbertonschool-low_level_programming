#include "holberton.h"
/**
 *_isalpha - prints 1 if its an alpha
 *@c: The character to say if is lower
 *Return: 0 if compilation is succesfully
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
