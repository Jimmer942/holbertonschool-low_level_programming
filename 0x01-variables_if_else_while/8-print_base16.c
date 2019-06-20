#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
