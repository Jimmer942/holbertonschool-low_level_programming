#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
