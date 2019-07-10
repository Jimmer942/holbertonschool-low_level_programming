#include "holberton.h"
/**
 * _pow_recursion -function that x raised to the power of y.
 * @x: base.
 * @y: power.
 * Return: _pow_recursion.
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			y--;
			return (x * _pow_recursion(x, y));
		}
	}
	else
	{
		return (-1);
	}
}
