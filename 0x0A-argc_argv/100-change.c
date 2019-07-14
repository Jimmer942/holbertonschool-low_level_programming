#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - is a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return: always 0 if are exactly 2 arguments otherwise 1.
 */
int main(int argc, char *argv[])
{
	int ch = atoi(argv[argc - 1]);
	int cent[5] = {25, 10, 5, 2, 1};
	int coin = 0, i;

	if (argc == 2)
	{
		if (ch <= 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (cent[i] <= ch)
				{
					coin = coin + (ch / cent[i]);
					ch = ch - (ch / cent[i]) * cent[i];
					if (ch == 0)
					{
						printf("%d\n", coin);
						break;
					}
				}
			}
		}
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
