#include <stdio.h>
/**
 * main - prints the bigger factor prime number
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	long long int beg;
	long long int i;
	long long int cont;
	long long int input = 612852475143;
	long long int p = 2;
	long long int num = 2;

	while (input != 1)
	{
		if (input % p == 0)
		{
			input = input / p;
		}
		else
		{
			beg = num;
			num++;
			for (i = beg; i <= num; i++)
			{
				if (num % i == 0)
					cont++;
			}
			if (cont == 2)
			{
			}
			else
			{
				p = num;
			}
		}
	}
	printf("%lld\n", p);
	return (0);
}
