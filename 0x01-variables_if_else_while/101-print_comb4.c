#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print combination of three-digit numbers
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				if (j != k || j != i || k != i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
