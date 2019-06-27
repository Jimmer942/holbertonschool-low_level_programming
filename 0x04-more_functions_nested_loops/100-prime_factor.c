#include <stdio.h>
/**
 * main - prints the bigger factor prime number
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int beg;
	int i;
	int cont;
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
	printf("%d\n", p);
	return (0);
}
