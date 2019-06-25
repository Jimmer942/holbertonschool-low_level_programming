#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	long int fibo = 1;
	long int cont1 = 0;
	long int cont2 = 1;
	long int sum = 0;

	for (i = 0; i < 50; i++)
	{
		if (!(fibo > 3000000))
		{
		cont1 = cont2;
		cont2 = fibo;
		fibo = cont1 + cont2;
		if (fibo % 2 == 0)
		{
			sum = sum + fibo;
		}
		}
		else
		{
			i = 50;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
