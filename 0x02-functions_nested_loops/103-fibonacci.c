#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	long long fibo = 1;
	long long cont1 = 0;
	long long cont2 = 1;
	long long sum = 0;

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
	printf("%lld\n", sum);
}
