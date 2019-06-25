#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;

	long double fibo;
	long double cont1 = 0;
	long double cont2 = 1;
	long double aux;
	long double aux1;
	long double aux2;

	for (i = 0; i < 98; i++)
	{ fibo = cont1 + cont2;
		cont1 = cont2;
		cont2 = fibo;
		if (i == 97)
		{
			aux = fibo / 10;
			printf("%.0Lf6 \n", aux);
		}
		else
		{
			if (i == 95 || i == 96)
			{
				if (i == 95)
				{
					aux1 = (fibo / 10) - 0.5;
					printf("%.0Lf7, ", aux1);
				}
				else
				{
					aux2 = (fibo / 100);
					printf("%.0Lf49, ", aux2);
				}
			}
			else
			{
				printf("%.0Lf, ", fibo);
			}
		}
	}
	return (0); }
