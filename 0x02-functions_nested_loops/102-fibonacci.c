#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	long double fibo = 1;
	long double cont1 = 0;
	long double cont2 = 1;

	for (i = 0; i <= 49; i++)
	{
		fibo = cont1 + cont2;
		cont1 = cont2;
		cont2 = fibo;
		if (i != 49)
		{
		printf("%.0Lf, ", fibo);
		}
		else
		{
			printf("%.0Lf", fibo);
		}
	}
	printf("\n");
	return (0);
}
