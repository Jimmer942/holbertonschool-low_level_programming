#include "holberton.h"
/**
 * _prime-Returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: given number.
 * @i: Counter.
 * @j: Counter for prime.
 * Return: _prime.
 */
int _prime(int n, int i, int j)
{
	if (n > 1)
	{
		if (i <= n)
		{
			if (n % i == 0)
				j++;
			i++;
			return (_prime(n, i, j));
		}
		if (j == 2)
			return (1);
	}
	return (0);
}

/**
 * is_prime_number - Returns if a number is prime.
 * @n: given number.
 * Return: _prime
 */
int is_prime_number(int n)
{
	return (_prime(n, 1, 0));
}
