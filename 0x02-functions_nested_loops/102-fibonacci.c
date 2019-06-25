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

	printf("1, ");
	for (i = 0; i < 49; i++)
	{
		cont1 = cont2;
		cont2 = fibo;
		fibo = cont1 + cont2;
		if (i != 48)
		{
		printf("%lld, ", fibo);
		}
		else
		{
			printf("%lld", fibo);
		}
	}
	printf("\n");
	return (0);
}
