#include <stdio.h>
/**
 * main - numbers from 0 to 9
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
