#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except e - q
 * Return: 0 if compilation is succesfully
 */
int main(void)
{
	int i;
	int cont = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			cont = cont + i;
		}
	}
	printf("%d \n", cont);
}
