#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, reverse
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
