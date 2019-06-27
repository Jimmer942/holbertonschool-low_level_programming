#include <stdio.h>
/**
 * main - prints the bigger factor prime number
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int cont;
	int i;
	long long int input = 612852475143;
	int p = 2;
	int num = 2;

	while (input != 1)
	{
		if (input % p == 0)
		{
			input = input / p;
		}
		else
		{
			num++;
			for (i = 1; i < num; i++)
			{
				if (num % i == 0)
					cont++;
			}
			if (cont == 2)
				;
			{
				p = num;
			}
		}
	}
	printf("%d\n", p);
	return (0);
}
