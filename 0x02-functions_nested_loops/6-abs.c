#include "holberton.h"
/**
 *_abs - prints 1 if its an alpha
 *@n: The number that says if it it negtive or positive
 *Return: 0 if compilation is succesfully
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
