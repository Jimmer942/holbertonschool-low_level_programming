#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - is a program that prints all arguments it receives.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 * Return: always 0 if all arguments are numbers otherwise 1.
 */
int main(int argc, char *argv[])
{
	int add = 0, i;

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && i != 0 && strcmp(argv[i], "0") != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add = add + atoi(argv[i]);
		}
	}
	printf("%i\n", add);
	return (0);
}
