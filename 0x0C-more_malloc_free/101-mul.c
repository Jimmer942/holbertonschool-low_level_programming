#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					exit(98);
				}
			}
		}
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
