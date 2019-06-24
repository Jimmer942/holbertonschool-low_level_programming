#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times
* Return: 0 if compilation is succesfully
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (i = 97; i < 123; i++)
		{
			if (i == 101 || i == 113)
			{
			}
			else
			{
				_putchar(i);
			}
		}
		_putchar('\n');
	}
}
