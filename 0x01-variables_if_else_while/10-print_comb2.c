#include <stdio.h>
/**
 * main - numbers from 00 to 99
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	int j;
	int ascii = 48;

	for (i = 0 + ascii; i < 10 + ascii; i++)
	{
		for (j = 0 + ascii; j < 10 + ascii ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '9' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
