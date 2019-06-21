#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print combination of two-digit numbers
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	int j;
	int salto;

	j = 48;
	salto = 0;
	for (i = 48; i < 58; i++)
	{
		for (j = j + salto ; j < 58; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		j = 48;
		salto++;
	}
	putchar('\n');
	return (0);
}
