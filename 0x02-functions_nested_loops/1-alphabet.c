#include "holberton.h"
/**
* print_alphabet - prints the alphabet in lowercase
* Return: 0 if compilation is succesfully
*/
void print_alphabet(void)
{
	int i;

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
