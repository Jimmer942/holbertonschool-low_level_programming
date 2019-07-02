#include "holberton.h"
/**
 * more_numbers - 0 to 14
 * Return: 0 if compilation is succesfully
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 2 ; j++)
		{
			for (k = 0; k < 10 ; k++)
			{
				if (j == 1)
				{
					if (k < 5)
					{
						_putchar(j + '0');
					}
				}
				if (!(j == 1 && k > 4))
				{
					_putchar(k + '0');
				}
			}
		}
		_putchar('\n');
	}
}
